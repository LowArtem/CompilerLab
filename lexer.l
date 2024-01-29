%option noyywrap
%option never-interactive
%option case-insensitive

%{
	#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <string>
    #include "../grammar.tab.hpp"
    extern int yyparse(void);
%}

DIGIT [0-9]
HEX_DIGIT [0-9A-Fa-f]
OCT_DIGIT [0-7]
EXPONENT [eE][+-]?[1-9]{DIGIT}*({DIGIT}+)*
NUMBER_ALPHA_UNDERSCORE [a-zA-Z0-9_]

%x ML_COMMENT_1
%x ML_COMMENT_2
%x STRING_MODE

%%

%{
    char comment[10000];
    char string_arr[10000];
    char id[1000];
%}

and                 { printf("and"); return AND_KW; }
as                  { printf("as"); return AS_KW; }
asm                 { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
begin               { printf("begin"); return BEGIN_KW; }
case                { return CASE_KW; }
class               { printf("class"); return CLASS_KW; }
const               { return CONST_KW; }
constructor         { printf("constructor"); return CONSTRUCTOR_KW; }
destructor          { printf("destructor"); return DESTRUCTOR_KW; }
div                 { return DIV_KW; }
do                  { return DO_KW; }
downto              { return DOWNTO_KW; }
else                { printf("else"); return ELSE_KW; }
end                 { printf("end"); return END_KW; }
excep               { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
exports             { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
finally             { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
for                 { printf("for"); return FOR_KW; }
function            { return FUNCTION_KW; }
goto                { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
if                  { printf("if"); return IF_KW; }
implementation      { return IMPLEMENTATION_KW; }
in                  { return IN_KW; }
inherited           { return INHERITED_KW; }
self                { return SELF_KW; }
initialization      { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
inline              { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
interface           { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
is                  { return IS_KW; }
label               { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
library             { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
mod                 { return MOD_KW; }
nil                 { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
not                 { return NOT_KW; }
object              { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
of                  { return OF_KW; }
on                  { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
or                  { return OR_KW; }
out                 { return OUT_KW; }
packed              { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
procedure           { return PROCEDURE_KW; }
program             { printf("PROGRAM\n"); return PROGRAM_KW; }
property            { return PROPERTY_KW; }
raise               { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
record              { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
repeat              { return REPEAT_KW; }
set                 { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
shl                 { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
shr                 { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
then                { printf("then"); return THEN_KW; }
to                  { return TO_KW; }
try                 { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
type                { printf("type"); return TYPE_KW; }
unit                { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
until               { return UNTIL_KW; }
uses                { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
var                 { return VAR_KW; }
while               { return WHILE_KW; }
with                { return WITH_KW; }
xor                 { return XOR_KW; }

absolute            { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
abstract            { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
assembler           { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
at                  { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
cdecl               { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
default             { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
dynamic             { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
export              { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
external            { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
far                 { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
forward             { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
index               { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
interrupt           { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
message             { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
name                { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
near                { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
nodefault           { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
override            { printf("override"); return OVERRIDE_KW; }
overload            { return OVERLOAD_KW; }
private             { printf("private"); return PRIVATE_KW; }
protected           { printf("protected"); return PROTECTED_KW; }
public              { printf("public"); return PUBLIC_KW; }
read                { return READ_KW; }
resident            { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
static              { return STATIC_KW; }
stored              { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
virtual             { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
write               { return WRITE_KW; }

integer             { printf("integer"); return INTEGER_KW; }
real                { return REAL_KW; }
boolean             { return BOOLEAN_KW; }
string              { printf("string"); return STRING_KW; }
char                { return CHAR_KW; }
array               { return ARRAY_KW; }
variant             { printf("ERROR: unexpected symbol: \"%s\"", yytext); }

true                { return TRUE_KW; }
false               { return FALSE_KW; }

#{DIGIT}+           { 
                        int symbol_idx = atoi(yytext + 1);
                        if(symbol_idx > 255) {
                            printf("ERROR: no support ASCII >255\n");
                        }
                        else {
                            //printf("Character constant: \"%c\"\n", (char)symbol_idx);
                            yylval.char_union = (char)symbol_idx;
                            return CHAR;
                        }
                    }

\'.\'               {
                        yylval.char_union = (char)atoi(yytext + 1);
                        return CHAR;
                    }

{DIGIT}+"."{DIGIT}*{EXPONENT}         {
                                         double val = atof(yytext);
                                         printf("Exponential number: %f\n", val);
                                         yylval.real_union = val;
                                         return REAL;
                                      }

".."                { return DOUBLE_DOT; }

{DIGIT}+{EXPONENT}                    {
                                         double val = atof(yytext);
                                         //printf("Exponential number: %f\n", val);
                                         yylval.real_union = val;
                                         return REAL;
                                      }

{DIGIT}+"."{DIGIT}+ {
                        printf("Real digit: %f\n", atof(yytext));
                        yylval.real_union = atof(yytext);
                        return REAL;
                    }

\&[^0-7]            { printf("ERROR: expected oct digit\n"); }
\&{OCT_DIGIT}+      { 
                        printf("Oct digit: %d\n", (int)strtol(yytext + 1, NULL, 8));
                        yylval.int_union = (int)strtol(yytext + 1, NULL, 8);
                        return INTEGER;
                    }
\$[^0-9A-Fa-f]      { printf("ERROR: expected hex digit\n"); }                                      
\${HEX_DIGIT}+      { 
                        printf("Hex digit: %d\n", (int)strtol(yytext + 1, NULL, 16));
                        yylval.int_union = (int)strtol(yytext + 1, NULL, 16);
                        return INTEGER;
                    }
{DIGIT}+            { 
                        printf("Digit: %d\n", atoi(yytext));
                        yylval.int_union = atoi(yytext);
                        return INTEGER;
                    }

\'                  { 
                        string_arr[0] = 0;
                        BEGIN(STRING_MODE);
                    }
<STRING_MODE>[^'\n]+     { strcat(string_arr, yytext); }
<STRING_MODE>\'\'        { strcat(string_arr, "\'"); }
<STRING_MODE>\'          {
                        printf("\"%s\"\n", string_arr);

                        char test[10000];
                        strcpy(test, string_arr);

                        yylval.string_union = new std::string(test);

                        BEGIN(INITIAL);
                        printf("str_union: %s\n", yylval.string_union->c_str());

                        return STRING;
                    }
<STRING_MODE><<EOF>>     { printf("ERROR: expected \'\n"); }
<STRING_MODE>\n          { printf("ERROR: \\n in string\n"); }

"+"                 { return PLUS; }
"-"                 { return MINUS; }
"*"                 { return MULTIPLICATION; }
"/"                 { return DIVISION; }
"="                 { return EQUALS; }
"<>"                { return NOT_EQUAL; }
"<"                 { return LESS; }
">"                 { return GREATER; }
"<="                { return LESS_OR_EQUAL; }
">="                { return GREATER_OR_EQUAL; }
":="                { return ASSIGNMENT; }
"@"                 { printf("ERROR: unexpected symbol: \"%s\"", yytext); }
"^"                 { printf("ERROR: unexpected symbol: \"%s\"", yytext); }

\/\/.*$             {}

"{"                     { 
                            comment[0] = 0;
                            BEGIN(ML_COMMENT_1);
                        }
"(*"                    {
                            comment[0] = 0;
                            BEGIN(ML_COMMENT_2); 
                        }
<ML_COMMENT_1>"}"       { BEGIN(INITIAL); }
<ML_COMMENT_2>"*)"      { BEGIN(INITIAL); } 
<ML_COMMENT_1>[^}]*     {}
<ML_COMMENT_2>[^*]+     {}
<ML_COMMENT_2>\*+[^)]   {}

";"                 { printf(";"); return SEMICOLON; }
":"                 { printf(":"); return COLON; }
"."                 { return DOT; }
","                 { return COMMA; }

"("                 { printf("("); return OPEN_BRACKET; }
")"                 { printf(")"); return CLOSE_BRACKET; }
"["                 { printf("["); return OPEN_SQUARE_BRACKET; }
"]"                 { printf("]"); return CLOSE_SQUARE_BRACKET; }

[_a-zA-Z]{NUMBER_ALPHA_UNDERSCORE}*     {
                                            strcpy(id, yytext);

                                            yylval.id_union = new std::string(id);

                                            printf("ID: %s\n", id);

                                            return ID;
                                        }

" "                 { printf(" "); }

%%

int l_main(FILE* file) {
    if (file == NULL) {
        printf("File opening error");
        return 1;
    }
    
    yyin = file;

    yyparse();

    fclose(file);

    return 0;
}