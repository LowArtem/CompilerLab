/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 ".\\CompilerLab\\grammar.y"

    #include "../grammar.tab.hpp"

    extern int yylex(void);

#line 77 ".\\CompilerLab\\grammar.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "grammar.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER_KW = 3,                 /* INTEGER_KW  */
  YYSYMBOL_REAL_KW = 4,                    /* REAL_KW  */
  YYSYMBOL_BOOLEAN_KW = 5,                 /* BOOLEAN_KW  */
  YYSYMBOL_STRING_KW = 6,                  /* STRING_KW  */
  YYSYMBOL_CHAR_KW = 7,                    /* CHAR_KW  */
  YYSYMBOL_ARRAY_KW = 8,                   /* ARRAY_KW  */
  YYSYMBOL_ID = 9,                         /* ID  */
  YYSYMBOL_TRUE_KW = 10,                   /* TRUE_KW  */
  YYSYMBOL_FALSE_KW = 11,                  /* FALSE_KW  */
  YYSYMBOL_INTEGER = 12,                   /* INTEGER  */
  YYSYMBOL_REAL = 13,                      /* REAL  */
  YYSYMBOL_STRING = 14,                    /* STRING  */
  YYSYMBOL_CHAR = 15,                      /* CHAR  */
  YYSYMBOL_PROGRAM_KW = 16,                /* PROGRAM_KW  */
  YYSYMBOL_BEGIN_KW = 17,                  /* BEGIN_KW  */
  YYSYMBOL_END_KW = 18,                    /* END_KW  */
  YYSYMBOL_VAR_KW = 19,                    /* VAR_KW  */
  YYSYMBOL_TYPE_KW = 20,                   /* TYPE_KW  */
  YYSYMBOL_IMPLEMENTATION_KW = 21,         /* IMPLEMENTATION_KW  */
  YYSYMBOL_CLASS_KW = 22,                  /* CLASS_KW  */
  YYSYMBOL_CONSTRUCTOR_KW = 23,            /* CONSTRUCTOR_KW  */
  YYSYMBOL_DESTRUCTOR_KW = 24,             /* DESTRUCTOR_KW  */
  YYSYMBOL_PUBLIC_KW = 25,                 /* PUBLIC_KW  */
  YYSYMBOL_PRIVATE_KW = 26,                /* PRIVATE_KW  */
  YYSYMBOL_PROTECTED_KW = 27,              /* PROTECTED_KW  */
  YYSYMBOL_PROPERTY_KW = 28,               /* PROPERTY_KW  */
  YYSYMBOL_READ_KW = 29,                   /* READ_KW  */
  YYSYMBOL_STATIC_KW = 30,                 /* STATIC_KW  */
  YYSYMBOL_WRITE_KW = 31,                  /* WRITE_KW  */
  YYSYMBOL_OVERRIDE_KW = 32,               /* OVERRIDE_KW  */
  YYSYMBOL_OVERLOAD_KW = 33,               /* OVERLOAD_KW  */
  YYSYMBOL_CONST_KW = 34,                  /* CONST_KW  */
  YYSYMBOL_PROCEDURE_KW = 35,              /* PROCEDURE_KW  */
  YYSYMBOL_FUNCTION_KW = 36,               /* FUNCTION_KW  */
  YYSYMBOL_INHERITED_KW = 37,              /* INHERITED_KW  */
  YYSYMBOL_SELF_KW = 38,                   /* SELF_KW  */
  YYSYMBOL_WITH_KW = 39,                   /* WITH_KW  */
  YYSYMBOL_OF_KW = 40,                     /* OF_KW  */
  YYSYMBOL_IF_KW = 41,                     /* IF_KW  */
  YYSYMBOL_CASE_KW = 42,                   /* CASE_KW  */
  YYSYMBOL_THEN_KW = 43,                   /* THEN_KW  */
  YYSYMBOL_ELSE_KW = 44,                   /* ELSE_KW  */
  YYSYMBOL_WHILE_KW = 45,                  /* WHILE_KW  */
  YYSYMBOL_DO_KW = 46,                     /* DO_KW  */
  YYSYMBOL_FOR_KW = 47,                    /* FOR_KW  */
  YYSYMBOL_TO_KW = 48,                     /* TO_KW  */
  YYSYMBOL_DOWNTO_KW = 49,                 /* DOWNTO_KW  */
  YYSYMBOL_OUT_KW = 50,                    /* OUT_KW  */
  YYSYMBOL_REPEAT_KW = 51,                 /* REPEAT_KW  */
  YYSYMBOL_UNTIL_KW = 52,                  /* UNTIL_KW  */
  YYSYMBOL_ASSIGNMENT = 53,                /* ASSIGNMENT  */
  YYSYMBOL_EQUALS = 54,                    /* EQUALS  */
  YYSYMBOL_NOT_EQUAL = 55,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS = 56,                      /* LESS  */
  YYSYMBOL_GREATER = 57,                   /* GREATER  */
  YYSYMBOL_LESS_OR_EQUAL = 58,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_OR_EQUAL = 59,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_IN_KW = 60,                     /* IN_KW  */
  YYSYMBOL_IS_KW = 61,                     /* IS_KW  */
  YYSYMBOL_NOT_KW = 62,                    /* NOT_KW  */
  YYSYMBOL_AND_KW = 63,                    /* AND_KW  */
  YYSYMBOL_AS_KW = 64,                     /* AS_KW  */
  YYSYMBOL_XOR_KW = 65,                    /* XOR_KW  */
  YYSYMBOL_OR_KW = 66,                     /* OR_KW  */
  YYSYMBOL_PLUS = 67,                      /* PLUS  */
  YYSYMBOL_MINUS = 68,                     /* MINUS  */
  YYSYMBOL_MULTIPLICATION = 69,            /* MULTIPLICATION  */
  YYSYMBOL_DIVISION = 70,                  /* DIVISION  */
  YYSYMBOL_DIV_KW = 71,                    /* DIV_KW  */
  YYSYMBOL_MOD_KW = 72,                    /* MOD_KW  */
  YYSYMBOL_DOT = 73,                       /* DOT  */
  YYSYMBOL_DOUBLE_DOT = 74,                /* DOUBLE_DOT  */
  YYSYMBOL_OPEN_SQUARE_BRACKET = 75,       /* OPEN_SQUARE_BRACKET  */
  YYSYMBOL_CLOSE_SQUARE_BRACKET = 76,      /* CLOSE_SQUARE_BRACKET  */
  YYSYMBOL_OPEN_BRACKET = 77,              /* OPEN_BRACKET  */
  YYSYMBOL_CLOSE_BRACKET = 78,             /* CLOSE_BRACKET  */
  YYSYMBOL_COMMA = 79,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 80,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 81,                     /* COLON  */
  YYSYMBOL_UMINUS = 82,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 83,                     /* UPLUS  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_section = 85,                   /* section  */
  YYSYMBOL_sect_list = 86,                 /* sect_list  */
  YYSYMBOL_start_symbol = 87,              /* start_symbol  */
  YYSYMBOL_simple_type = 88,               /* simple_type  */
  YYSYMBOL_literal = 89,                   /* literal  */
  YYSYMBOL_array_dimension = 90,           /* array_dimension  */
  YYSYMBOL_array_dimension_list = 91,      /* array_dimension_list  */
  YYSYMBOL_type = 92,                      /* type  */
  YYSYMBOL_expr = 93,                      /* expr  */
  YYSYMBOL_expr_list = 94,                 /* expr_list  */
  YYSYMBOL_expr_list_E = 95,               /* expr_list_E  */
  YYSYMBOL_stmt = 96,                      /* stmt  */
  YYSYMBOL_stmt_list = 97,                 /* stmt_list  */
  YYSYMBOL_stmt_block = 98,                /* stmt_block  */
  YYSYMBOL_id_list = 99,                   /* id_list  */
  YYSYMBOL_var_decl = 100,                 /* var_decl  */
  YYSYMBOL_var_decl_list = 101,            /* var_decl_list  */
  YYSYMBOL_var_decl_sect = 102,            /* var_decl_sect  */
  YYSYMBOL_param_list = 103,               /* param_list  */
  YYSYMBOL_param_list_E = 104,             /* param_list_E  */
  YYSYMBOL_function_element = 105,         /* function_element  */
  YYSYMBOL_procedure_impl = 106,           /* procedure_impl  */
  YYSYMBOL_function_impl = 107,            /* function_impl  */
  YYSYMBOL_if_stmt = 108,                  /* if_stmt  */
  YYSYMBOL_case_list = 109,                /* case_list  */
  YYSYMBOL_case_stmt = 110,                /* case_stmt  */
  YYSYMBOL_repeat_stmt = 111,              /* repeat_stmt  */
  YYSYMBOL_while_stmt = 112,               /* while_stmt  */
  YYSYMBOL_for_stmt = 113,                 /* for_stmt  */
  YYSYMBOL_enum_param_list = 114,          /* enum_param_list  */
  YYSYMBOL_enum_decl = 115,                /* enum_decl  */
  YYSYMBOL_enum_decl_list = 116,           /* enum_decl_list  */
  YYSYMBOL_class_decl_header = 117,        /* class_decl_header  */
  YYSYMBOL_property_decl = 118,            /* property_decl  */
  YYSYMBOL_override_modifier = 119,        /* override_modifier  */
  YYSYMBOL_field_modifier = 120,           /* field_modifier  */
  YYSYMBOL_field_modifier_list = 121,      /* field_modifier_list  */
  YYSYMBOL_field_decl = 122,               /* field_decl  */
  YYSYMBOL_method_procedure_decl = 123,    /* method_procedure_decl  */
  YYSYMBOL_method_procedure_decl_with_modifier_NO = 124, /* method_procedure_decl_with_modifier_NO  */
  YYSYMBOL_method_function_decl = 125,     /* method_function_decl  */
  YYSYMBOL_method_function_decl_with_modifier_NO = 126, /* method_function_decl_with_modifier_NO  */
  YYSYMBOL_constructor_decl = 127,         /* constructor_decl  */
  YYSYMBOL_constructor_decl_with_modifier_NO = 128, /* constructor_decl_with_modifier_NO  */
  YYSYMBOL_constructor_impl = 129,         /* constructor_impl  */
  YYSYMBOL_destructor_decl = 130,          /* destructor_decl  */
  YYSYMBOL_destructor_impl = 131,          /* destructor_impl  */
  YYSYMBOL_implementation_element = 132,   /* implementation_element  */
  YYSYMBOL_implementation_list = 133,      /* implementation_list  */
  YYSYMBOL_implementation_sect = 134,      /* implementation_sect  */
  YYSYMBOL_method_modifier = 135,          /* method_modifier  */
  YYSYMBOL_method_modifier_list = 136,     /* method_modifier_list  */
  YYSYMBOL_method_decl = 137,              /* method_decl  */
  YYSYMBOL_method_field_property_list = 138, /* method_field_property_list  */
  YYSYMBOL_class_element = 139,            /* class_element  */
  YYSYMBOL_class_element_list = 140,       /* class_element_list  */
  YYSYMBOL_class_decl = 141,               /* class_decl  */
  YYSYMBOL_class_decl_list = 142,          /* class_decl_list  */
  YYSYMBOL_type_sect = 143,                /* type_sect  */
  YYSYMBOL_with_stmt = 144                 /* with_stmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1331

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  426

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   338


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   273,   273,   274,   275,   277,   278,   280,   281,   283,
     284,   285,   286,   287,   289,   290,   291,   292,   293,   295,
     297,   298,   300,   301,   305,   306,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   344,   345,
     347,   348,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   362,   363,   365,   367,   371,   376,   377,
     379,   380,   382,   384,   385,   386,   387,   388,   389,   390,
     391,   393,   394,   396,   398,   399,   400,   401,   402,   403,
     404,   405,   407,   408,   409,   410,   412,   413,   414,   415,
     417,   418,   420,   421,   423,   424,   426,   428,   430,   434,
     439,   443,   447,   451,   456,   458,   459,   461,   462,   464,
     465,   467,   469,   470,   472,   477,   482,   483,   485,   486,
     488,   489,   491,   492,   494,   495,   497,   498,   500,   501,
     503,   504,   505,   506,   508,   509,   511,   512,   514,   515,
     516,   517,   519,   520,   522,   524,   525,   527,   532,   537,
     538,   540,   544,   548,   552,   556,   560,   564,   568,   572,
     576,   581,   582,   583,   584,   586,   587,   589,   591,   592,
     594,   595,   597
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER_KW",
  "REAL_KW", "BOOLEAN_KW", "STRING_KW", "CHAR_KW", "ARRAY_KW", "ID",
  "TRUE_KW", "FALSE_KW", "INTEGER", "REAL", "STRING", "CHAR", "PROGRAM_KW",
  "BEGIN_KW", "END_KW", "VAR_KW", "TYPE_KW", "IMPLEMENTATION_KW",
  "CLASS_KW", "CONSTRUCTOR_KW", "DESTRUCTOR_KW", "PUBLIC_KW", "PRIVATE_KW",
  "PROTECTED_KW", "PROPERTY_KW", "READ_KW", "STATIC_KW", "WRITE_KW",
  "OVERRIDE_KW", "OVERLOAD_KW", "CONST_KW", "PROCEDURE_KW", "FUNCTION_KW",
  "INHERITED_KW", "SELF_KW", "WITH_KW", "OF_KW", "IF_KW", "CASE_KW",
  "THEN_KW", "ELSE_KW", "WHILE_KW", "DO_KW", "FOR_KW", "TO_KW",
  "DOWNTO_KW", "OUT_KW", "REPEAT_KW", "UNTIL_KW", "ASSIGNMENT", "EQUALS",
  "NOT_EQUAL", "LESS", "GREATER", "LESS_OR_EQUAL", "GREATER_OR_EQUAL",
  "IN_KW", "IS_KW", "NOT_KW", "AND_KW", "AS_KW", "XOR_KW", "OR_KW", "PLUS",
  "MINUS", "MULTIPLICATION", "DIVISION", "DIV_KW", "MOD_KW", "DOT",
  "DOUBLE_DOT", "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET",
  "OPEN_BRACKET", "CLOSE_BRACKET", "COMMA", "SEMICOLON", "COLON", "UMINUS",
  "UPLUS", "$accept", "section", "sect_list", "start_symbol",
  "simple_type", "literal", "array_dimension", "array_dimension_list",
  "type", "expr", "expr_list", "expr_list_E", "stmt", "stmt_list",
  "stmt_block", "id_list", "var_decl", "var_decl_list", "var_decl_sect",
  "param_list", "param_list_E", "function_element", "procedure_impl",
  "function_impl", "if_stmt", "case_list", "case_stmt", "repeat_stmt",
  "while_stmt", "for_stmt", "enum_param_list", "enum_decl",
  "enum_decl_list", "class_decl_header", "property_decl",
  "override_modifier", "field_modifier", "field_modifier_list",
  "field_decl", "method_procedure_decl",
  "method_procedure_decl_with_modifier_NO", "method_function_decl",
  "method_function_decl_with_modifier_NO", "constructor_decl",
  "constructor_decl_with_modifier_NO", "constructor_impl",
  "destructor_decl", "destructor_impl", "implementation_element",
  "implementation_list", "implementation_sect", "method_modifier",
  "method_modifier_list", "method_decl", "method_field_property_list",
  "class_element", "class_element_list", "class_decl", "class_decl_list",
  "type_sect", "with_stmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-244)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-77)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,    10,    32,   -23,  -244,   180,   842,    53,   141,   221,
    -244,    71,    87,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,   108,  -244,  -244,  -244,  -244,  -244,  -244,   155,  -244,
      53,   996,   996,   996,   189,   842,   996,   996,   996,   996,
     134,  -244,  1234,  -244,   -10,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,   -41,  -244,    53,   174,  -244,   223,   957,
    -244,   231,   237,   241,   245,   249,   179,   195,   196,   206,
    -244,   221,   180,  -244,   996,   214,   -28,   219,   155,  1022,
     981,  1050,   246,   -32,   131,   131,   131,  1183,   996,   996,
     996,   996,   996,   996,   996,   996,   996,   996,   996,   996,
     996,   996,   996,   996,   996,   996,   996,   996,   291,   996,
    -244,   842,   299,   459,  -244,   -17,   257,  -244,   305,   306,
     316,   316,   316,   310,   328,   329,   191,  -244,  -244,   209,
    -244,   209,  -244,   309,  -244,  -244,  -244,   238,  -244,   103,
     292,  -244,   277,   280,    72,   283,   -18,   276,  -244,  -244,
    -244,  -244,  -244,  -244,   287,  1256,   286,   293,   996,   842,
     996,   842,   996,   842,   996,   996,  -244,  1208,  1256,   574,
     574,   574,   574,   574,   574,   574,   574,   131,   131,   234,
     234,   234,   234,   131,   131,   131,   131,   295,    89,  -244,
    -244,   -26,  -244,  -244,   -27,   296,   360,   297,   -19,   290,
     298,   352,   499,   568,   300,   104,   302,   -56,   311,   303,
     313,  -244,  -244,   191,   320,  -244,  -244,   209,   209,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,   359,  -244,   364,   381,
     382,   399,   183,   317,   392,   401,   459,   459,  -244,   996,
     123,   334,  -244,   340,   384,   254,   927,  -244,  1134,  1256,
    -244,   996,  -244,   459,   272,   996,  -244,   417,   386,    41,
    -244,  -244,   309,  -244,  -244,  -244,   459,  -244,  -244,   459,
     459,  -244,  -244,  -244,  -244,  -244,   355,   145,   356,   358,
     187,   361,    53,    53,    -8,   365,   215,   366,    53,  -244,
      53,  -244,   -40,   369,   373,   376,  1256,  -244,  -244,   842,
     842,  -244,   842,   266,   996,   996,   368,  -244,   396,  -244,
     184,  1156,   380,   996,   391,   464,  -244,   445,   395,   400,
    -244,   410,   410,   410,   479,   548,    -2,     3,  -244,  -244,
      53,    53,    35,   415,  -244,   911,   911,   459,   459,   617,
     686,  -244,   419,   458,   842,  1078,  1106,  -244,   272,   439,
     272,  -244,  -244,  1256,  -244,   427,   488,  -244,  -244,  -244,
     842,  -244,   842,  -244,   842,    53,  -244,    53,  -244,  -244,
    -244,    36,    37,  -244,  -244,    95,  -244,  -244,   420,   421,
      53,  -244,    53,  -244,  -244,  -244,   422,   842,   842,  -244,
     459,  -244,   996,     0,  -244,  -244,  -244,   911,   911,  -244,
    -244,   755,   824,   911,   911,  -244,  -244,  -244,  -244,  1256,
     494,  -244,  -244,  -244,    53,  -244,    53,  -244,  -244,  -244,
     424,   911,   911,  -244,  -244,  -244
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    72,     0,     0,     0,
       5,     0,     0,     2,     4,     3,     9,    10,    11,    12,
      13,    28,    16,    17,    14,    15,    27,    18,    64,    54,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
       0,    26,     0,    73,     0,    65,    66,    67,    68,    69,
      70,    71,    76,     0,    80,    82,     0,   125,   191,     0,
     188,   190,     0,     0,     0,     0,     0,     0,     0,     0,
     162,   164,     0,     7,    61,     0,     0,    28,     0,     0,
       0,     0,     0,     0,    49,    48,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    72,     0,     0,    81,     0,     0,   126,     0,     0,
       0,     0,     0,     0,     0,     0,   136,   174,   173,   140,
     169,   144,   170,   148,   171,   172,   175,     0,   185,     0,
       0,   189,     0,     0,     0,     0,     0,     0,   160,   161,
     158,   159,   163,     6,     0,    58,    60,     0,    61,    72,
      61,    72,     0,    72,     0,     0,    57,     0,    62,    38,
      35,    33,    34,    36,    37,    39,    40,    45,    46,    44,
      43,    29,    30,    31,    32,    41,    42,    52,     0,    74,
      77,     0,    23,    22,     0,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,   134,   137,     0,   165,   167,   141,   145,   149,
     184,   179,   178,   176,   177,   180,     0,   186,     0,     0,
       0,     0,    92,    72,    72,     0,     0,     0,     8,     0,
      50,     0,   192,     0,   110,     0,     0,   117,     0,   116,
      53,    61,    56,     0,     0,     0,    78,     0,   120,     0,
     147,   146,   154,   182,   181,   183,     0,   139,   138,     0,
       0,   132,   131,   135,   166,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,    95,
       0,    94,     0,     0,     0,     0,    59,    55,    50,    72,
      72,   114,    72,     0,     0,     0,     0,    24,     0,    20,
       0,     0,     0,     0,     0,     0,   155,     0,     0,     0,
     187,    72,    72,    72,    72,    72,     0,     0,    83,    84,
       0,     0,     0,     0,    93,    72,    72,     0,     0,    72,
      72,   111,     0,     0,    72,     0,     0,    51,     0,     0,
       0,    79,   128,   121,   124,   123,     0,   143,   142,   152,
      72,   150,    72,   156,    72,     0,    99,     0,    98,    85,
      86,     0,     0,    87,    88,    28,    97,    96,     0,     0,
       0,   103,     0,   102,   112,   115,     0,    72,    72,    19,
       0,    21,     0,     0,   153,   151,   157,    72,    72,    89,
      90,    72,    72,    72,    72,   113,   118,   119,    25,   122,
       0,   130,   101,   100,     0,   107,     0,   106,   105,   104,
       0,    72,    72,   129,   109,   108
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,   433,  -244,  -244,  -100,  -243,   156,  -244,  -227,    -3,
    -106,  -143,  -109,   472,    42,   480,   -55,  -209,  -168,  -244,
    -244,   -49,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,   451,  -244,  -244,   -69,  -127,  -104,  -244,   -24,  -244,
    -244,  -244,  -244,  -244,   -14,  -244,     7,  -244,   440,  -244,
    -244,   -75,   383,    17,   148,   374,  -244,   454,  -244,  -244,
    -244
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    10,    11,     2,    40,    41,   309,   310,   194,    42,
     156,   157,    43,    44,    45,    53,    54,    55,    13,   286,
     287,   145,    66,    67,    46,   246,    47,    48,    49,    50,
     259,    57,    58,    59,   127,   211,   215,   213,   128,   129,
     130,   131,   132,   133,   134,    68,   135,    69,    70,    71,
      14,   216,   217,   136,   137,   138,   139,    60,    61,    15,
      51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     114,    52,   189,   188,   126,   195,   219,    52,   110,   294,
     295,   308,    52,   193,   253,   241,   147,   243,   159,     3,
     165,   232,   212,   284,     1,   269,   307,   255,    79,    80,
      81,   410,     4,    84,    85,    86,    87,   232,   112,   317,
     113,   337,   318,   319,    52,    52,    52,    12,   111,   254,
     242,   112,   244,   256,   247,   235,   245,     5,   232,   232,
     196,   260,    52,   236,   285,   126,   126,   126,   221,   199,
     111,   155,   328,   326,   327,   206,   208,   332,   369,   335,
     411,   336,   126,   370,   126,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   389,   155,   308,   306,   273,
     378,   379,    52,   222,   154,   373,   399,   400,   333,   314,
     315,   371,   372,   223,   289,   291,   118,   119,   120,   121,
     122,   123,   221,   221,   221,   316,   193,   193,   124,   125,
     303,   -63,   275,   275,   224,   231,   126,   126,   126,   232,
      56,    72,   233,   193,   225,   155,   397,   155,   398,   155,
      73,   248,   249,   408,    75,   252,   193,   -63,   239,   193,
     193,   403,    74,   404,   -76,   -63,   -76,   222,   222,   222,
     278,   232,   281,   226,   267,    74,   293,   223,   223,   223,
     341,   342,    52,   343,   360,   362,   364,     6,    82,     7,
       8,     9,     7,   -63,   108,   421,   109,   422,   224,   224,
     224,    88,   359,   361,   363,   366,   368,   282,   225,   225,
     225,   209,   232,   210,    52,   321,   376,   377,   115,   114,
     381,   383,   116,   283,     7,   386,   296,   193,   193,   209,
     140,   210,   214,   155,    62,    63,   142,    52,   155,   330,
     143,   394,   311,   395,   144,   396,    64,    65,   146,   148,
     349,   118,   119,   350,   232,   331,   123,   324,   201,   202,
     203,   114,   114,   124,   125,   149,   150,   114,   406,   407,
     114,   114,    22,    23,    24,    25,   151,    27,   412,   413,
     193,   158,   415,   417,   418,   419,   160,    98,    99,   164,
     187,   345,   346,   104,   105,   106,   107,   108,   190,   109,
     353,   197,   424,   425,   198,   200,   114,   114,   220,   204,
      16,    17,    18,    19,    20,    52,    21,    22,    23,    24,
      25,    26,    27,   239,     6,   300,   288,   205,   207,   118,
     119,   210,   114,   114,   123,   239,   228,   344,   114,   114,
     229,   124,   125,   230,    28,    29,    30,   237,    31,    32,
     238,    52,    33,   234,    34,   239,   114,   114,    35,   258,
     261,   240,   251,   257,   196,   118,   119,   276,   262,    36,
     123,   266,   268,   271,    37,    38,   195,   124,   125,   409,
     277,   279,   270,   272,    39,    16,    17,    18,    19,    20,
     274,    21,    22,    23,    24,    25,    26,    27,   280,     6,
     292,   290,   297,    16,    17,    18,    19,    20,   298,    21,
      22,    23,    24,    25,    26,    27,   312,     6,   299,    28,
      29,    30,   263,    31,    32,   320,   322,    33,   323,    34,
     313,   325,   210,    35,   334,   329,   347,    28,    29,    30,
     338,    31,    32,   339,    36,    33,   340,    34,   352,    37,
      38,    35,    16,    17,    18,    19,    20,   191,   192,    39,
     348,   354,    36,   355,   356,   357,   385,    37,    38,   390,
     358,   392,    16,    17,    18,    19,    20,    39,    21,    22,
      23,    24,    25,    26,    27,   374,     6,   393,   365,   384,
     401,   402,   405,   420,   423,   153,   391,    83,    52,   117,
      76,   152,     0,   227,   218,   141,    28,    29,    30,     0,
      31,    32,   118,   119,    33,     0,    34,   123,     0,     0,
      35,     0,     0,     0,   124,   125,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,    37,    38,     0,     0,
       0,    16,    17,    18,    19,    20,    39,    21,    22,    23,
      24,    25,    26,    27,     0,     6,     0,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,   264,
       0,     0,     0,     0,     0,    28,    29,    30,     0,    31,
      32,   118,   119,    33,     0,    34,   123,     0,     0,    35,
       0,     0,     0,   124,   125,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,    37,    38,     0,     0,     0,
      16,    17,    18,    19,    20,    39,    21,    22,    23,    24,
      25,    26,    27,     0,     6,     0,   380,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   265,   109,
       0,     0,     0,     0,    28,    29,    30,     0,    31,    32,
       0,     0,    33,     0,    34,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,    37,    38,     0,     0,     0,    16,
      17,    18,    19,    20,    39,    21,    22,    23,    24,    25,
      26,    27,     0,     6,     0,   382,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    30,     0,    31,    32,     0,
       0,    33,     0,    34,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,    37,    38,     0,     0,     0,    16,    17,
      18,    19,    20,    39,    21,    22,    23,    24,    25,    26,
      27,     0,     6,     0,   414,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,    30,     0,    31,    32,     0,     0,
      33,     0,    34,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,    37,    38,     0,     0,     0,    16,    17,    18,
      19,    20,    39,    21,    22,    23,    24,    25,    26,    27,
       0,     6,     0,   416,     0,    16,    17,    18,    19,    20,
       0,    21,    22,    23,    24,    25,    26,    27,     0,     6,
       0,    28,    29,    30,     0,    31,    32,     0,     0,    33,
       0,    34,     0,     0,     0,    35,     0,     0,     0,    28,
      29,    30,     0,    31,    32,     0,    36,    33,     0,    34,
       0,    37,    38,    35,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,    36,     0,     0,     0,     0,    37,
      38,     0,     0,     0,    16,    17,    18,    19,    20,    39,
     375,    22,    23,    24,    25,    26,    27,     0,     6,     0,
      16,    17,    18,    19,    20,     0,    77,    22,    23,    24,
      25,    26,    27,     0,     0,   301,     0,     0,    28,    29,
      30,     0,    31,    32,     0,     0,    33,     0,    34,     0,
       0,     0,    35,     0,    78,    29,    52,     0,     0,     0,
       0,   302,     0,    36,     0,     0,     0,     0,    37,    38,
     118,   119,   120,   121,   122,   123,     0,     0,    39,    36,
       0,     0,   124,   125,    37,    38,     0,     0,     0,    16,
      17,    18,    19,    20,    39,    77,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    29,    90,    91,    92,    93,    94,
      95,    96,    97,     0,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,   109,     0,    36,     0,
       0,     0,     0,    37,    38,   161,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,     0,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   163,   109,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   387,   109,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   388,   109,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,    96,    97,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,   109,   304,   305,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    96,    97,     0,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,   109,
      90,    91,    92,    93,    94,    95,    96,    97,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,   109,     0,     0,     0,     0,   351,    90,    91,    92,
      93,    94,    95,    96,    97,     0,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     0,   109,     0,
       0,   166,    90,    91,    92,    93,    94,    95,    96,    97,
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,   109,     0,     0,   250,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     0,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,   109,
      90,    91,    92,    93,    94,    95,    96,    97,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,   109
};

static const yytype_int16 yycheck[] =
{
      55,     9,   111,   109,    59,    22,   133,     9,    18,   236,
     237,   254,     9,   113,    40,   158,    65,   160,    46,     9,
      52,    77,   126,   232,    16,    81,   253,    54,    31,    32,
      33,    31,     0,    36,    37,    38,    39,    77,    79,   266,
      81,    81,   269,   270,     9,     9,     9,     5,    80,    75,
     159,    79,   161,    80,   163,    73,   162,    80,    77,    77,
      77,    80,     9,    81,   232,   120,   121,   122,   137,   118,
      80,    74,    80,   282,   283,   124,   125,   286,    80,   288,
      80,   290,   137,    80,   139,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   348,   109,   350,   251,   213,
     337,   338,     9,   137,    72,    80,    80,    80,   286,    78,
      79,   330,   331,   137,   233,   234,    23,    24,    25,    26,
      27,    28,   201,   202,   203,   262,   236,   237,    35,    36,
     246,    18,   217,   218,   137,    73,   201,   202,   203,    77,
       9,    80,    80,   253,   137,   158,   365,   160,   367,   162,
      73,   164,   165,   390,     9,    76,   266,    44,    79,   269,
     270,   380,    77,   382,    79,    52,    81,   201,   202,   203,
     229,    77,   231,    80,    80,    77,   235,   201,   202,   203,
     299,   300,     9,   302,   321,   322,   323,    17,     9,    19,
      20,    21,    19,    80,    73,   414,    75,   416,   201,   202,
     203,    77,   321,   322,   323,   324,   325,    34,   201,   202,
     203,    30,    77,    32,     9,    80,   335,   336,    54,   284,
     339,   340,     9,    50,    19,   344,   239,   337,   338,    30,
       9,    32,    33,   246,    23,    24,     9,     9,   251,    34,
       9,   360,   255,   362,     9,   364,    35,    36,     9,    80,
      76,    23,    24,    79,    77,    50,    28,    80,   120,   121,
     122,   326,   327,    35,    36,    80,    80,   332,   387,   388,
     335,   336,    10,    11,    12,    13,    80,    15,   397,   398,
     390,    77,   401,   402,   403,   404,    77,    63,    64,    53,
       9,   304,   305,    69,    70,    71,    72,    73,     9,    75,
     313,    54,   421,   422,     9,     9,   371,   372,    80,     9,
       3,     4,     5,     6,     7,     9,     9,    10,    11,    12,
      13,    14,    15,    79,    17,    81,    19,     9,     9,    23,
      24,    32,   397,   398,    28,    79,    54,    81,   403,   404,
      73,    35,    36,    73,    37,    38,    39,    81,    41,    42,
      73,     9,    45,    80,    47,    79,   421,   422,    51,     9,
      80,    78,    77,    77,    77,    23,    24,    18,    80,    62,
      28,    81,    80,    80,    67,    68,    22,    35,    36,   392,
       9,     9,    81,    80,    77,     3,     4,     5,     6,     7,
      80,     9,    10,    11,    12,    13,    14,    15,     9,    17,
       9,    19,    78,     3,     4,     5,     6,     7,    78,     9,
      10,    11,    12,    13,    14,    15,     9,    17,    44,    37,
      38,    39,    80,    41,    42,    80,    80,    45,    80,    47,
      54,    80,    32,    51,    78,    80,    78,    37,    38,    39,
      81,    41,    42,    80,    62,    45,    80,    47,    78,    67,
      68,    51,     3,     4,     5,     6,     7,     8,     9,    77,
      74,    80,    62,     9,    29,    80,    18,    67,    68,    40,
      80,    54,     3,     4,     5,     6,     7,    77,     9,    10,
      11,    12,    13,    14,    15,    80,    17,     9,    19,    80,
      80,    80,    80,     9,    80,    72,   350,    35,     9,    58,
      30,    71,    -1,   139,   131,    61,    37,    38,    39,    -1,
      41,    42,    23,    24,    45,    -1,    47,    28,    -1,    -1,
      51,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    77,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    -1,    41,
      42,    23,    24,    45,    -1,    47,    28,    -1,    -1,    51,
      -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    77,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    80,    75,
      -1,    -1,    -1,    -1,    37,    38,    39,    -1,    41,    42,
      -1,    -1,    45,    -1,    47,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    77,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    -1,    41,    42,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    68,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    77,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    -1,    41,    42,    -1,    -1,
      45,    -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    67,    68,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    77,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    37,    38,    39,    -1,    41,    42,    -1,    -1,    45,
      -1,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    37,
      38,    39,    -1,    41,    42,    -1,    62,    45,    -1,    47,
      -1,    67,    68,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,     3,     4,     5,     6,     7,    77,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    37,    38,
      39,    -1,    41,    42,    -1,    -1,    45,    -1,    47,    -1,
      -1,    -1,    51,    -1,    37,    38,     9,    -1,    -1,    -1,
      -1,    44,    -1,    62,    -1,    -1,    -1,    -1,    67,    68,
      23,    24,    25,    26,    27,    28,    -1,    -1,    77,    62,
      -1,    -1,    35,    36,    67,    68,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    77,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    -1,    75,    -1,    62,    -1,
      -1,    -1,    -1,    67,    68,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    46,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    46,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    46,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    75,    48,    49,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    -1,    75,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    -1,    80,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    78,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    78,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    -1,    75,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      -1,    75
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    87,     9,     0,    80,    17,    19,    20,    21,
      85,    86,    98,   102,   134,   143,     3,     4,     5,     6,
       7,     9,    10,    11,    12,    13,    14,    15,    37,    38,
      39,    41,    42,    45,    47,    51,    62,    67,    68,    77,
      88,    89,    93,    96,    97,    98,   108,   110,   111,   112,
     113,   144,     9,    99,   100,   101,     9,   115,   116,   117,
     141,   142,    23,    24,    35,    36,   106,   107,   129,   131,
     132,   133,    80,    73,    77,     9,    99,     9,    37,    93,
      93,    93,     9,    97,    93,    93,    93,    93,    77,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    75,
      18,    80,    79,    81,   100,    54,     9,   115,    23,    24,
      25,    26,    27,    28,    35,    36,   100,   118,   122,   123,
     124,   125,   126,   127,   128,   130,   137,   138,   139,   140,
       9,   141,     9,     9,     9,   105,     9,   105,    80,    80,
      80,    80,   132,    85,    98,    93,    94,    95,    77,    46,
      77,    43,    40,    46,    53,    52,    78,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,     9,    94,    96,
       9,     8,     9,    88,    92,    22,    77,    54,     9,   105,
       9,   138,   138,   138,     9,     9,   105,     9,   105,    30,
      32,   119,   120,   121,    33,   120,   135,   136,   136,   119,
      80,   118,   122,   128,   130,   137,    80,   139,    54,    73,
      73,    73,    77,    80,    80,    73,    81,    81,    73,    79,
      78,    95,    96,    95,    96,    94,   109,    96,    93,    93,
      78,    77,    76,    40,    75,    54,    80,    77,     9,   114,
      80,    80,    80,    80,    80,    80,    81,    80,    80,    81,
      81,    80,    80,   120,    80,   135,    18,     9,   105,     9,
       9,   105,    34,    50,   101,   102,   103,   104,    19,    96,
      19,    96,     9,   105,    92,    92,    93,    78,    78,    44,
      81,    18,    44,    94,    48,    49,    95,    92,    89,    90,
      91,    93,     9,    54,    78,    79,   119,    92,    92,    92,
      80,    80,    80,    80,    80,    80,   101,   101,    80,    80,
      34,    50,   101,   102,    78,   101,   101,    81,    81,    80,
      80,    96,    96,    96,    81,    93,    93,    78,    74,    76,
      79,    80,    78,    93,    80,     9,    29,    80,    80,    96,
     119,    96,   119,    96,   119,    19,    96,    19,    96,    80,
      80,   101,   101,    80,    80,     9,    96,    96,    92,    92,
      19,    96,    19,    96,    80,    18,    96,    46,    46,    89,
      40,    90,    54,     9,    96,    96,    96,   101,   101,    80,
      80,    80,    80,   101,   101,    80,    96,    96,    92,    93,
      31,    80,    96,    96,    19,    96,    19,    96,    96,    96,
       9,   101,   101,    80,    96,    96
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    85,    86,    86,    87,    87,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    90,
      91,    91,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      95,    95,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    97,    98,    99,    99,   100,   100,
     101,   101,   102,   103,   103,   103,   103,   103,   103,   103,
     103,   104,   104,   105,   106,   106,   106,   106,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   110,   110,   111,   112,   113,   113,
     114,   114,   114,   114,   115,   116,   116,   117,   117,   118,
     118,   119,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   133,   133,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   139,   139,   139,   139,   140,   140,   141,   142,   142,
     143,   143,   144
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     5,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     3,     6,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       4,     6,     3,     4,     1,     5,     4,     3,     1,     3,
       1,     0,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     3,     3,     1,     3,     4,     6,
       1,     2,     2,     2,     2,     3,     3,     3,     3,     4,
       4,     1,     0,     4,     4,     4,     6,     6,     6,     6,
       8,     8,     6,     6,     8,     8,     8,     8,    10,    10,
       4,     6,     4,     5,     5,     7,     4,     4,     8,     8,
       1,     3,     5,     3,     6,     1,     2,     3,     6,     9,
       7,     2,     2,     1,     1,     2,     1,     2,     3,     3,
       1,     2,     5,     5,     1,     2,     3,     3,     1,     2,
       6,     7,     6,     7,     3,     4,     6,     7,     2,     2,
       2,     2,     1,     2,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     3,     3,     3,     2,     1,     2,     5,     1,     2,
       2,     2,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* section: var_decl_sect  */
#line 273 ".\\CompilerLab\\grammar.y"
                                        { (yyval.section_union) = sectionNode::create_section_node_from_var_decl((yyvsp[0].var_decl_list_union)); }
#line 1694 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 3: /* section: type_sect  */
#line 274 ".\\CompilerLab\\grammar.y"
                                        { (yyval.section_union) = sectionNode::create_section_node_from_type_sect((yyvsp[0].type_sect_union)); }
#line 1700 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 4: /* section: implementation_sect  */
#line 275 ".\\CompilerLab\\grammar.y"
                                        { (yyval.section_union) = sectionNode::create_section_node_from_implementation_sect((yyvsp[0].implementation_list_union)); }
#line 1706 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 5: /* sect_list: section  */
#line 277 ".\\CompilerLab\\grammar.y"
                                                { (yyval.section_list_union) = sectionNode::create_section_node_list_from_section_node((yyvsp[0].section_union)); }
#line 1712 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 6: /* sect_list: sect_list SEMICOLON section  */
#line 278 ".\\CompilerLab\\grammar.y"
                                                { (yyval.section_list_union) = sectionNode::add_section_node_to_section_node_list((yyvsp[-2].section_list_union), (yyvsp[0].section_union)); }
#line 1718 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 7: /* start_symbol: PROGRAM_KW ID SEMICOLON stmt_block DOT  */
#line 280 ".\\CompilerLab\\grammar.y"
                                                                                { (yyval.start_symbol_union) = startSymbolNode::create_start_symbol_node((yyvsp[-3].id_union), (yyvsp[-1].stmt_block_union), NULL); }
#line 1724 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 8: /* start_symbol: PROGRAM_KW ID SEMICOLON sect_list SEMICOLON stmt_block DOT  */
#line 281 ".\\CompilerLab\\grammar.y"
                                                                                { (yyval.start_symbol_union) = startSymbolNode::create_start_symbol_node((yyvsp[-5].id_union), (yyvsp[-1].stmt_block_union), (yyvsp[-3].section_list_union)); }
#line 1730 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 9: /* simple_type: INTEGER_KW  */
#line 283 ".\\CompilerLab\\grammar.y"
                                    { (yyval.simple_type_union) = simpleType::int_type_simple; }
#line 1736 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 10: /* simple_type: REAL_KW  */
#line 284 ".\\CompilerLab\\grammar.y"
                                    { (yyval.simple_type_union) = simpleType::real_type_simple; }
#line 1742 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 11: /* simple_type: BOOLEAN_KW  */
#line 285 ".\\CompilerLab\\grammar.y"
                                    { (yyval.simple_type_union) = simpleType::boolean_type_simple; }
#line 1748 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 12: /* simple_type: STRING_KW  */
#line 286 ".\\CompilerLab\\grammar.y"
                                    { (yyval.simple_type_union) = simpleType::string_type_simple; }
#line 1754 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 13: /* simple_type: CHAR_KW  */
#line 287 ".\\CompilerLab\\grammar.y"
                                    { (yyval.simple_type_union) = simpleType::char_type_simple; }
#line 1760 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 14: /* literal: INTEGER  */
#line 289 ".\\CompilerLab\\grammar.y"
                                    { (yyval.literal_union) = literalNode::create_literal_node_from_int((yyvsp[0].int_union)); }
#line 1766 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 15: /* literal: REAL  */
#line 290 ".\\CompilerLab\\grammar.y"
                                    { (yyval.literal_union) = literalNode::create_literal_node_from_real((yyvsp[0].real_union)); }
#line 1772 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 16: /* literal: TRUE_KW  */
#line 291 ".\\CompilerLab\\grammar.y"
                                    { (yyval.literal_union) = literalNode::create_literal_node_from_boolean(true); }
#line 1778 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 17: /* literal: FALSE_KW  */
#line 292 ".\\CompilerLab\\grammar.y"
                                    { (yyval.literal_union) = literalNode::create_literal_node_from_boolean(false); }
#line 1784 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 18: /* literal: CHAR  */
#line 293 ".\\CompilerLab\\grammar.y"
                                    { (yyval.literal_union) = literalNode::create_literal_node_from_char((yyvsp[0].char_union)); }
#line 1790 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 19: /* array_dimension: literal DOUBLE_DOT literal  */
#line 295 ".\\CompilerLab\\grammar.y"
                                                { (yyval.array_dimension_union) = arrayDimensionNode::create_array_dimension_node((yyvsp[-2].literal_union), (yyvsp[0].literal_union)); }
#line 1796 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 20: /* array_dimension_list: array_dimension  */
#line 297 ".\\CompilerLab\\grammar.y"
                                                                        { (yyval.array_dimension_list_union) = arrayDimensionNode::create_array_dimension_node_list_from_array_dimension_node((yyvsp[0].array_dimension_union)); }
#line 1802 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 21: /* array_dimension_list: array_dimension_list COMMA array_dimension  */
#line 298 ".\\CompilerLab\\grammar.y"
                                                                        { (yyval.array_dimension_list_union) = arrayDimensionNode::add_array_dimension_node_to_array_dimension_node_list((yyvsp[-2].array_dimension_list_union), (yyvsp[0].array_dimension_union)); }
#line 1808 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 22: /* type: simple_type  */
#line 300 ".\\CompilerLab\\grammar.y"
                                        { (yyval.type_union) = typeNode::create_type_node_from_simple_type((yyvsp[0].simple_type_union)); }
#line 1814 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 23: /* type: ID  */
#line 301 ".\\CompilerLab\\grammar.y"
                                        { (yyval.type_union) = typeNode::create_type_node_from_id((yyvsp[0].id_union)); }
#line 1820 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 24: /* type: ARRAY_KW OF_KW type  */
#line 305 ".\\CompilerLab\\grammar.y"
                                        { (yyval.type_union) = typeNode::create_type_node_from_array_without_dimension((yyvsp[0].type_union)); }
#line 1826 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 25: /* type: ARRAY_KW OPEN_SQUARE_BRACKET array_dimension_list CLOSE_SQUARE_BRACKET OF_KW type  */
#line 306 ".\\CompilerLab\\grammar.y"
                                                                                                    { (yyval.type_union) = typeNode::create_type_node_from_array_with_dimension((yyvsp[-3].array_dimension_list_union), (yyvsp[0].type_union)); }
#line 1832 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 26: /* expr: literal  */
#line 308 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_literal_node((yyvsp[0].literal_union)); }
#line 1838 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 27: /* expr: STRING  */
#line 309 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_string((yyvsp[0].string_union)); }
#line 1844 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 28: /* expr: ID  */
#line 310 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_id((yyvsp[0].id_union)); }
#line 1850 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 29: /* expr: expr PLUS expr  */
#line 311 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::plus_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1856 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 30: /* expr: expr MINUS expr  */
#line 312 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::minus_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1862 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 31: /* expr: expr MULTIPLICATION expr  */
#line 313 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::multiplication_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1868 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 32: /* expr: expr DIVISION expr  */
#line 314 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::division_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1874 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 33: /* expr: expr LESS expr  */
#line 315 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::less_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1880 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 34: /* expr: expr GREATER expr  */
#line 316 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::greater_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1886 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 35: /* expr: expr NOT_EQUAL expr  */
#line 317 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::not_equal_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1892 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 36: /* expr: expr LESS_OR_EQUAL expr  */
#line 318 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::less_or_equal_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1898 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 37: /* expr: expr GREATER_OR_EQUAL expr  */
#line 319 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::greater_or_equal_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1904 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 38: /* expr: expr EQUALS expr  */
#line 320 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::equals_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1910 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 39: /* expr: expr IN_KW expr  */
#line 321 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::in_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1916 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 40: /* expr: expr IS_KW expr  */
#line 322 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::is_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1922 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 41: /* expr: expr DIV_KW expr  */
#line 323 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::div_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1928 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 42: /* expr: expr MOD_KW expr  */
#line 324 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::mod_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1934 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 43: /* expr: expr OR_KW expr  */
#line 325 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::or_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1940 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 44: /* expr: expr XOR_KW expr  */
#line 326 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::xor_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1946 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 45: /* expr: expr AND_KW expr  */
#line 327 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::and_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1952 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 46: /* expr: expr AS_KW expr  */
#line 328 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_binary_operation(exprType::as_type, (yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 1958 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 47: /* expr: MINUS expr  */
#line 329 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_unary_operation(exprType::uminus_type, (yyvsp[0].expr_union)); }
#line 1964 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 48: /* expr: PLUS expr  */
#line 330 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_unary_operation(exprType::uplus_type, (yyvsp[0].expr_union)); }
#line 1970 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 49: /* expr: NOT_KW expr  */
#line 331 ".\\CompilerLab\\grammar.y"
                                              { (yyval.expr_union) = exprNode::create_expr_node_from_unary_operation(exprType::not_type, (yyvsp[0].expr_union)); }
#line 1976 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 50: /* expr: ID OPEN_BRACKET expr_list_E CLOSE_BRACKET  */
#line 332 ".\\CompilerLab\\grammar.y"
                                                                          { (yyval.expr_union) = exprNode::create_expr_node_from_function_call((yyvsp[-3].id_union), (yyvsp[-1].expr_list_union)); }
#line 1982 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 51: /* expr: expr DOT ID OPEN_BRACKET expr_list_E CLOSE_BRACKET  */
#line 333 ".\\CompilerLab\\grammar.y"
                                                                          { (yyval.expr_union) = exprNode::create_expr_node_from_method_function_call((yyvsp[-5].expr_union), (yyvsp[-3].id_union), (yyvsp[-1].expr_list_union)); }
#line 1988 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 52: /* expr: expr DOT ID  */
#line 334 ".\\CompilerLab\\grammar.y"
                                                                          { (yyval.expr_union) = exprNode::create_expr_node_from_field_access((yyvsp[-2].expr_union), (yyvsp[0].id_union)); }
#line 1994 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 53: /* expr: simple_type OPEN_BRACKET expr CLOSE_BRACKET  */
#line 335 ".\\CompilerLab\\grammar.y"
                                                                          { (yyval.expr_union) = exprNode::create_expr_node_from_type_casting((yyvsp[-3].simple_type_union), (yyvsp[-1].expr_union)); }
#line 2000 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 54: /* expr: SELF_KW  */
#line 336 ".\\CompilerLab\\grammar.y"
                                                                          { (yyval.expr_union) = exprNode::create_expr_node_from_self(); }
#line 2006 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 55: /* expr: INHERITED_KW ID OPEN_BRACKET expr_list_E CLOSE_BRACKET  */
#line 337 ".\\CompilerLab\\grammar.y"
                                                                          { (yyval.expr_union) = exprNode::create_expr_node_from_inherited_call((yyvsp[-3].id_union), (yyvsp[-1].expr_list_union)); }
#line 2012 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 56: /* expr: expr OPEN_SQUARE_BRACKET expr_list CLOSE_SQUARE_BRACKET  */
#line 338 ".\\CompilerLab\\grammar.y"
                                                                          { (yyval.expr_union) = exprNode::create_expr_node_from_array_access((yyvsp[-3].expr_union), (yyvsp[-1].expr_list_union)); }
#line 2018 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 57: /* expr: OPEN_BRACKET expr CLOSE_BRACKET  */
#line 339 ".\\CompilerLab\\grammar.y"
                                                                          { (yyval.expr_union) = exprNode::create_expr_node_from_brackets((yyvsp[-1].expr_union)); }
#line 2024 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 58: /* expr_list: expr  */
#line 344 ".\\CompilerLab\\grammar.y"
                                            { (yyval.expr_list_union) = exprNode::create_expr_node_list_from_expr_node((yyvsp[0].expr_union)); }
#line 2030 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 59: /* expr_list: expr_list COMMA expr  */
#line 345 ".\\CompilerLab\\grammar.y"
                                            { (yyval.expr_list_union) = exprNode::add_expr_node_to_expr_node_list((yyvsp[-2].expr_list_union), (yyvsp[0].expr_union)); }
#line 2036 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 60: /* expr_list_E: expr_list  */
#line 347 ".\\CompilerLab\\grammar.y"
                                            { (yyval.expr_list_union) = (yyvsp[0].expr_list_union); }
#line 2042 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 61: /* expr_list_E: %empty  */
#line 348 ".\\CompilerLab\\grammar.y"
                                            { (yyval.expr_list_union) = exprNode::create_expr_node_list_from_expr_node(NULL); }
#line 2048 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 62: /* stmt: expr ASSIGNMENT expr  */
#line 350 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.stmt_union) = stmtNode::create_stmt_node_from_assignment((yyvsp[-2].expr_union), (yyvsp[0].expr_union)); }
#line 2054 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 63: /* stmt: ID OPEN_BRACKET expr_list_E CLOSE_BRACKET  */
#line 351 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.stmt_union) = stmtNode::create_stmt_node_from_function_call((yyvsp[-3].id_union), (yyvsp[-1].expr_list_union)); }
#line 2060 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 64: /* stmt: INHERITED_KW  */
#line 352 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.stmt_union) = stmtNode::create_stmt_node_from_inherited_call(); }
#line 2066 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 65: /* stmt: stmt_block  */
#line 353 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.stmt_union) = stmtNode::create_stmt_node_from_stmt_block((yyvsp[0].stmt_block_union)); }
#line 2072 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 66: /* stmt: if_stmt  */
#line 354 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.stmt_union) = stmtNode::create_stmt_node_from_if_stmt((yyvsp[0].if_stmt_union)); }
#line 2078 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 67: /* stmt: case_stmt  */
#line 355 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.stmt_union) = stmtNode::create_stmt_node_from_case_stmt((yyvsp[0].case_stmt_union)); }
#line 2084 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 68: /* stmt: repeat_stmt  */
#line 356 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.stmt_union) = stmtNode::create_stmt_node_from_repeat_stmt((yyvsp[0].repeat_stmt_union)); }
#line 2090 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 69: /* stmt: while_stmt  */
#line 357 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.stmt_union) = stmtNode::create_stmt_node_from_while_stmt((yyvsp[0].while_stmt_union)); }
#line 2096 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 70: /* stmt: for_stmt  */
#line 358 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.stmt_union) = stmtNode::create_stmt_node_from_for_stmt((yyvsp[0].for_stmt_union)); }
#line 2102 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 71: /* stmt: with_stmt  */
#line 359 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.stmt_union) = stmtNode::create_stmt_node_from_with_stmt((yyvsp[0].with_stmt_union)); }
#line 2108 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 72: /* stmt: %empty  */
#line 360 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.stmt_union) = stmtNode::create_stmt_node_from_empty(); }
#line 2114 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 73: /* stmt_list: stmt  */
#line 362 ".\\CompilerLab\\grammar.y"
                                                { (yyval.stmt_list_union) = stmtNode::create_stmt_node_list_from_stmt_node((yyvsp[0].stmt_union)); }
#line 2120 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 74: /* stmt_list: stmt_list SEMICOLON stmt  */
#line 363 ".\\CompilerLab\\grammar.y"
                                                { (yyval.stmt_list_union) = stmtNode::add_stmt_node_to_stmt_node_list((yyvsp[-2].stmt_list_union), (yyvsp[0].stmt_union)); }
#line 2126 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 75: /* stmt_block: BEGIN_KW stmt_list END_KW  */
#line 365 ".\\CompilerLab\\grammar.y"
                                                { (yyval.stmt_block_union) = stmtBlockNode::create_stmt_block_node((yyvsp[-1].stmt_list_union)); }
#line 2132 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 76: /* id_list: ID  */
#line 367 ".\\CompilerLab\\grammar.y"
                                                { 
                                                    auto id = exprNode::create_expr_node_from_id((yyvsp[0].id_union));
                                                    (yyval.expr_list_union) = exprNode::create_expr_node_list_from_expr_node(id); 
                                                }
#line 2141 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 77: /* id_list: id_list COMMA ID  */
#line 371 ".\\CompilerLab\\grammar.y"
                                                {
                                                    auto id = exprNode::create_expr_node_from_id((yyvsp[0].id_union));
                                                    (yyval.expr_list_union) = exprNode::add_expr_node_to_expr_node_list((yyvsp[-2].expr_list_union), id);
                                                }
#line 2150 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 78: /* var_decl: id_list COLON type SEMICOLON  */
#line 376 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.var_decl_union) = varDeclNode::create_var_decl_node((yyvsp[-3].expr_list_union), (yyvsp[-1].type_union), NULL); }
#line 2156 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 79: /* var_decl: id_list COLON type EQUALS expr SEMICOLON  */
#line 377 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.var_decl_union) = varDeclNode::create_var_decl_node((yyvsp[-5].expr_list_union), (yyvsp[-3].type_union), (yyvsp[-1].expr_union)); }
#line 2162 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 80: /* var_decl_list: var_decl  */
#line 379 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.var_decl_list_union) = varDeclNode::create_var_decl_node_list_from_var_decl_node((yyvsp[0].var_decl_union)); }
#line 2168 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 81: /* var_decl_list: var_decl_list var_decl  */
#line 380 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.var_decl_list_union) = varDeclNode::add_var_decl_node_to_var_decl_node_list((yyvsp[-1].var_decl_list_union), (yyvsp[0].var_decl_union)); }
#line 2174 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 82: /* var_decl_sect: VAR_KW var_decl_list  */
#line 382 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.var_decl_list_union) = (yyvsp[0].var_decl_list_union); }
#line 2180 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 83: /* param_list: var_decl_list SEMICOLON  */
#line 384 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.param_list_union) = paramListNode::create_param_list_node_list((yyvsp[-1].var_decl_list_union), paramListNodeTypeEnum::general_param); }
#line 2186 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 84: /* param_list: var_decl_sect SEMICOLON  */
#line 385 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.param_list_union) = paramListNode::create_param_list_node_list((yyvsp[-1].var_decl_list_union), paramListNodeTypeEnum::reference_param); }
#line 2192 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 85: /* param_list: CONST_KW var_decl_list SEMICOLON  */
#line 386 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.param_list_union) = paramListNode::create_param_list_node_list((yyvsp[-1].var_decl_list_union), paramListNodeTypeEnum::const_param); }
#line 2198 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 86: /* param_list: OUT_KW var_decl_list SEMICOLON  */
#line 387 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.param_list_union) = paramListNode::create_param_list_node_list((yyvsp[-1].var_decl_list_union), paramListNodeTypeEnum::out_param); }
#line 2204 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 87: /* param_list: param_list var_decl_list SEMICOLON  */
#line 388 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.param_list_union) = paramListNode::add_param_list_node_to_param_list_node_list((yyvsp[-2].param_list_union), (yyvsp[-1].var_decl_list_union), paramListNodeTypeEnum::general_param); }
#line 2210 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 88: /* param_list: param_list var_decl_sect SEMICOLON  */
#line 389 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.param_list_union) = paramListNode::add_param_list_node_to_param_list_node_list((yyvsp[-2].param_list_union), (yyvsp[-1].var_decl_list_union), paramListNodeTypeEnum::reference_param); }
#line 2216 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 89: /* param_list: param_list CONST_KW var_decl_list SEMICOLON  */
#line 390 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.param_list_union) = paramListNode::add_param_list_node_to_param_list_node_list((yyvsp[-3].param_list_union), (yyvsp[-1].var_decl_list_union), paramListNodeTypeEnum::const_param); }
#line 2222 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 90: /* param_list: param_list OUT_KW var_decl_list SEMICOLON  */
#line 391 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.param_list_union) = paramListNode::add_param_list_node_to_param_list_node_list((yyvsp[-3].param_list_union), (yyvsp[-1].var_decl_list_union), paramListNodeTypeEnum::out_param); }
#line 2228 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 91: /* param_list_E: param_list  */
#line 393 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.param_list_union) = (yyvsp[0].param_list_union); }
#line 2234 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 92: /* param_list_E: %empty  */
#line 394 ".\\CompilerLab\\grammar.y"
                                                              { (yyval.param_list_union) = paramListNode::create_param_list_node_list(NULL, paramListNodeTypeEnum::general_param); }
#line 2240 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 93: /* function_element: ID OPEN_BRACKET param_list_E CLOSE_BRACKET  */
#line 396 ".\\CompilerLab\\grammar.y"
                                                                  { (yyval.function_element_union) = functionElementNode::create_function_element((yyvsp[-3].id_union), (yyvsp[-1].param_list_union)); }
#line 2246 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 94: /* procedure_impl: PROCEDURE_KW function_element SEMICOLON stmt  */
#line 398 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.procedure_impl_union) = procedureImplNode::create_procedure_impl_node_with_params(NULL, (yyvsp[-2].function_element_union), NULL, (yyvsp[0].stmt_union)); }
#line 2252 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 95: /* procedure_impl: PROCEDURE_KW ID SEMICOLON stmt  */
#line 399 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.procedure_impl_union) = procedureImplNode::create_procedure_impl_node_without_params(NULL, (yyvsp[-2].id_union), NULL, (yyvsp[0].stmt_union)); }
#line 2258 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 96: /* procedure_impl: PROCEDURE_KW function_element SEMICOLON VAR_KW var_decl_list stmt  */
#line 400 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.procedure_impl_union) = procedureImplNode::create_procedure_impl_node_with_params(NULL, (yyvsp[-4].function_element_union), (yyvsp[-1].var_decl_list_union), (yyvsp[0].stmt_union)); }
#line 2264 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 97: /* procedure_impl: PROCEDURE_KW ID SEMICOLON VAR_KW var_decl_list stmt  */
#line 401 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.procedure_impl_union) = procedureImplNode::create_procedure_impl_node_without_params(NULL, (yyvsp[-4].id_union), (yyvsp[-1].var_decl_list_union), (yyvsp[0].stmt_union)); }
#line 2270 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 98: /* procedure_impl: PROCEDURE_KW ID DOT function_element SEMICOLON stmt  */
#line 402 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.procedure_impl_union) = procedureImplNode::create_procedure_impl_node_with_params((yyvsp[-4].id_union), (yyvsp[-2].function_element_union), NULL, (yyvsp[0].stmt_union)); }
#line 2276 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 99: /* procedure_impl: PROCEDURE_KW ID DOT ID SEMICOLON stmt  */
#line 403 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.procedure_impl_union) = procedureImplNode::create_procedure_impl_node_without_params((yyvsp[-4].id_union), (yyvsp[-2].id_union), NULL, (yyvsp[0].stmt_union)); }
#line 2282 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 100: /* procedure_impl: PROCEDURE_KW ID DOT function_element SEMICOLON VAR_KW var_decl_list stmt  */
#line 404 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.procedure_impl_union) = procedureImplNode::create_procedure_impl_node_with_params((yyvsp[-6].id_union), (yyvsp[-4].function_element_union), (yyvsp[-1].var_decl_list_union), (yyvsp[0].stmt_union)); }
#line 2288 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 101: /* procedure_impl: PROCEDURE_KW ID DOT ID SEMICOLON VAR_KW var_decl_list stmt  */
#line 405 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.procedure_impl_union) = procedureImplNode::create_procedure_impl_node_without_params((yyvsp[-6].id_union), (yyvsp[-4].id_union), (yyvsp[-1].var_decl_list_union), (yyvsp[0].stmt_union)); }
#line 2294 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 102: /* function_impl: FUNCTION_KW function_element COLON type SEMICOLON stmt  */
#line 407 ".\\CompilerLab\\grammar.y"
                                                                                                          { (yyval.function_impl_union) = functionImplNode::create_function_impl_node_with_params(NULL, (yyvsp[-4].function_element_union), NULL, (yyvsp[-2].type_union), (yyvsp[0].stmt_union)); }
#line 2300 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 103: /* function_impl: FUNCTION_KW ID COLON type SEMICOLON stmt  */
#line 408 ".\\CompilerLab\\grammar.y"
                                                                                                          { (yyval.function_impl_union) = functionImplNode::create_function_impl_node_without_params(NULL, (yyvsp[-4].id_union), NULL, (yyvsp[-2].type_union), (yyvsp[0].stmt_union)); }
#line 2306 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 104: /* function_impl: FUNCTION_KW function_element COLON type SEMICOLON VAR_KW var_decl_list stmt  */
#line 409 ".\\CompilerLab\\grammar.y"
                                                                                                          { (yyval.function_impl_union) = functionImplNode::create_function_impl_node_with_params(NULL, (yyvsp[-6].function_element_union), (yyvsp[-1].var_decl_list_union), (yyvsp[-4].type_union), (yyvsp[0].stmt_union)); }
#line 2312 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 105: /* function_impl: FUNCTION_KW ID COLON type SEMICOLON VAR_KW var_decl_list stmt  */
#line 410 ".\\CompilerLab\\grammar.y"
                                                                                                          { (yyval.function_impl_union) = functionImplNode::create_function_impl_node_without_params(NULL, (yyvsp[-6].id_union), (yyvsp[-1].var_decl_list_union), (yyvsp[-4].type_union), (yyvsp[0].stmt_union)); }
#line 2318 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 106: /* function_impl: FUNCTION_KW ID DOT function_element COLON type SEMICOLON stmt  */
#line 412 ".\\CompilerLab\\grammar.y"
                                                                                                          { (yyval.function_impl_union) = functionImplNode::create_function_impl_node_with_params((yyvsp[-6].id_union), (yyvsp[-4].function_element_union), NULL, (yyvsp[-2].type_union), (yyvsp[0].stmt_union)); }
#line 2324 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 107: /* function_impl: FUNCTION_KW ID DOT ID COLON type SEMICOLON stmt  */
#line 413 ".\\CompilerLab\\grammar.y"
                                                                                                          { (yyval.function_impl_union) = functionImplNode::create_function_impl_node_without_params((yyvsp[-6].id_union), (yyvsp[-4].id_union), NULL, (yyvsp[-2].type_union), (yyvsp[0].stmt_union)); }
#line 2330 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 108: /* function_impl: FUNCTION_KW ID DOT function_element COLON type SEMICOLON VAR_KW var_decl_list stmt  */
#line 414 ".\\CompilerLab\\grammar.y"
                                                                                                          { (yyval.function_impl_union) = functionImplNode::create_function_impl_node_with_params((yyvsp[-8].id_union), (yyvsp[-6].function_element_union), (yyvsp[-1].var_decl_list_union), (yyvsp[-4].type_union), (yyvsp[0].stmt_union)); }
#line 2336 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 109: /* function_impl: FUNCTION_KW ID DOT ID COLON type SEMICOLON VAR_KW var_decl_list stmt  */
#line 415 ".\\CompilerLab\\grammar.y"
                                                                                                          { (yyval.function_impl_union) = functionImplNode::create_function_impl_node_without_params((yyvsp[-8].id_union), (yyvsp[-6].id_union), (yyvsp[-1].var_decl_list_union), (yyvsp[-4].type_union), (yyvsp[0].stmt_union)); }
#line 2342 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 110: /* if_stmt: IF_KW expr THEN_KW stmt  */
#line 417 ".\\CompilerLab\\grammar.y"
                                                        { (yyval.if_stmt_union) = ifStmtNode::create_if_stmt_node((yyvsp[-2].expr_union), (yyvsp[0].stmt_union), NULL); }
#line 2348 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 111: /* if_stmt: IF_KW expr THEN_KW stmt ELSE_KW stmt  */
#line 418 ".\\CompilerLab\\grammar.y"
                                                        { (yyval.if_stmt_union) = ifStmtNode::create_if_stmt_node((yyvsp[-4].expr_union), (yyvsp[-2].stmt_union), (yyvsp[0].stmt_union)); }
#line 2354 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 112: /* case_list: expr_list COLON stmt SEMICOLON  */
#line 420 ".\\CompilerLab\\grammar.y"
                                                                        { (yyval.case_element_list_union) = caseElementNode::create_case_element_list_node((yyvsp[-3].expr_list_union), (yyvsp[-1].stmt_union)); }
#line 2360 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 113: /* case_list: case_list expr_list COLON stmt SEMICOLON  */
#line 421 ".\\CompilerLab\\grammar.y"
                                                                        { (yyval.case_element_list_union) = caseElementNode::add_case_element_to_list_node((yyvsp[-4].case_element_list_union), (yyvsp[-3].expr_list_union), (yyvsp[-1].stmt_union)); }
#line 2366 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 114: /* case_stmt: CASE_KW expr OF_KW case_list END_KW  */
#line 423 ".\\CompilerLab\\grammar.y"
                                                                        { (yyval.case_stmt_union) = caseStmtNode::create_case_node((yyvsp[-3].expr_union), (yyvsp[-1].case_element_list_union), NULL); }
#line 2372 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 115: /* case_stmt: CASE_KW expr OF_KW case_list ELSE_KW stmt END_KW  */
#line 424 ".\\CompilerLab\\grammar.y"
                                                                        { (yyval.case_stmt_union) = caseStmtNode::create_case_node((yyvsp[-5].expr_union), (yyvsp[-3].case_element_list_union), (yyvsp[-1].stmt_union)); }
#line 2378 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 116: /* repeat_stmt: REPEAT_KW stmt_list UNTIL_KW expr  */
#line 426 ".\\CompilerLab\\grammar.y"
                                                        { (yyval.repeat_stmt_union) = repeatStmtNode::create_repeat_stmt_node((yyvsp[-2].stmt_list_union), (yyvsp[0].expr_union)); }
#line 2384 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 117: /* while_stmt: WHILE_KW expr DO_KW stmt  */
#line 428 ".\\CompilerLab\\grammar.y"
                                                        { (yyval.while_stmt_union) = whileStmtNode::create_while_stmt_node((yyvsp[0].stmt_union), (yyvsp[-2].expr_union)); }
#line 2390 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 118: /* for_stmt: FOR_KW ID ASSIGNMENT expr TO_KW expr DO_KW stmt  */
#line 430 ".\\CompilerLab\\grammar.y"
                                                                        {
                                                                            exprNode* exprN = exprNode::create_expr_node_from_id((yyvsp[-6].id_union));
                                                                            (yyval.for_stmt_union) = forStmtNode::create_for_stmt_node(exprN, (yyvsp[-4].expr_union), (yyvsp[-2].expr_union), (yyvsp[0].stmt_union), false);
                                                                        }
#line 2399 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 119: /* for_stmt: FOR_KW ID ASSIGNMENT expr DOWNTO_KW expr DO_KW stmt  */
#line 434 ".\\CompilerLab\\grammar.y"
                                                                        {
                                                                            exprNode* exprN = exprNode::create_expr_node_from_id((yyvsp[-6].id_union));
                                                                            (yyval.for_stmt_union) = forStmtNode::create_for_stmt_node(exprN, (yyvsp[-4].expr_union), (yyvsp[-2].expr_union), (yyvsp[0].stmt_union), true);
                                                                        }
#line 2408 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 120: /* enum_param_list: ID  */
#line 439 ".\\CompilerLab\\grammar.y"
                                                            { 
                                                                auto tmp = enumParamNode::create_enum_param_node_without_value((yyvsp[0].id_union)); 
                                                                (yyval.enum_param_list_union) = enumParamNode::create_enum_param_node_list_from_enum_param_node(tmp); 
                                                            }
#line 2417 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 121: /* enum_param_list: ID EQUALS expr  */
#line 443 ".\\CompilerLab\\grammar.y"
                                                            {
                                                                auto tmp = enumParamNode::create_enum_param_node_with_value((yyvsp[-2].id_union), (yyvsp[0].expr_union));
                                                                (yyval.enum_param_list_union) = enumParamNode::create_enum_param_node_list_from_enum_param_node(tmp);
                                                            }
#line 2426 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 122: /* enum_param_list: enum_param_list COMMA ID EQUALS expr  */
#line 447 ".\\CompilerLab\\grammar.y"
                                                            {
                                                                auto tmp = enumParamNode::create_enum_param_node_with_value((yyvsp[-2].id_union), (yyvsp[0].expr_union));
                                                                (yyval.enum_param_list_union) = enumParamNode::add_enum_param_node_to_enum_param_node_list((yyvsp[-4].enum_param_list_union), tmp);
                                                            }
#line 2435 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 123: /* enum_param_list: enum_param_list COMMA ID  */
#line 451 ".\\CompilerLab\\grammar.y"
                                                            {
                                                                auto tmp = enumParamNode::create_enum_param_node_without_value((yyvsp[0].id_union));
                                                                (yyval.enum_param_list_union) = enumParamNode::add_enum_param_node_to_enum_param_node_list((yyvsp[-2].enum_param_list_union), tmp);
                                                            }
#line 2444 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 124: /* enum_decl: ID EQUALS OPEN_BRACKET enum_param_list CLOSE_BRACKET SEMICOLON  */
#line 456 ".\\CompilerLab\\grammar.y"
                                                                                    { (yyval.enum_decl_union) = enumDeclNode::create_enum_decl_node((yyvsp[-5].id_union), (yyvsp[-2].enum_param_list_union));}
#line 2450 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 125: /* enum_decl_list: enum_decl  */
#line 458 ".\\CompilerLab\\grammar.y"
                                                            { (yyval.enum_decl_list_union) = enumDeclNode::create_enum_decl_node_list_from_enum_decl_node((yyvsp[0].enum_decl_union)); }
#line 2456 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 126: /* enum_decl_list: enum_decl_list enum_decl  */
#line 459 ".\\CompilerLab\\grammar.y"
                                                            { (yyval.enum_decl_list_union) = enumDeclNode::add_enum_decl_node_to_enum_decl_node_list((yyvsp[-1].enum_decl_list_union), (yyvsp[0].enum_decl_union)); }
#line 2462 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 127: /* class_decl_header: ID EQUALS CLASS_KW  */
#line 461 ".\\CompilerLab\\grammar.y"
                                                                                { (yyval.class_decl_header_union) = classDeclHeaderNode::create_class_decl_header_node(NULL, (yyvsp[-2].id_union)); }
#line 2468 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 128: /* class_decl_header: ID EQUALS CLASS_KW OPEN_BRACKET ID CLOSE_BRACKET  */
#line 462 ".\\CompilerLab\\grammar.y"
                                                                                { (yyval.class_decl_header_union) = classDeclHeaderNode::create_class_decl_header_node((yyvsp[-1].id_union), (yyvsp[-5].id_union)); }
#line 2474 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 129: /* property_decl: PROPERTY_KW ID COLON type READ_KW ID WRITE_KW ID SEMICOLON  */
#line 464 ".\\CompilerLab\\grammar.y"
                                                                                { (yyval.property_decl_union) = propertyDeclNode::create_property_decl_node((yyvsp[-7].id_union), (yyvsp[-5].type_union), (yyvsp[-3].id_union), (yyvsp[-1].id_union)); }
#line 2480 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 130: /* property_decl: PROPERTY_KW ID COLON type READ_KW ID SEMICOLON  */
#line 465 ".\\CompilerLab\\grammar.y"
                                                                                { (yyval.property_decl_union) = propertyDeclNode::create_property_decl_node((yyvsp[-5].id_union), (yyvsp[-3].type_union), (yyvsp[-1].id_union), NULL); }
#line 2486 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 131: /* override_modifier: OVERRIDE_KW SEMICOLON  */
#line 467 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.modifier_union) = modifier::override_modifier; }
#line 2492 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 132: /* field_modifier: STATIC_KW SEMICOLON  */
#line 469 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.modifier_union) = modifier::static_modifier; }
#line 2498 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 133: /* field_modifier: override_modifier  */
#line 470 ".\\CompilerLab\\grammar.y"
                                                                { (yyval.modifier_union) = (yyvsp[0].modifier_union); }
#line 2504 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 134: /* field_modifier_list: field_modifier  */
#line 472 ".\\CompilerLab\\grammar.y"
                                                                {
                                                                    std::list<modifier> *res = new std::list<modifier>();
                                                                    res->push_back((yyvsp[0].modifier_union));
                                                                    (yyval.modifier_list_union) = res;
                                                                }
#line 2514 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 135: /* field_modifier_list: field_modifier_list field_modifier  */
#line 477 ".\\CompilerLab\\grammar.y"
                                                                {
                                                                    (yyvsp[-1].modifier_list_union)->push_back((yyvsp[0].modifier_union));
                                                                    (yyval.modifier_list_union) = (yyvsp[-1].modifier_list_union);
                                                                }
#line 2523 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 136: /* field_decl: var_decl  */
#line 482 ".\\CompilerLab\\grammar.y"
                                                                { fieldDeclNode::create_field_decl_node_without_field_modifiers((yyvsp[0].var_decl_union)); }
#line 2529 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 137: /* field_decl: var_decl field_modifier_list  */
#line 483 ".\\CompilerLab\\grammar.y"
                                                                { fieldDeclNode::create_field_decl_node_with_field_modifiers((yyvsp[-1].var_decl_union), (yyvsp[0].modifier_list_union)); }
#line 2535 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 138: /* method_procedure_decl: PROCEDURE_KW function_element SEMICOLON  */
#line 485 ".\\CompilerLab\\grammar.y"
                                                                               { (yyval.function_element_union) = (yyvsp[-1].function_element_union); }
#line 2541 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 139: /* method_procedure_decl: PROCEDURE_KW ID SEMICOLON  */
#line 486 ".\\CompilerLab\\grammar.y"
                                                                               { (yyval.function_element_union) = functionElementNode::create_function_element((yyvsp[-1].id_union), NULL); }
#line 2547 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 140: /* method_procedure_decl_with_modifier_NO: method_procedure_decl  */
#line 488 ".\\CompilerLab\\grammar.y"
                                                                                            { (yyval.method_procedure_decl_with_modifier_union) = methodProcedureDeclWithModifierNode::create_method_procedure_decl_with_modifier_node((yyvsp[0].function_element_union), NULL); }
#line 2553 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 141: /* method_procedure_decl_with_modifier_NO: method_procedure_decl method_modifier_list  */
#line 489 ".\\CompilerLab\\grammar.y"
                                                                                            { (yyval.method_procedure_decl_with_modifier_union) = methodProcedureDeclWithModifierNode::create_method_procedure_decl_with_modifier_node((yyvsp[-1].function_element_union), (yyvsp[0].modifier_list_union)); }
#line 2559 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 142: /* method_function_decl: FUNCTION_KW function_element COLON type SEMICOLON  */
#line 491 ".\\CompilerLab\\grammar.y"
                                                                                { (yyval.method_function_decl_union) = methodFunctionDeclNode::create_method_function_decl_node_with_params((yyvsp[-3].function_element_union), (yyvsp[-1].type_union)); }
#line 2565 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 143: /* method_function_decl: FUNCTION_KW ID COLON type SEMICOLON  */
#line 492 ".\\CompilerLab\\grammar.y"
                                                                                { (yyval.method_function_decl_union) = methodFunctionDeclNode::create_method_function_decl_node_without_params((yyvsp[-3].id_union), (yyvsp[-1].type_union)); }
#line 2571 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 144: /* method_function_decl_with_modifier_NO: method_function_decl  */
#line 494 ".\\CompilerLab\\grammar.y"
                                                                                        { (yyval.method_function_decl_with_modifier_union) = methodFunctionDeclWithModifierNode::create_method_function_decl_with_modifier_node((yyvsp[0].method_function_decl_union), NULL); }
#line 2577 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 145: /* method_function_decl_with_modifier_NO: method_function_decl method_modifier_list  */
#line 495 ".\\CompilerLab\\grammar.y"
                                                                                        { (yyval.method_function_decl_with_modifier_union) = methodFunctionDeclWithModifierNode::create_method_function_decl_with_modifier_node((yyvsp[-1].method_function_decl_union), (yyvsp[0].modifier_list_union)); }
#line 2583 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 146: /* constructor_decl: CONSTRUCTOR_KW function_element SEMICOLON  */
#line 497 ".\\CompilerLab\\grammar.y"
                                                                                        { (yyval.constructor_decl_union) = constructorDeclNode::create_constructor_decl_node_with_params((yyvsp[-1].function_element_union)); }
#line 2589 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 147: /* constructor_decl: CONSTRUCTOR_KW ID SEMICOLON  */
#line 498 ".\\CompilerLab\\grammar.y"
                                                                                        { (yyval.constructor_decl_union) = constructorDeclNode::create_constructor_decl_node_without_params((yyvsp[-1].id_union)); }
#line 2595 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 148: /* constructor_decl_with_modifier_NO: constructor_decl  */
#line 500 ".\\CompilerLab\\grammar.y"
                                                                                        { (yyval.constructor_decl_with_modifier_no_union) = constructorDeclWithModifierNoNode::create_constructor_decl_with_modifier_node((yyvsp[0].constructor_decl_union), false); }
#line 2601 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 149: /* constructor_decl_with_modifier_NO: constructor_decl override_modifier  */
#line 501 ".\\CompilerLab\\grammar.y"
                                                                                        { (yyval.constructor_decl_with_modifier_no_union) = constructorDeclWithModifierNoNode::create_constructor_decl_with_modifier_node((yyvsp[-1].constructor_decl_union), true); }
#line 2607 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 150: /* constructor_impl: CONSTRUCTOR_KW ID DOT function_element SEMICOLON stmt  */
#line 503 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.constructor_impl_union) = constructorImplNode::create_constructor_impl_node(NULL, (yyvsp[-4].id_union), (yyvsp[-2].function_element_union), false, (yyvsp[0].stmt_union)); }
#line 2613 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 151: /* constructor_impl: CONSTRUCTOR_KW ID DOT function_element SEMICOLON override_modifier stmt  */
#line 504 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.constructor_impl_union) = constructorImplNode::create_constructor_impl_node(NULL, (yyvsp[-5].id_union), (yyvsp[-3].function_element_union), true, (yyvsp[0].stmt_union)); }
#line 2619 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 152: /* constructor_impl: CONSTRUCTOR_KW ID DOT ID SEMICOLON stmt  */
#line 505 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.constructor_impl_union) = constructorImplNode::create_constructor_impl_node((yyvsp[-2].id_union), (yyvsp[-4].id_union), NULL, false, (yyvsp[0].stmt_union)); }
#line 2625 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 153: /* constructor_impl: CONSTRUCTOR_KW ID DOT ID SEMICOLON override_modifier stmt  */
#line 506 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.constructor_impl_union) = constructorImplNode::create_constructor_impl_node((yyvsp[-3].id_union), (yyvsp[-5].id_union), NULL, true, (yyvsp[0].stmt_union)); }
#line 2631 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 154: /* destructor_decl: DESTRUCTOR_KW ID SEMICOLON  */
#line 508 ".\\CompilerLab\\grammar.y"
                                                                       { (yyval.destructor_decl_union) = destructorDeclNode::create_destructor_decl_node((yyvsp[-1].id_union), false); }
#line 2637 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 155: /* destructor_decl: DESTRUCTOR_KW ID SEMICOLON override_modifier  */
#line 509 ".\\CompilerLab\\grammar.y"
                                                                       { (yyval.destructor_decl_union) = destructorDeclNode::create_destructor_decl_node((yyvsp[-2].id_union), true); }
#line 2643 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 156: /* destructor_impl: DESTRUCTOR_KW ID DOT ID SEMICOLON stmt  */
#line 511 ".\\CompilerLab\\grammar.y"
                                                                                { (yyval.destructor_impl_union) = destructorImplNode::create_destructor_impl_node((yyvsp[-2].id_union), (yyvsp[-4].id_union), (yyvsp[0].stmt_union), false); }
#line 2649 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 157: /* destructor_impl: DESTRUCTOR_KW ID DOT ID SEMICOLON override_modifier stmt  */
#line 512 ".\\CompilerLab\\grammar.y"
                                                                                { (yyval.destructor_impl_union) = destructorImplNode::create_destructor_impl_node((yyvsp[-3].id_union), (yyvsp[-5].id_union), (yyvsp[0].stmt_union), true); }
#line 2655 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 158: /* implementation_element: constructor_impl SEMICOLON  */
#line 514 ".\\CompilerLab\\grammar.y"
                                                    { (yyval.implementation_element_union) = implementationElementNode::create_implementation_element_node_from_constructor_impl((yyvsp[-1].constructor_impl_union)); }
#line 2661 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 159: /* implementation_element: destructor_impl SEMICOLON  */
#line 515 ".\\CompilerLab\\grammar.y"
                                                    { (yyval.implementation_element_union) = implementationElementNode::create_implementation_element_node_from_destructor_impl((yyvsp[-1].destructor_impl_union)); }
#line 2667 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 160: /* implementation_element: procedure_impl SEMICOLON  */
#line 516 ".\\CompilerLab\\grammar.y"
                                                    { (yyval.implementation_element_union) = implementationElementNode::create_implementation_element_node_from_procedure_impl((yyvsp[-1].procedure_impl_union)); }
#line 2673 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 161: /* implementation_element: function_impl SEMICOLON  */
#line 517 ".\\CompilerLab\\grammar.y"
                                                    { (yyval.implementation_element_union) = implementationElementNode::create_implementation_element_node_from_function_impl((yyvsp[-1].function_impl_union)); }
#line 2679 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 162: /* implementation_list: implementation_element  */
#line 519 ".\\CompilerLab\\grammar.y"
                                                                        { (yyval.implementation_list_union) = implementationElementNode::create_implementation_element_node_list_from_implementation_element_node((yyvsp[0].implementation_element_union)); }
#line 2685 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 163: /* implementation_list: implementation_list implementation_element  */
#line 520 ".\\CompilerLab\\grammar.y"
                                                                        { (yyval.implementation_list_union) = implementationElementNode::add_implementation_element_node_to_implementation_element_node_list((yyvsp[-1].implementation_list_union), (yyvsp[0].implementation_element_union)); }
#line 2691 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 164: /* implementation_sect: IMPLEMENTATION_KW implementation_list  */
#line 522 ".\\CompilerLab\\grammar.y"
                                                                        { (yyval.implementation_list_union) = (yyvsp[0].implementation_list_union); }
#line 2697 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 165: /* method_modifier: field_modifier  */
#line 524 ".\\CompilerLab\\grammar.y"
                                                               { (yyval.modifier_union) = (yyvsp[0].modifier_union); }
#line 2703 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 166: /* method_modifier: OVERLOAD_KW SEMICOLON  */
#line 525 ".\\CompilerLab\\grammar.y"
                                                               { (yyval.modifier_union) = modifier::overload_modifier; }
#line 2709 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 167: /* method_modifier_list: method_modifier  */
#line 527 ".\\CompilerLab\\grammar.y"
                                                                { 
                                                                    std::list<modifier> *res = new std::list<modifier>();
                                                                    res->push_back((yyvsp[0].modifier_union)); 
                                                                    (yyval.modifier_list_union) = res;
                                                                }
#line 2719 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 168: /* method_modifier_list: method_modifier_list method_modifier  */
#line 532 ".\\CompilerLab\\grammar.y"
                                                                {
                                                                    (yyvsp[-1].modifier_list_union)->push_back((yyvsp[0].modifier_union));
                                                                    (yyval.modifier_list_union) = (yyvsp[-1].modifier_list_union);
                                                                }
#line 2728 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 169: /* method_decl: method_procedure_decl_with_modifier_NO  */
#line 537 ".\\CompilerLab\\grammar.y"
                                                                    { (yyval.method_decl_union) = methodDeclNode::create_method_decl_node_from_procedure((yyvsp[0].method_procedure_decl_with_modifier_union)); }
#line 2734 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 170: /* method_decl: method_function_decl_with_modifier_NO  */
#line 538 ".\\CompilerLab\\grammar.y"
                                                                    { (yyval.method_decl_union) = methodDeclNode::create_method_decl_node_from_function((yyvsp[0].method_function_decl_with_modifier_union)); }
#line 2740 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 171: /* method_field_property_list: constructor_decl_with_modifier_NO  */
#line 540 ".\\CompilerLab\\grammar.y"
                                                                                                { 
                                                                                                    auto node = methodFieldPropertyNode::create_method_field_property_node_from_constructor((yyvsp[0].constructor_decl_with_modifier_no_union));
                                                                                                    (yyval.method_field_property_list_list_union) = methodFieldPropertyNode::create_method_field_property_node_list_from_method_field_property_node(node);
                                                                                                }
#line 2749 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 172: /* method_field_property_list: destructor_decl  */
#line 544 ".\\CompilerLab\\grammar.y"
                                                                                                {
                                                                                                    auto node = methodFieldPropertyNode::create_method_field_property_node_from_destructor((yyvsp[0].destructor_decl_union));
                                                                                                    (yyval.method_field_property_list_list_union) = methodFieldPropertyNode::create_method_field_property_node_list_from_method_field_property_node(node);
                                                                                                }
#line 2758 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 173: /* method_field_property_list: field_decl  */
#line 548 ".\\CompilerLab\\grammar.y"
                                                                                                {
                                                                                                    auto node = methodFieldPropertyNode::create_method_field_property_node_from_field((yyvsp[0].field_decl_union));
                                                                                                    (yyval.method_field_property_list_list_union) = methodFieldPropertyNode::create_method_field_property_node_list_from_method_field_property_node(node);
                                                                                                }
#line 2767 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 174: /* method_field_property_list: property_decl  */
#line 552 ".\\CompilerLab\\grammar.y"
                                                                                                {
                                                                                                    auto node = methodFieldPropertyNode::create_method_field_property_node_from_property((yyvsp[0].property_decl_union));
                                                                                                    (yyval.method_field_property_list_list_union) = methodFieldPropertyNode::create_method_field_property_node_list_from_method_field_property_node(node);
                                                                                                }
#line 2776 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 175: /* method_field_property_list: method_decl  */
#line 556 ".\\CompilerLab\\grammar.y"
                                                                                                {
                                                                                                    auto node = methodFieldPropertyNode::create_method_field_property_node_from_method((yyvsp[0].method_decl_union));
                                                                                                    (yyval.method_field_property_list_list_union) = methodFieldPropertyNode::create_method_field_property_node_list_from_method_field_property_node(node);
                                                                                                }
#line 2785 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 176: /* method_field_property_list: method_field_property_list constructor_decl_with_modifier_NO  */
#line 560 ".\\CompilerLab\\grammar.y"
                                                                                                {
                                                                                                    auto node = methodFieldPropertyNode::create_method_field_property_node_from_constructor((yyvsp[0].constructor_decl_with_modifier_no_union));
                                                                                                    (yyval.method_field_property_list_list_union) = methodFieldPropertyNode::add_method_field_property_node_to_method_field_property_node_list((yyvsp[-1].method_field_property_list_list_union), node);
                                                                                                }
#line 2794 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 177: /* method_field_property_list: method_field_property_list destructor_decl  */
#line 564 ".\\CompilerLab\\grammar.y"
                                                                                                {
                                                                                                    auto node = methodFieldPropertyNode::create_method_field_property_node_from_destructor((yyvsp[0].destructor_decl_union));
                                                                                                    (yyval.method_field_property_list_list_union) = methodFieldPropertyNode::add_method_field_property_node_to_method_field_property_node_list((yyvsp[-1].method_field_property_list_list_union), node);
                                                                                                }
#line 2803 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 178: /* method_field_property_list: method_field_property_list field_decl  */
#line 568 ".\\CompilerLab\\grammar.y"
                                                                                                {
                                                                                                    auto node = methodFieldPropertyNode::create_method_field_property_node_from_field((yyvsp[0].field_decl_union));
                                                                                                    (yyval.method_field_property_list_list_union) = methodFieldPropertyNode::add_method_field_property_node_to_method_field_property_node_list((yyvsp[-1].method_field_property_list_list_union), node);
                                                                                                }
#line 2812 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 179: /* method_field_property_list: method_field_property_list property_decl  */
#line 572 ".\\CompilerLab\\grammar.y"
                                                                                                {
                                                                                                    auto node = methodFieldPropertyNode::create_method_field_property_node_from_property((yyvsp[0].property_decl_union));
                                                                                                    (yyval.method_field_property_list_list_union) = methodFieldPropertyNode::add_method_field_property_node_to_method_field_property_node_list((yyvsp[-1].method_field_property_list_list_union), node);
                                                                                                }
#line 2821 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 180: /* method_field_property_list: method_field_property_list method_decl  */
#line 576 ".\\CompilerLab\\grammar.y"
                                                                                                {
                                                                                                    auto node = methodFieldPropertyNode::create_method_field_property_node_from_method((yyvsp[0].method_decl_union));
                                                                                                    (yyval.method_field_property_list_list_union) = methodFieldPropertyNode::add_method_field_property_node_to_method_field_property_node_list((yyvsp[-1].method_field_property_list_list_union), node);
                                                                                                }
#line 2830 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 181: /* class_element: PRIVATE_KW method_field_property_list SEMICOLON  */
#line 581 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.class_element_union) = classElementNode::create_class_element_node((yyvsp[-1].method_field_property_list_list_union), accessModifier::private_access_modifier); }
#line 2836 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 182: /* class_element: PUBLIC_KW method_field_property_list SEMICOLON  */
#line 582 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.class_element_union) = classElementNode::create_class_element_node((yyvsp[-1].method_field_property_list_list_union), accessModifier::public_access_modifier); }
#line 2842 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 183: /* class_element: PROTECTED_KW method_field_property_list SEMICOLON  */
#line 583 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.class_element_union) = classElementNode::create_class_element_node((yyvsp[-1].method_field_property_list_list_union), accessModifier::protected_access_modifier); }
#line 2848 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 184: /* class_element: method_field_property_list SEMICOLON  */
#line 584 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.class_element_union) = classElementNode::create_class_element_node((yyvsp[-1].method_field_property_list_list_union), accessModifier::public_access_modifier); }
#line 2854 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 185: /* class_element_list: class_element  */
#line 586 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.class_element_list_union) = classElementNode::create_class_element_node_list_from_class_element_node((yyvsp[0].class_element_union)); }
#line 2860 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 186: /* class_element_list: class_element_list class_element  */
#line 587 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.class_element_list_union) = classElementNode::add_class_element_node_to_class_element_node_list((yyvsp[-1].class_element_list_union), (yyvsp[0].class_element_union)); }
#line 2866 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 187: /* class_decl: class_decl_header class_element_list SEMICOLON END_KW SEMICOLON  */
#line 589 ".\\CompilerLab\\grammar.y"
                                                                                                { (yyval.class_decl_union) = classDeclNode::create_class_decl_node((yyvsp[-4].class_decl_header_union), (yyvsp[-3].class_element_list_union)); }
#line 2872 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 188: /* class_decl_list: class_decl  */
#line 591 ".\\CompilerLab\\grammar.y"
                                                    { (yyval.class_decl_list_union) = classDeclNode::create_class_decl_node_list_from_class_decl_node((yyvsp[0].class_decl_union)); }
#line 2878 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 189: /* class_decl_list: class_decl_list class_decl  */
#line 592 ".\\CompilerLab\\grammar.y"
                                                    { (yyval.class_decl_list_union) = classDeclNode::add_class_decl_node_to_class_decl_node_list((yyvsp[-1].class_decl_list_union), (yyvsp[0].class_decl_union)); }
#line 2884 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 190: /* type_sect: TYPE_KW class_decl_list  */
#line 594 ".\\CompilerLab\\grammar.y"
                                            { (yyval.type_sect_union) = typeSectNode::create_type_sect_node_from_class_decl_list((yyvsp[0].class_decl_list_union)); }
#line 2890 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 191: /* type_sect: TYPE_KW enum_decl_list  */
#line 595 ".\\CompilerLab\\grammar.y"
                                            { (yyval.type_sect_union) = typeSectNode::create_type_sect_node_from_enum_decl_list((yyvsp[0].enum_decl_list_union)); }
#line 2896 ".\\CompilerLab\\grammar.tab.cpp"
    break;

  case 192: /* with_stmt: WITH_KW id_list DO_KW stmt  */
#line 597 ".\\CompilerLab\\grammar.y"
                                            { (yyval.with_stmt_union) = withStmtNode::create_with_stmt_node((yyvsp[-2].expr_list_union), (yyvsp[0].stmt_union)); }
#line 2902 ".\\CompilerLab\\grammar.tab.cpp"
    break;


#line 2906 ".\\CompilerLab\\grammar.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 599 ".\\CompilerLab\\grammar.y"

