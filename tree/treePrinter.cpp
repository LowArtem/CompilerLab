#include "treePrinter.h"
#include <fstream>

using namespace std;

treePrinter::treePrinter()
{
}

void treePrinter::printTree(startSymbolNode *root)
{
    std::ofstream outfile("tree.dot");
    outfile << "digraph Tree {\n";

    printStartSymbolNode(root);

    outfile << "}\n";
    outfile.close();
}

void treePrinter::printLiteralNode(literalNode *node);

void treePrinter::printExprNode(exprNode *node);

void treePrinter::printStmtNode(stmtNode *node);

void treePrinter::printIfStmtNode(ifStmtNode *node);

void treePrinter::printStmtBlockNode(stmtBlockNode *node);

void treePrinter::printRepeatStmtNode(repeatStmtNode *node);

void treePrinter::printCaseStmtNode(caseStmtNode *node);

void treePrinter::printCaseElementNode(caseElementNode *node);

void treePrinter::printParamListNode(paramListNode *node);

void treePrinter::printVarDeclNode(varDeclNode *node);

void treePrinter::printTypeNode(typeNode *node);

void treePrinter::printArrayDimensionNode(arrayDimensionNode *node);

void treePrinter::printWithStmtNode(withStmtNode *node);

void treePrinter::printForStmtNode(forStmtNode *node);

void treePrinter::printWhileStmtNode(whileStmtNode *node);

void treePrinter::printFunctionElementNode(functionElementNode *node);

void treePrinter::printProcedureImplNode(procedureImplNode *node);

void treePrinter::printFunctionImplNode(functionImplNode *node);

void treePrinter::printClassDeclHeaderNode(classDeclHeaderNode *node);

void treePrinter::printClassDeclNode(classDeclNode *node);

void treePrinter::printPropertyDeclNode(propertyDeclNode *node);

void treePrinter::printMethodFunctionDeclNode(methodFunctionDeclNode *node);

void treePrinter::printMethodFunctionDeclWithModifierNode(methodFunctionDeclWithModifierNode *node);

void treePrinter::printMethodProcedureDeclWithModifierNode(methodProcedureDeclWithModifierNode *node);

void treePrinter::printConstructorDeclNode(constructorDeclNode *node);

void treePrinter::printConstructorDeclWithModifierNoNode(constructorDeclWithModifierNoNode *node);

void treePrinter::printConstructorImplNode(constructorImplNode *node);

void treePrinter::printDestructorDeclNode(destructorDeclNode *node);

void treePrinter::printDestructorImplNode(destructorImplNode *node);

void treePrinter::printMethodDeclNode(methodDeclNode *node);

void treePrinter::printMethodFieldPropertyNode(methodFieldPropertyNode *node);

void treePrinter::printClassElementNode(classElementNode *node);

void treePrinter::printSectionNode(sectionNode *node);

void treePrinter::printEnumDeclNode(enumDeclNode *node);

void treePrinter::printEnumParamNode(enumParamNode *node);

void treePrinter::printFieldDeclNode(fieldDeclNode *node);

void treePrinter::printImplementationElementNode(implementationElementNode *node);

void treePrinter::printTypeSectNode(typeSectNode *node);

void treePrinter::printStartSymbolNode(startSymbolNode *node)
{
    if (node != nullptr)
    {
        outfile << "startSymbol [shape=Mdiamond];\n";

void treePrinter::printStartSymbolNode(startSymbolNode *node)
{
    if (node != nullptr)
    {
        if (node->id != "")
            outfile << "startSymbol -> " << node->id << ";\n";
        if (node->stmt_block != nullptr)
        {
            outfile << "startSymbol -> stmtBlock_" << node->stmt_block->id_node << ";\n";
            printStmtBlockNode(node->stmt_block);
        }
        if (node->section_node_list != nullptr)
            for (auto it = node->section_node_list->begin(); it != node->section_node_list->end(); it++)
            {
                outfile << "startSymbol -> section_" << (*it)->id_node << ";\n";
                printSectionNode(*it);
            }
        else
            outfile << "startSymbol [shape=Mdiamond];\n";
    }
}
