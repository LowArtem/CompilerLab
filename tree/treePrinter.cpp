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

void treePrinter::printSectionNode(sectionNode *node)
{
    if (node != nullptr)
    {
        if (node->type == sectionType::var_decl_sect)
        {
            outfile << "section_" << node->id_node << " -> varDecl_" << node->var_decl->id_node << ";\n";
            printVarDeclNode(node->var_decl);
        }
        else if (node->type == sectionType::type_sect)
        {
            outfile << "section_" << node->id_node << " -> typeSect_" << node->type_sect->id_node << ";\n";
            printTypeSectNode(node->type_sect);
        }
        else if (node->type == sectionType::implementation_sect)
        {
            for (auto it = node->implementation_element_list->begin(); it != node->implementation_element_list->end(); it++)
            {
                outfile << "section_" << node->id_node << " -> implementationElement_" << (*it)->id_node << ";\n";
                printImplementationElementNode(*it);
            }
        }
    }
}

void treePrinter::printEnumDeclNode(enumDeclNode *node)
{
    if (node != nullptr)
    {
        outfile << "enumDecl_" << node->id_node << " -> " << node->id << ";\n";

        for (auto it = node->enum_param_list->begin(); it != node->enum_param_list->end(); it++)
        {
            outfile << "enumDecl_" << node->id_node << " -> enumParam_" << (*it)->id_node << ";\n";
            printEnumParamNode(*it);
        }
    }
}

void treePrinter::printEnumParamNode(enumParamNode *node)
{
    if (node != nullptr)
    {
        outfile << "enumParam_" << node->id_node << " -> " << node->id << ";\n";

        if (node->expr_node != nullptr)
        {
            outfile << "enumParam_" << node->id_node << " -> expr_" << node->expr_node->id_node << ";\n";
            printExprNode(node->expr_node);
        }
    }
}

void treePrinter::printFieldDeclNode(fieldDeclNode *node)
{
    if (node != nullptr)
    {
        if (node->var_decl_node != nullptr)
        {
            outfile << "fieldDecl_" << node->id_node << " -> varDecl_" << node->var_decl_node->id_node << ";\n";
            printVarDeclNode(node->var_decl_node);
        }
        if (node->field_modifier_list != nullptr)
            for (auto it = node->field_modifier_list->begin(); it != node->field_modifier_list->end(); it++)
            {
                if (*it == modifier::override_modifier)
                {
                    outfile << "fieldDecl_" << node->id_node << " -> override_modifier" << node->id_node << "_" << it - node->field_modifier_list->begin() << ";\n";
                }

                if (*it == modifier::static_modifier)
                {
                    outfile << "fieldDecl_" << node->id_node << " -> static_modifier" << node->id_node << "_" << it - node->field_modifier_list->begin() << ";\n";
                }

                if (*it == modifier::overload_modifier)
                {
                    outfile << "fieldDecl_" << node->id_node << " -> overload_modifier" << node->id_node << "_" << it - node->field_modifier_list->begin() << ";\n";
                }
            }
    }
}

void treePrinter::printImplementationElementNode(implementationElementNode *node)
{
    if (node != nullptr)
    {
        if (node->type == implementationElementType::constructor_impl_type && node->constructor_impl_node != nullptr)
        {
            outfile << "implementationElement_" << node->id_node << " -> constructorImpl_" << node->constructor_impl_node->id_node << ";\n";
            printConstructorImplNode(node->constructor_impl_node);
        }
        else if (node->type == implementationElementType::destructor_impl_type && node->destructor_impl_node != nullptr)
        {
            outfile << "implementationElement_" << node->id_node << " -> destructorImpl_" << node->destructor_impl_node->id_node << ";\n";
            printDestructorImplNode(node->destructor_impl_node);
        }
        else if (node->type == implementationElementType::procedure_impl_type && node->procedure_impl_node != nullptr)
        {
            outfile << "implementationElement_" << node->id_node << " -> procedureImpl_" << node->procedure_impl_node->id_node << ";\n";
            printProcedureImplNode(node->procedure_impl_node);
        }
        else if (node->type == implementationElementType::function_impl_type && node->function_impl_node != nullptr)
        {
            outfile << "implementationElement_" << node->id_node << " -> functionImpl_" << node->function_impl_node->id_node << ";\n";
            printFunctionImplNode(node->function_impl_node);
        }
    }
}

void treePrinter::printTypeSectNode(typeSectNode *node)
{
    if (node != nullptr)
    {
        if (node->type == typeSectType::class_decl_type && node->class_decl_node_list != nullptr)
            for (auto it = node->class_decl_node_list->begin(); it != node->class_decl_node_list->end(); it++)
            {
                outfile << "typeSect_" << node->id_node << " -> classDecl_" << (*it)->id_node << ";\n";
                printClassDeclNode(*it);
            }
        else if (node->type == typeSectType::enum_decl_type && node->enum_decl_node_list != nullptr)
            for (auto it = node->enum_decl_node_list->begin(); it != node->enum_decl_node_list->end(); it++)
            {
                outfile << "typeSect_" << node->id_node << " -> enumDecl_" << (*it)->id_node << ";\n";
                printEnumDeclNode(*it);
            }
    }
}

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
