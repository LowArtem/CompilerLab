/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_COMPILERLAB_GRAMMAR_TAB_HPP_INCLUDED
# define YY_YY_COMPILERLAB_GRAMMAR_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 7 ".\\CompilerLab\\grammar.y"

    #include <stdio.h>
    #include <string>
    #include <list>
    #include "classes/literalNode.h"
    #include "classes/exprNode.h"
    #include "classes/stmtNode.h"
    #include "classes/ifStmtNode.h"
    #include "classes/stmtBlockNode.h"
    #include "classes/repeatStmtNode.h"
    #include "classes/caseStmtNode.h"
    #include "classes/caseElementNode.h"
    #include "classes/paramListNode.h"
    #include "classes/varDeclNode.h"
    #include "classes/typeNode.h"
    #include "classes/arrayDimensionNode.h"
    #include "classes/withStmtNode.h"
    #include "classes/forStmtNode.h"
    #include "classes/whileStmtNode.h"
    #include "classes/functionElementNode.h"
    #include "classes/procedureImplNode.h"
    #include "classes/functionImplNode.h"
    #include "classes/classDeclHeaderNode.h"
    #include "classes/classDeclNode.h"
    #include "classes/propertyDeclNode.h"
    #include "classes/methodFunctionDeclNode.h"
    #include "classes/methodFunctionDeclWithModifierNode.h"
    #include "classes/methodProcedureDeclWithModifierNode.h"
    #include "classes/constructorDeclNode.h"
    #include "classes/constructorDeclWithModifierNoNode.h"
    #include "classes/constructorImplNode.h"
    #include "classes/destructorDeclNode.h"
    #include "classes/destructorImplNode.h"
    #include "classes/methodDeclNode.h"
    #include "classes/methodFieldPropertyNode.h"
    #include "classes/accessModifierEnum.h"
    #include "classes/classElementNode.h"
    #include "classes/sectionNode.h"
    #include "classes/enumDeclNode.h"
    #include "classes/enumParamNode.h"
    #include "classes/fieldDeclNode.h"
    #include "classes/implementationElementNode.h"
    #include "classes/modifierEnum.h"
    #include "classes/simpleTypeEnum.h"
    #include "classes/typeSectNode.h"
    #include "classes/startSymbolNode.h"
    #pragma once

    using namespace std;
 

#line 101 ".\\CompilerLab\\grammar.tab.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INTEGER_KW = 258,              /* INTEGER_KW  */
    REAL_KW = 259,                 /* REAL_KW  */
    BOOLEAN_KW = 260,              /* BOOLEAN_KW  */
    STRING_KW = 261,               /* STRING_KW  */
    CHAR_KW = 262,                 /* CHAR_KW  */
    ARRAY_KW = 263,                /* ARRAY_KW  */
    ID = 264,                      /* ID  */
    TRUE_KW = 265,                 /* TRUE_KW  */
    FALSE_KW = 266,                /* FALSE_KW  */
    INTEGER = 267,                 /* INTEGER  */
    REAL = 268,                    /* REAL  */
    STRING = 269,                  /* STRING  */
    CHAR = 270,                    /* CHAR  */
    PROGRAM_KW = 271,              /* PROGRAM_KW  */
    BEGIN_KW = 272,                /* BEGIN_KW  */
    END_KW = 273,                  /* END_KW  */
    VAR_KW = 274,                  /* VAR_KW  */
    TYPE_KW = 275,                 /* TYPE_KW  */
    IMPLEMENTATION_KW = 276,       /* IMPLEMENTATION_KW  */
    CLASS_KW = 277,                /* CLASS_KW  */
    CONSTRUCTOR_KW = 278,          /* CONSTRUCTOR_KW  */
    DESTRUCTOR_KW = 279,           /* DESTRUCTOR_KW  */
    PUBLIC_KW = 280,               /* PUBLIC_KW  */
    PRIVATE_KW = 281,              /* PRIVATE_KW  */
    PROTECTED_KW = 282,            /* PROTECTED_KW  */
    PROPERTY_KW = 283,             /* PROPERTY_KW  */
    READ_KW = 284,                 /* READ_KW  */
    STATIC_KW = 285,               /* STATIC_KW  */
    WRITE_KW = 286,                /* WRITE_KW  */
    OVERRIDE_KW = 287,             /* OVERRIDE_KW  */
    OVERLOAD_KW = 288,             /* OVERLOAD_KW  */
    CONST_KW = 289,                /* CONST_KW  */
    PROCEDURE_KW = 290,            /* PROCEDURE_KW  */
    FUNCTION_KW = 291,             /* FUNCTION_KW  */
    INHERITED_KW = 292,            /* INHERITED_KW  */
    SELF_KW = 293,                 /* SELF_KW  */
    WITH_KW = 294,                 /* WITH_KW  */
    OF_KW = 295,                   /* OF_KW  */
    IF_KW = 296,                   /* IF_KW  */
    CASE_KW = 297,                 /* CASE_KW  */
    THEN_KW = 298,                 /* THEN_KW  */
    ELSE_KW = 299,                 /* ELSE_KW  */
    WHILE_KW = 300,                /* WHILE_KW  */
    DO_KW = 301,                   /* DO_KW  */
    FOR_KW = 302,                  /* FOR_KW  */
    TO_KW = 303,                   /* TO_KW  */
    DOWNTO_KW = 304,               /* DOWNTO_KW  */
    OUT_KW = 305,                  /* OUT_KW  */
    REPEAT_KW = 306,               /* REPEAT_KW  */
    UNTIL_KW = 307,                /* UNTIL_KW  */
    ASSIGNMENT = 308,              /* ASSIGNMENT  */
    EQUALS = 309,                  /* EQUALS  */
    NOT_EQUAL = 310,               /* NOT_EQUAL  */
    LESS = 311,                    /* LESS  */
    GREATER = 312,                 /* GREATER  */
    LESS_OR_EQUAL = 313,           /* LESS_OR_EQUAL  */
    GREATER_OR_EQUAL = 314,        /* GREATER_OR_EQUAL  */
    IN_KW = 315,                   /* IN_KW  */
    IS_KW = 316,                   /* IS_KW  */
    NOT_KW = 317,                  /* NOT_KW  */
    AND_KW = 318,                  /* AND_KW  */
    AS_KW = 319,                   /* AS_KW  */
    XOR_KW = 320,                  /* XOR_KW  */
    OR_KW = 321,                   /* OR_KW  */
    PLUS = 322,                    /* PLUS  */
    MINUS = 323,                   /* MINUS  */
    MULTIPLICATION = 324,          /* MULTIPLICATION  */
    DIVISION = 325,                /* DIVISION  */
    DIV_KW = 326,                  /* DIV_KW  */
    MOD_KW = 327,                  /* MOD_KW  */
    DOT = 328,                     /* DOT  */
    DOUBLE_DOT = 329,              /* DOUBLE_DOT  */
    OPEN_SQUARE_BRACKET = 330,     /* OPEN_SQUARE_BRACKET  */
    CLOSE_SQUARE_BRACKET = 331,    /* CLOSE_SQUARE_BRACKET  */
    OPEN_BRACKET = 332,            /* OPEN_BRACKET  */
    CLOSE_BRACKET = 333,           /* CLOSE_BRACKET  */
    COMMA = 334,                   /* COMMA  */
    SEMICOLON = 335,               /* SEMICOLON  */
    COLON = 336,                   /* COLON  */
    UMINUS = 337,                  /* UMINUS  */
    UPLUS = 338                    /* UPLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 58 ".\\CompilerLab\\grammar.y"

    int int_union;
    double real_union;
    bool boolean_union;
    char char_union;
    string* string_union;
    string* keyword_union;
    string* service_symbol_union;
    string* id_union;
    simpleType simple_type_union;
    literalNode* literal_union;
    arrayDimensionNode* array_dimension_union;
    list<arrayDimensionNode*>* array_dimension_list_union;
    typeNode* type_union;
    exprNode* expr_union;
    list<exprNode*>* expr_list_union;
    stmtNode* stmt_union;
    list<stmtNode*>* stmt_list_union;
    ifStmtNode* if_stmt_union;
    repeatStmtNode* repeat_stmt_union;
    whileStmtNode* while_stmt_union;
    forStmtNode* for_stmt_union;
    withStmtNode* with_stmt_union;
    caseStmtNode* case_stmt_union;
    list<caseElementNode*>* case_element_list_union;
    stmtBlockNode* stmt_block_union;
    varDeclNode* var_decl_union;
    list<varDeclNode*>* var_decl_list_union;
    list<enumParamNode*>* enum_param_list_union;
    enumDeclNode* enum_decl_union;
    list<enumDeclNode*>* enum_decl_list_union;
    typeSectNode* type_sect_union;
    list<paramListNode*>* param_list_union;
    functionElementNode* function_element_union;
    procedureImplNode* procedure_impl_union;
    functionImplNode* function_impl_union;
    modifier modifier_union;
    list<modifier>* modifier_list_union;
    fieldDeclNode* field_decl_union;
    classDeclHeaderNode* class_decl_header_union;
    propertyDeclNode* property_decl_union;
    methodFunctionDeclNode* method_function_decl_union;
    implementationElementNode* implementation_element_union;
    list<implementationElementNode*>* implementation_list_union;
    classDeclNode* class_decl_union;
    list<classDeclNode*>* class_decl_list_union;
    methodProcedureDeclWithModifierNode* method_procedure_decl_with_modifier_union;
    methodFunctionDeclWithModifierNode* method_function_decl_with_modifier_union;
    constructorDeclNode* constructor_decl_union;
    constructorDeclWithModifierNoNode* constructor_decl_with_modifier_no_union;
    constructorImplNode* constructor_impl_union;
    destructorDeclNode* destructor_decl_union;
    destructorImplNode* destructor_impl_union;
    methodDeclNode* method_decl_union;
    list<methodFieldPropertyNode*>* method_field_property_list_list_union;
    classElementNode* class_element_union;
    list<classElementNode*>* class_element_list_union;
    sectionNode* section_union;
    list<sectionNode*>* section_list_union;
    startSymbolNode* start_symbol_union;

#line 263 ".\\CompilerLab\\grammar.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_COMPILERLAB_GRAMMAR_TAB_HPP_INCLUDED  */
