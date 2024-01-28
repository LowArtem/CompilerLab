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
#include <fstream>

using namespace std;


class treePrinter
{
private:
    ofstream outfile;

public:

    treePrinter();

    void printTree(startSymbolNode *root);

    void printLiteralNode(literalNode *node);

    void printExprNode(exprNode *node);

    void printStmtNode(stmtNode *node);

    void printIfStmtNode(ifStmtNode *node);

    void printStmtBlockNode(stmtBlockNode *node);

    void printRepeatStmtNode(repeatStmtNode *node);

    void printCaseStmtNode(caseStmtNode *node);

    void printCaseElementNode(caseElementNode *node);

    void printParamListNode(paramListNode *node);

    void printVarDeclNode(varDeclNode *node);

    void printTypeNode(typeNode *node);

    void printArrayDimensionNode(arrayDimensionNode *node);

    void printWithStmtNode(withStmtNode *node);

    void printForStmtNode(forStmtNode *node);

    void printWhileStmtNode(whileStmtNode *node);

    void printFunctionElementNode(functionElementNode *node);

    void printProcedureImplNode(procedureImplNode *node);

    void printFunctionImplNode(functionImplNode *node);

    void printClassDeclHeaderNode(classDeclHeaderNode *node);

    void printClassDeclNode(classDeclNode *node);

    void printPropertyDeclNode(propertyDeclNode *node);

    void printMethodFunctionDeclNode(methodFunctionDeclNode *node);

    void printMethodFunctionDeclWithModifierNode(methodFunctionDeclWithModifierNode *node);

    void printMethodProcedureDeclWithModifierNode(methodProcedureDeclWithModifierNode *node);

    void printConstructorDeclNode(constructorDeclNode *node);

    void printConstructorDeclWithModifierNoNode(constructorDeclWithModifierNoNode *node);

    void printConstructorImplNode(constructorImplNode *node);

    void printDestructorDeclNode(destructorDeclNode *node);

    void printDestructorImplNode(destructorImplNode *node);

    void printMethodDeclNode(methodDeclNode *node);

    void printMethodFieldPropertyNode(methodFieldPropertyNode *node);

    void printClassElementNode(classElementNode *node);

    void printSectionNode(sectionNode *node);

    void printEnumDeclNode(enumDeclNode *node);

    void printEnumParamNode(enumParamNode *node);

    void printFieldDeclNode(fieldDeclNode *node);

    void printImplementationElementNode(implementationElementNode *node);

    void printTypeSectNode(typeSectNode *node);

    void printStartSymbolNode(startSymbolNode *node);
};