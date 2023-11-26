%option noyywrap
%option never-interactive
%option case-insensitive

%{
	#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "parser.tab.h"
    extern int yyparse(void);
%}

DIGIT [0-9]
HEX_DIGIT [0-9A-Fa-f]
OCT_DIGIT [0-7]
EXPONENT [eE][+-]?[1-9]{DIGIT}*({DIGIT}+)*
NUMBER_ALPHA_UNDERSCORE [a-zA-Z0-9_]

%x ML_COMMENT_1
%x ML_COMMENT_2
%x STRING

%%

%{
    char comment[10000];
    char string[10000];
%}

and                 { return AND_KW; }
array               { return ; }
as                  { return AS_KW; }
asm                 { return ; }
begin               { return BEGIN_KW; }
case                { return CASE_KW; }
class               { return CLASS_KW; }
const               { return CONST_KW; }
constructor         { return CONSTRUCTOR_KW; }
destructor          { return DESTRUCTOR_KW; }
div                 { return DIV_KW; }
do                  { return DO_KW; }
downto              { return DOWNTO_KW; }
else                { return ELSE_KW; }
end                 { return END_KW; }
excep               { return ; }
exports             { return ; }
finally             { return ; }
for                 { return FOR_KW; }
function            { return FUNCTION_KW; }
goto                { return ; }
if                  { return IF_KW; }
implementation      { return ; }
in                  { return IN_KW; }
inherited           { return INHERITED_KW; }
self                { return SELF_KW; }
initialization      { return ; }
inline              { return ; }
interface           { return ; }
is                  { return IS_KW; }
label               { return ; }
library             { return ; }
mod                 { return MOD_KW; }
nil                 { return ; }
not                 { return NOT_KW; }
object              { return ; }
of                  { return OF_KW; }
on                  { return ; }
or                  { return OR_KW; }
out                 { return OUT_KW; }
packed              { return ; }
procedure           { return PROCEDURE_KW; }
program             { return PROGRAM_KW; }
property            { return PROPERTY_KW; }
raise               { return ; }
record              { return ; }
repeat              { return REPEAT_KW; }
set                 { return ; }
shl                 { return ; }
shr                 { return ; }
string              { return ; }
then                { return THEN_KW; }
to                  { return TO_KW; }
try                 { return ; }
type                { return TYPE_KW; }
unit                { return ; }
until               { return UNTIL_KW; }
uses                { return ; }
var                 { return VAR_KW; }
while               { return WHILE_KW; }
with                { return WITH_KW; }
xor                 { return XOR_KW; }

absolute            { return ; }
abstract            { return ; }
assembler           { return ; }
at                  { return ; }
cdecl               { return ; }
default             { return ; }
dynamic             { return ; }
export              { return ; }
external            { return ; }
far                 { return ; }
forward             { return ; }
index               { return ; }
interrupt           { return ; }
message             { return ; }
name                { return ; }
near                { return ; }
nodefault           { return ; }
override            { return OVERRIDE_KW; }
overload            { return OVERLOAD_KW; }
private             { return PRIVATE_KW; }
protected           { return PROTECTED_KW; }
public              { return PUBLIC_KW; }
read                { return READ_KW; }
resident            { return ; }
static              { return STATIC_KW; }
stored              { return ; }
virtual             { return ; }
write               { return WRITE_KW; }

integer             { return INTEGER_KW; }
real                { return REAL_KW; }
boolean             { return BOOLEAN_KW; }
string              { return STRING_KW; }
char                { return CHAR_KW; }
array               { return ARRAY_KW; }
variant             { return VARIANT_KW; }
set                 { return SET_KW; }

true                { return TRUE_KW; }
false               { return FALSE_KW; }

#{DIGIT}+           { 
                        int symbol_idx = atoi(yytext + 1);
                        if(symbol_idx > 255) {
                            printf("ERROR: no support ASCII >255\n");
                        }
                        else {
                            printf("Character constant: \"%c\"\n", (char)symbol_idx);
                        }
                    }

{DIGIT}+"."?{DIGIT}*{EXPONENT}        {
                                         double val = atof(yytext);
                                         printf("Exponential number: %f\n", val);
                                      }
\&[^0-7]            { printf("ERROR: expected oct digit\n"); }
\&{OCT_DIGIT}+      { printf("Oct digit: %d\n", (int)strtol(yytext + 1, NULL, 8)); }
\$[^0-9A-Fa-f]      { printf("ERROR: expected hex digit\n"); }                                      
\${HEX_DIGIT}+      { printf("Hex digit: %d\n", (int)strtol(yytext + 1, NULL, 16)); }
{DIGIT}+"."{DIGIT}* { printf("Real digit: %f\n", atof(yytext)); }
{DIGIT}+            { printf("Digit: %d\n", atoi(yytext)); }

\'                  { 
                        string[0] = 0; 
                        BEGIN(STRING);    
                    }
<STRING>[^'\n]+     { strcat(string, yytext); }
<STRING>\'\'        { strcat(string, "\'"); }
<STRING>\'          { 
                        return STRING;
                        BEGIN(INITIAL);
                    }
<STRING><<EOF>>     { printf("ERROR: expected \'\n"); }
<STRING>\n          { printf("ERROR: \\n in string\n"); }

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
"@"                 { return ; }
"^"                 { return ; }

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

";"                 { return SEMICOLON; }
":"                 { return COLON; }
"."                 { return DOTE; }
","                 { return COMMA; }

"("                 { return OPEN_BRACKET; }
")"                 { return CLOSE_BRACKET; }
"["                 { return OPEN_SQUARE_BRACKET; }
"]"                 { return CLOSE_SQUARE_BRACKET; }

[_a-zA-Z]{NUMBER_ALPHA_UNDERSCORE}*     { return ID; }

%%

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("You need to specify file name");
        return 1;
    }

    const char *filename = argv[1];
    
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("File opening error");
        return 1;
    }

    yyin = file;

    yyparse();

    fclose(file);

    return 0;
}