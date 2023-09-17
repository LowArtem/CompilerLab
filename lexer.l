%option noyywrap
%option never-interactive

%{
	#include <stdio.h>
    #include <stdlib.h>
%}

DIGIT [0-9]
HEX_DIGIT [0-9A-Fa-f]
OCT_DIGIT [0-7]
BIN_DIGIT [01]
EXPONENT [eE][+-]?[1-9]{DIGIT}*(_{DIGIT}+)*
NUMBER_ALPHA_UNDERSCOPE [a-zA-Z0-9_]

%x ML_COMMENT_1
%x ML_COMMENT_2

%%

%{
    char comment[10000];
%}

and                 { printf("Keyword: %s\n", yytext); }
array               { printf("Keyword: %s\n", yytext); }
as                  { printf("Keyword: %s\n", yytext); }
asm                 { printf("Keyword: %s\n", yytext); }
begin               { printf("Keyword: %s\n", yytext); }
case                { printf("Keyword: %s\n", yytext); }
class               { printf("Keyword: %s\n", yytext); }
const               { printf("Keyword: %s\n", yytext); }
constructor         { printf("Keyword: %s\n", yytext); }
destructor          { printf("Keyword: %s\n", yytext); }
div                 { printf("Keyword: %s\n", yytext); }
do                  { printf("Keyword: %s\n", yytext); }
downto              { printf("Keyword: %s\n", yytext); }
else                { printf("Keyword: %s\n", yytext); }
end                 { printf("Keyword: %s\n", yytext); }
excep               { printf("Keyword: %s\n", yytext); }
exports             { printf("Keyword: %s\n", yytext); }
file                { printf("Keyword: %s\n", yytext); }
finally             { printf("Keyword: %s\n", yytext); }
for                 { printf("Keyword: %s\n", yytext); }
function            { printf("Keyword: %s\n", yytext); }
goto                { printf("Keyword: %s\n", yytext); }
if                  { printf("Keyword: %s\n", yytext); }
implementation      { printf("Keyword: %s\n", yytext); }
in                  { printf("Keyword: %s\n", yytext); }
inherited           { printf("Keyword: %s\n", yytext); }
initialization      { printf("Keyword: %s\n", yytext); }
inline              { printf("Keyword: %s\n", yytext); }
interface           { printf("Keyword: %s\n", yytext); }
is                  { printf("Keyword: %s\n", yytext); }
label               { printf("Keyword: %s\n", yytext); }
library             { printf("Keyword: %s\n", yytext); }
mod                 { printf("Keyword: %s\n", yytext); }
nil                 { printf("Keyword: %s\n", yytext); }
not                 { printf("Keyword: %s\n", yytext); }
object              { printf("Keyword: %s\n", yytext); }
of                  { printf("Keyword: %s\n", yytext); }
on                  { printf("Keyword: %s\n", yytext); }
or                  { printf("Keyword: %s\n", yytext); }
packed              { printf("Keyword: %s\n", yytext); }
procedure           { printf("Keyword: %s\n", yytext); }
program             { printf("Keyword: %s\n", yytext); }
property            { printf("Keyword: %s\n", yytext); }
raise               { printf("Keyword: %s\n", yytext); }
record              { printf("Keyword: %s\n", yytext); }
repeat              { printf("Keyword: %s\n", yytext); }
set                 { printf("Keyword: %s\n", yytext); }
shl                 { printf("Keyword: %s\n", yytext); }
shr                 { printf("Keyword: %s\n", yytext); }
string              { printf("Keyword: %s\n", yytext); }
then                { printf("Keyword: %s\n", yytext); }
to                  { printf("Keyword: %s\n", yytext); }
try                 { printf("Keyword: %s\n", yytext); }
type                { printf("Keyword: %s\n", yytext); }
unit                { printf("Keyword: %s\n", yytext); }
until               { printf("Keyword: %s\n", yytext); }
uses                { printf("Keyword: %s\n", yytext); }
var                 { printf("Keyword: %s\n", yytext); }
while               { printf("Keyword: %s\n", yytext); }
with                { printf("Keyword: %s\n", yytext); }
xor                 { printf("Keyword: %s\n", yytext); }

absolute            { printf("Keyword: %s\n", yytext) }
abstract            { printf("Keyword: %s\n", yytext) }
assembler           { printf("Keyword: %s\n", yytext) }
at                  { printf("Keyword: %s\n", yytext) }
cdecl               { printf("Keyword: %s\n", yytext) }
default             { printf("Keyword: %s\n", yytext) }
dynamic             { printf("Keyword: %s\n", yytext) }
export              { printf("Keyword: %s\n", yytext) }
external            { printf("Keyword: %s\n", yytext) }
far                 { printf("Keyword: %s\n", yytext) }
forward             { printf("Keyword: %s\n", yytext) }
index               { printf("Keyword: %s\n", yytext) }
interrupt           { printf("Keyword: %s\n", yytext) }
message             { printf("Keyword: %s\n", yytext) }
name                { printf("Keyword: %s\n", yytext) }
near                { printf("Keyword: %s\n", yytext) }
nodefault           { printf("Keyword: %s\n", yytext) }
override            { printf("Keyword: %s\n", yytext) }
private             { printf("Keyword: %s\n", yytext) }
protected           { printf("Keyword: %s\n", yytext) }
public              { printf("Keyword: %s\n", yytext) }
published           { printf("Keyword: %s\n", yytext) }
read                { printf("Keyword: %s\n", yytext) }
resident            { printf("Keyword: %s\n", yytext) }
stored              { printf("Keyword: %s\n", yytext) }
virtual             { printf("Keyword: %s\n", yytext) }
write               { printf("Keyword: %s\n", yytext) }

integer             { printf("Type: %s\n", yytext); }
real                { printf("Type: %s\n", yytext); }
boolean             { printf("Type: %s\n", yytext); }
string              { printf("Type: %s\n", yytext); }
char                { printf("Type: %s\n", yytext); }
array               { printf("Type: %s\n", yytext); }
record              { printf("Type: %s\n", yytext); }
pointer             { printf("Type: %s\n", yytext); }
procedural          { printf("Type: %s\n", yytext); }
variant             { printf("Type: %s\n", yytext); }
set                 { printf("Type: %s\n", yytext); }
enumerated          { printf("Type: %s\n", yytext); }
subrange            { printf("Type: %s\n", yytext); }
file                { printf("Type: %s\n", yytext); }
class               { printf("Type: %s\n", yytext); }
reference           { printf("Type: %s\n", yytext); }


"+"                 { printf("Operator: %s\n", yytext); }
"-"                 { printf("Operator: %s\n", yytext); }
"*"                 { printf("Operator: %s\n", yytext); }
"/"                 { printf("Operator: %s\n", yytext); }
"="                 { printf("Operator: %s\n", yytext); }
"<>"                { printf("Operator: %s\n", yytext); }
"<"                 { printf("Operator: %s\n", yytext); }
">"                 { printf("Operator: %s\n", yytext); }
"<="                { printf("Operator: %s\n", yytext); }
">="                { printf("Operator: %s\n", yytext); }
":="                { printf("Operator: %s\n", yytext); }
"@"                 { printf("Operator: %s\n", yytext); }
"^"                 { printf("Operator: %s\n", yytext); }

\/\/                { printf("Single-line comment: %s\n", yytext + 2); }

"{"                 { 
                        comment[0] = 0;
                        BEGIN(ML_COMMENT_1);
                    }
"(*"                {
                        comment[0] = 0;
                        BEGIN(ML_COMMENT_2); 
                    }
<ML_COMMENT_1>"}"        { 
                            strcat(comment, yytext);
                            printf("Multi-line comment: %s\n", comment);
                            BEGIN(INITIAL); 
                         }
<ML_COMMENT_2>"*)"       { 
                            strcat(comment, yytext);
                            printf("Mmulti-line comment: %s\n", comment);
                            BEGIN(INITIAL); 
                         } 
<ML_COMMENT_1, ML_COMMENT_2> {
                                strcat(comment, yytext);
                             }

[a-zA-Z]{NUMBER_ALPHA_UNDERSCOPE}* { printf("Identifier: %s\n", yytext) }