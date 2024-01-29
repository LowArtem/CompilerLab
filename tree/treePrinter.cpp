#include "treePrinter.h"

using namespace std;

startSymbolNode *root;

treePrinter::treePrinter()
{
}

void treePrinter::printTree(startSymbolNode *root)
{
    outfile = ofstream("tree.dot");
    outfile << "digraph Tree {\n";

    printStartSymbolNode(root);

    outfile << "}\n";
    outfile.close();
}

void treePrinter::printLiteralNode(literalNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        if (node->type == literalType::int_type)
        {
            outfile << "literal_" << node->id_node << " -> intType_" << node->id_node << ";\n";
            outfile << "intType_" << node->id_node << " -> " << node->int_value << ";\n";
        }
        else if (node->type == literalType::real_type)
        {
            outfile << "literal_" << node->id_node << " -> realType_" << node->id_node << ";\n";
            outfile << "realType_" << node->id_node << " -> " << node->real_value << ";\n";
        }
        else if (node->type == literalType::boolean_type)
        {
            outfile << "literal_" << node->id_node << " -> booleanType_" << node->id_node << ";\n";
            if (node->boolean_value)
            {
                outfile << "booleanType_" << node->id_node << " -> true_" << node->id_node << ";\n";
            }
            else
            {
                outfile << "booleanType_" << node->id_node << " -> false_" << node->id_node << ";\n";
            }
        }
        else if (node->type == literalType::char_type)
        {
            outfile << "literal_" << node->id_node << " -> " << node->char_value << ";\n";
        }
    }
}

void treePrinter::printExprNode(exprNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        if (node->type == exprType::literal_node_type)
        {
            outfile << "expr_" << node->id_node << " -> literal_" << node->literal_node->id_node << ";\n";
            printLiteralNode(node->literal_node);
        }
        else if (node->type == exprType::string_type)
        {
            outfile << "expr_" << node->id_node << " -> stringType_" << node->id_node << ";\n";
            outfile << "stringType_" << node->id_node << " -> " << node->string_value << ";\n";
        }
        else if (node->type == exprType::id_type_expr)
        {
            outfile << "expr_" << node->id_node << " -> ID_" << node->id_node << ";\n";
            outfile << "ID_" << node->id_node << " -> " << node->id << ";\n";
        }
        else if (node->type == exprType::plus_type)
        {
            outfile << "expr_" << node->id_node << " -> plus_" << node->id_node << ";\n";
            outfile << "plus_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "plus_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::minus_type)
        {
            outfile << "expr_" << node->id_node << " -> minus_" << node->id_node << ";\n";
            outfile << "minus_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "minus_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::multiplication_type)
        {
            outfile << "expr_" << node->id_node << " -> multiplication_" << node->id_node << ";\n";
            outfile << "multiplication_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "multiplication_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::division_type)
        {
            outfile << "expr_" << node->id_node << " -> division_" << node->id_node << ";\n";
            outfile << "division_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "division_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::less_type)
        {
            outfile << "expr_" << node->id_node << " -> less_" << node->id_node << ";\n";
            outfile << "less_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "less_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::greater_type)
        {
            outfile << "expr_" << node->id_node << " -> greater_" << node->id_node << ";\n";
            outfile << "greater_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "greater_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::not_equal_type)
        {
            outfile << "expr_" << node->id_node << " -> notEqual_" << node->id_node << ";\n";
            outfile << "notEqual_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "notEqual_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::equals_type)
        {
            outfile << "expr_" << node->id_node << " -> equals_" << node->id_node << ";\n";
            outfile << "equals_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "equals_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::less_or_equal_type)
        {
            outfile << "expr_" << node->id_node << " -> lessOrEqual_" << node->id_node << ";\n";
            outfile << "lessOrEqual_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "lessOrEqual_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::greater_or_equal_type)
        {
            outfile << "expr_" << node->id_node << " -> greaterOrEqual_" << node->id_node << ";\n";
            outfile << "greaterOrEqual_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "greaterOrEqual_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::or_type)
        {
            outfile << "expr_" << node->id_node << " -> or_" << node->id_node << ";\n";
            outfile << "or_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "or_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::xor_type)
        {
            outfile << "expr_" << node->id_node << " -> xor_" << node->id_node << ";\n";
            outfile << "xor_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "xor_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::and_type)
        {
            outfile << "expr_" << node->id_node << " -> and_" << node->id_node << ";\n";
            outfile << "and_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "and_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::as_type)
        {
            outfile << "expr_" << node->id_node << " -> as_" << node->id_node << ";\n";
            outfile << "as_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "as_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::in_type)
        {
            outfile << "expr_" << node->id_node << " -> in_" << node->id_node << ";\n";
            outfile << "in_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "in_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::is_type)
        {
            outfile << "expr_" << node->id_node << " -> is_" << node->id_node << ";\n";
            outfile << "is_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "is_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::div_type)
        {
            outfile << "expr_" << node->id_node << " -> div_" << node->id_node << ";\n";
            outfile << "div_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "div_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::mod_type)
        {
            outfile << "expr_" << node->id_node << " -> mod_" << node->id_node << ";\n";
            outfile << "mod_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "mod_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == exprType::not_type)
        {
            outfile << "expr_" << node->id_node << " -> not_" << node->id_node << ";\n";
            outfile << "not_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
        }
        else if (node->type == exprType::uplus_type)
        {
            outfile << "expr_" << node->id_node << " -> uplus_" << node->id_node << ";\n";
            outfile << "uplus_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
        }
        else if (node->type == exprType::uminus_type)
        {
            outfile << "expr_" << node->id_node << " -> uminus_" << node->id_node << ";\n";
            outfile << "uminus_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
        }
        else if (node->type == exprType::function_call_type_expr)
        {
            outfile << "expr_" << node->id_node << " -> function_call_" << node->id_node << ";\n";
            outfile << "function_call_" << node->id_node << " -> " << node->id << ";\n";
            for (auto it = node->params->begin(); it != node->params->end(); it++)
            {
                outfile << "function_call_" << node->id_node << " -> expr_" << (*it)->id_node << ";\n";
                printExprNode(*it);
            }
        }
        else if (node->type == exprType::method_function_call_type)
        {
            outfile << "expr_" << node->id_node << " -> method_function_call_" << node->id_node << ";\n";
            outfile << "method_function_call_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "method_function_call_" << node->id_node << " -> " << node->id << ";\n";
            for (auto it = node->params->begin(); it != node->params->end(); it++)
            {
                outfile << "method_function_call_" << node->id_node << " -> expr_" << (*it)->id_node << ";\n";
                printExprNode(*it);
            }
        }
        else if (node->type == exprType::field_access_type)
        {
            outfile << "expr_" << node->id_node << " -> field_access_" << node->id_node << ";\n";
            outfile << "field_access_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "field_access_" << node->id_node << " -> " << node->id << ";\n";
        }
        else if (node->type == exprType::type_casting_type)
        {
            outfile << "expr_" << node->id_node << " -> type_casting_" << node->id_node << ";\n";
            outfile << "type_casting_" << node->id_node << " -> simple_type_" << node->id_node << ";\n";

            if (node->simple_type == simpleType::int_type_simple)
            {
                outfile << "simpleType_" << node->id_node << " -> "
                        << "int" << node->id_node << ";\n";
            }
            else if (node->simple_type == simpleType::real_type_simple)
            {
                outfile << "simpleType_" << node->id_node << " -> "
                        << "real" << node->id_node << ";\n";
            }
            else if (node->simple_type == simpleType::boolean_type_simple)
            {
                outfile << "simpleType_" << node->id_node << " -> "
                        << "boolean" << node->id_node << ";\n";
            }
            else if (node->simple_type == simpleType::char_type_simple)
            {
                outfile << "simpleType_" << node->id_node << " -> "
                        << "char" << node->id_node << ";\n";
            }
            else if (node->simple_type == simpleType::string_type_simple)
            {
                outfile << "simpleType_" << node->id_node << " -> "
                        << "string" << node->id_node << ";\n";
            }
            outfile << "type_casting_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
        }
        else if (node->type == exprType::self_type)
        {
            outfile << "expr_" << node->id_node << " -> self_" << node->id_node << ";\n";
        }
        else if (node->type == exprType::inherited_call_type)
        {
            outfile << "expr_" << node->id_node << " -> inherited_call_" << node->id_node << ";\n";
            outfile << "inherited_call_" << node->id_node << " -> " << node->id << ";\n";
            for (auto it = node->params->begin(); it != node->params->end(); it++)
            {
                outfile << "inherited_call_" << node->id_node << " -> expr_" << (*it)->id_node << ";\n";
                printExprNode(*it);
            }
        }
        else if (node->type == exprType::array_access_type)
        {
            outfile << "expr_" << node->id_node << " -> array_access_" << node->id_node << ";\n";
            outfile << "array_access_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            for (auto it = node->params->begin(); it != node->params->end(); it++)
            {
                outfile << "array_access_" << node->id_node << " -> expr_" << (*it)->id_node << ";\n";
                printExprNode(*it);
            }
        }
        else if (node->type == exprType::brackets_type)
        {
            outfile << "expr_" << node->id_node << " -> brackets_" << node->id_node << ";\n";
            outfile << "brackets_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
        }
    }
}

void treePrinter::printStmtNode(stmtNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        if (node->type == stmtType::assign_type)
        {
            outfile << "stmt_" << node->id_node << " -> expr_" << node->left_operand->id_node << ";\n";
            printExprNode(node->left_operand);
            outfile << "stmt_" << node->id_node << " -> expr_" << node->right_operand->id_node << ";\n";
            printExprNode(node->right_operand);
        }
        else if (node->type == stmtType::function_call_type)
        {
            outfile << "stmt_" << node->id_node << " -> " << node->id << ";\n";

            for (auto it = node->params->begin(); it != node->params->end(); it++)
            {
                outfile << "stmt_" << node->id_node << " -> expr_" << (*it)->id_node << ";\n";
                printExprNode(*it);
            }
        }
        else if (node->type == stmtType::method_function_call_type_stmt)
        {
            outfile << "stmt_" << node->id_node << " -> expr_" << node->parent->id_node << ";\n";
            printExprNode(node->parent);

            outfile << "stmt_" << node->id_node << " -> " << node->id << ";\n";

            if (node->params != nullptr && node->params->size() > 0)
            {
                for (auto it = node->params->begin(); it != node->params->end(); ++it)
                {
                    outfile << "stmt_" << node->id_node << " -> expr_" << (*it)->id_node << ";\n";
                    printExprNode(*it);
                }
            }
        }
        else if (node->type == stmtType::inherited_type)
        {
            outfile << "stmt_" << node->id_node << " -> inherited_" << node->id_node << ";\n";
        }
        else if (node->type == stmtType::stmt_block_type)
        {
            outfile << "stmt_" << node->id_node << " -> stmtBlock_" << node->stmt_block->id_node << ";\n";
            printStmtBlockNode(node->stmt_block);
        }
        else if (node->type == stmtType::if_type)
        {
            outfile << "stmt_" << node->id_node << " -> ifStmt_" << node->if_stmt->id_node << ";\n";
            printIfStmtNode(node->if_stmt);
        }
        else if (node->type == stmtType::case_type)
        {
            outfile << "stmt_" << node->id_node << " -> caseStmt_" << node->case_stmt->id_node << ";\n";
            printCaseStmtNode(node->case_stmt);
        }
        else if (node->type == stmtType::repeat_type)
        {
            outfile << "stmt_" << node->id_node << " -> repeatStmt_" << node->repeat_stmt->id_node << ";\n";
            printRepeatStmtNode(node->repeat_stmt);
        }
        else if (node->type == stmtType::while_type)
        {
            outfile << "stmt_" << node->id_node << " -> whileStmt_" << node->while_stmt->id_node << ";\n";
            printWhileStmtNode(node->while_stmt);
        }
        else if (node->type == stmtType::for_type)
        {
            outfile << "stmt_" << node->id_node << " -> forStmt_" << node->for_stmt->id_node << ";\n";
            printForStmtNode(node->for_stmt);
        }
        else if (node->type == stmtType::with_type)
        {
            outfile << "stmt_" << node->id_node << " -> withStmt_" << node->with_stmt->id_node << ";\n";
            printWithStmtNode(node->with_stmt);
        }
        else if (node->type == stmtType::empty_type)
        {
            outfile << "stmt_" << node->id_node << " -> empty_" << node->id_node << ";\n";
        }
    }
}

void treePrinter::printIfStmtNode(ifStmtNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "ifStmt_" << node->id_node << " -> expr_" << node->condition->id_node << ";\n";
        printExprNode(node->condition);

        outfile << "ifStmt_" << node->id_node << " -> stmt_" << node->if_body->id_node << ";\n";
        printStmtNode(node->if_body);

        if (node->else_body != nullptr)
        {
            outfile << "ifStmt_" << node->id_node << " -> stmt_" << node->else_body->id_node << ";\n";
            printStmtNode(node->else_body);
        }
    }
}

void treePrinter::printStmtBlockNode(stmtBlockNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        for (auto it = node->stmt_list->begin(); it != node->stmt_list->end(); it++)
        {
            outfile << "stmtBlock_" << node->id_node << " -> stmt_" << (*it)->id_node << ";\n";
            printStmtNode(*it);
        }
    }
}

void treePrinter::printRepeatStmtNode(repeatStmtNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        for (auto it = node->body->begin(); it != node->body->end(); it++)
        {
            outfile << "repeatStmt_" << node->id_node << " -> stmt_" << (*it)->id_node << ";\n";
            printStmtNode(*it);
        }

        outfile << "repeatStmt_" << node->id_node << " -> expr_" << node->condition->id_node << ";\n";
        printExprNode(node->condition);
    }
}

void treePrinter::printCaseStmtNode(caseStmtNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "caseStmt_" << node->id_node << " -> expr_" << node->selector_expression->id_node << ";\n";

        for (auto it = node->elements->begin(); it != node->elements->end(); it++)
        {
            outfile << "caseStmt_" << node->id_node << " -> caseElement_" << (*it)->id_node << ";\n";
            printCaseElementNode(*it);
        }

        if (node->else_body != nullptr)
        {
            outfile << "caseStmt_" << node->id_node << " -> stmt_" << node->else_body->id_node << ";\n";
            printStmtNode(node->else_body);
        }
    }
}

void treePrinter::printCaseElementNode(caseElementNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        for (auto it = node->condition->begin(); it != node->condition->end(); it++)
        {
            outfile << "caseElement_" << node->id_node << " -> expr_" << (*it)->id_node << ";\n";
            printExprNode(*it);
        }
        outfile << "caseElement_" << node->id_node << " -> stmt_" << node->body->id_node << ";\n";
        printStmtNode(node->body);
    }
}

void treePrinter::printParamListNode(paramListNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        for (auto it = node->var_decl_list->begin(); it != node->var_decl_list->end(); it++)
        {
            outfile << "paramList_" << node->id_node << " -> varDecl_" << (*it)->id_node << ";\n";
            printVarDeclNode(*it);
        }
    }
}

void treePrinter::printVarDeclNode(varDeclNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        for (auto it = node->id_list->begin(); it != node->id_list->end(); it++)
        {
            outfile << "varDecl_" << node->id_node << " -> expr_" << (*it)->id_node << ";\n";
            printExprNode(*it);
        }

        outfile << "varDecl_" << node->id_node << " -> type_" << node->type->id_node << ";\n";

        if (node->expr != nullptr)
        {
            outfile << "varDecl_" << node->id_node << " -> expr_" << node->expr->id_node << ";\n";
            printExprNode(node->expr);
        }
    }
}

void treePrinter::printTypeNode(typeNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        if (node->type == typeType::simple_type)
        {
            outfile << "type_" << node->id_node << " -> simpleType_" << node->id_node << ";\n";

            if (node->simple_type == simpleType::int_type_simple)
            {
                outfile << "simpleType_" << node->id_node << " -> "
                        << "int" << node->id_node << ";\n";
            }
            else if (node->simple_type == simpleType::real_type_simple)
            {
                outfile << "simpleType_" << node->id_node << " -> "
                        << "real" << node->id_node << ";\n";
            }
            else if (node->simple_type == simpleType::boolean_type_simple)
            {
                outfile << "simpleType_" << node->id_node << " -> "
                        << "boolean" << node->id_node << ";\n";
            }
            else if (node->simple_type == simpleType::char_type_simple)
            {
                outfile << "simpleType_" << node->id_node << " -> "
                        << "char" << node->id_node << ";\n";
            }
            else if (node->simple_type == simpleType::string_type_simple)
            {
                outfile << "simpleType_" << node->id_node << " -> "
                        << "string" << node->id_node << ";\n";
            }
        }
        else if (node->type == typeType::id_type)
        {
            outfile << "type_" << node->id_node << " -> " << node->id << ";\n";
        }
        else if (node->type == typeType::array_type)
        {
            if (node->array_dimension_node_list == nullptr)
            {
                for (auto it = node->array_dimension_node_list->begin(); it != node->array_dimension_node_list->end(); it++)
                {
                    outfile << "arrayType_" << node->id_node << " -> arrayDimension_" << (*it)->id_node << ";\n";
                    printArrayDimensionNode(*it);
                }
            }

            outfile << "type_" << node->id_node << " -> arrayType_" << node->array_type << ";\n";
        }
    }
}

void treePrinter::printArrayDimensionNode(arrayDimensionNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "arrayDimension_" << node->id_node << " -> literal_" << node->left_operand->id_node << ";\n";
        printLiteralNode(node->left_operand);
        outfile << "arrayDimension_" << node->id_node << " -> literal_" << node->right_operand->id_node << ";\n";
        printLiteralNode(node->right_operand);
    }
}

void treePrinter::printWithStmtNode(withStmtNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        for (auto it = node->id_list->begin(); it != node->id_list->end(); it++)
        {
            outfile << "withStmt_" << node->id_node << " -> expr_" << (*it)->id_node << ";\n";
            printExprNode(*it);
        }

        outfile << "withStmt_" << node->id_node << " -> stmt_" << node->body->id_node << ";\n";
        printStmtNode(node->body);
    }
}

void treePrinter::printForStmtNode(forStmtNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "forStmt_" << node->id_node << " -> expr_" << node->id->id_node << ";\n";
        printExprNode(node->id);
        outfile << "forStmt_" << node->id_node << " -> expr_" << node->from_expr->id_node << ";\n";
        printExprNode(node->from_expr);
        outfile << "forStmt_" << node->id_node << " -> expr_" << node->to_expr->id_node << ";\n";
        printExprNode(node->to_expr);
        outfile << "forStmt_" << node->id_node << " -> stmt_" << node->body->id_node << ";\n";
        printStmtNode(node->body);
    }
}

void treePrinter::printWhileStmtNode(whileStmtNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "whileStmt_" << node->id_node << " -> expr_" << node->condition->id_node << ";\n";
        printExprNode(node->condition);
        outfile << "whileStmt_" << node->id_node << " -> stmt_" << node->body->id_node << ";\n";
        printStmtNode(node->body);
    }
}

void treePrinter::printFunctionElementNode(functionElementNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "functionElement_" << node->id_node << " -> " << node->id << ";\n";

        for (auto it = node->param_list_node_list->begin(); it != node->param_list_node_list->end(); it++)
        {
            outfile << "functionElement_" << node->id_node << " -> paramList_" << (*it)->id_node << ";\n";
            printParamListNode(*it);
        }
    }
}

void treePrinter::printProcedureImplNode(procedureImplNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "functionImpl_" << node->id_node << " -> " << node->id << ";\n";

        if (node->parentId != nullptr)
        {
            outfile << "functionImpl_" << node->id_node << " -> parent_" << node->id_node << ";\n";
            outfile << "parent_" << node->id_node << " -> " << node->parentId << ";\n";
        }

        if (node->param_list_node_list != nullptr)
        {
            for (auto it = node->param_list_node_list->begin(); it != node->param_list_node_list->end(); it++)
            {
                outfile << "functionImpl_" << node->id_node << " -> paramList_" << (*it)->id_node << ";\n";
                printParamListNode(*it);
            }
        }

        if (node->var_decl_node_list != nullptr)
        {
            for (auto it = node->var_decl_node_list->begin(); it != node->var_decl_node_list->end(); it++)
            {
                outfile << "functionImpl_" << node->id_node << " -> varDecl_" << (*it)->id_node << ";\n";
                printVarDeclNode(*it);
            }
        }

        outfile << "functionImpl_" << node->id_node << " -> stmt_" << node->stmt_node->id_node << ";\n";
        printStmtNode(node->stmt_node);
    }
}

void treePrinter::printFunctionImplNode(functionImplNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {

        outfile << "functionImpl_" << node->id_node << " -> " << node->id << ";\n";

        if (node->parentId != nullptr)
        {
            outfile << "functionImpl_" << node->id_node << " -> parent_" << node->id_node << ";\n";
            outfile << "parent_" << node->id_node << " -> " << node->parentId << ";\n";
        }

        if (node->param_list_node_list != nullptr)
        {
            for (auto it = node->param_list_node_list->begin(); it != node->param_list_node_list->end(); it++)
            {
                outfile << "functionImpl_" << node->id_node << " -> paramList_" << (*it)->id_node << ";\n";
                printParamListNode(*it);
            }
        }

        if (node->var_decl_node_list != nullptr)
        {
            for (auto it = node->var_decl_node_list->begin(); it != node->var_decl_node_list->end(); it++)
            {
                outfile << "functionImpl_" << node->id_node << " -> varDecl_" << (*it)->id_node << ";\n";
                printVarDeclNode(*it);
            }
        }

        outfile << "functionImpl_" << node->id_node << " -> type_" << node->type->id_node << ";\n";
        printTypeNode(node->type);
        outfile << "functionImpl_" << node->id_node << " -> stmt_" << node->stmt_node->id_node << ";\n";
        printStmtNode(node->stmt_node);
    }
}

void treePrinter::printClassDeclHeaderNode(classDeclHeaderNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "classDeclHeader_" << node->id_node << " -> " << node->id << ";\n";
        outfile << "classDeclHeader_" << node->id_node << " -> parent_" << node->id_node << ";\n";
        outfile << "parent_" << node->id_node << " -> " << node->parentId << ";\n";
    }
}

void treePrinter::printClassDeclNode(classDeclNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "classDecl_" << node->id_node << " -> classDeclHeader_" << node->classDeclHeader->id_node << ";\n";
        printClassDeclHeaderNode(node->classDeclHeader);
        for (auto it = node->classElementList->begin(); it != node->classElementList->end(); it++)
        {
            outfile << "classDecl_" << node->id_node << " -> classElement_" << (*it)->id_node << ";\n";
            printClassElementNode(*it);
        }
    }
}

void treePrinter::printPropertyDeclNode(propertyDeclNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "propertyDecl_" << node->id_node << " -> " << node->id << ";\n";
        outfile << "propertyDecl_" << node->id_node << " -> type_" << node->type->id_node << ";\n";
        printTypeNode(node->type);
        outfile << "propertyDecl_" << node->id_node << " -> read_" << node->id_node << ";\n";
        outfile << "read_" << node->id_node << " -> " << node->readId << ";\n";
        outfile << "propertyDecl_" << node->id_node << " -> write_" << node->id_node << ";\n";
        outfile << "write_" << node->id_node << " -> " << node->writeId << ";\n";
    }
}

void treePrinter::printMethodFunctionDeclNode(methodFunctionDeclNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "methodFunctionDecl_" << node->id_node << " -> " << node->id << ";\n";
        for (auto it = node->param_list_node_list->begin(); it != node->param_list_node_list->end(); it++)
        {
            outfile << "methodFunctionDecl_" << node->id_node << " -> paramList_" << (*it)->id_node << ";\n";
            printParamListNode(*it);
        }
        outfile << "methodFunctionDecl_" << node->id_node << " -> type_" << node->type->id_node << ";\n";
        printTypeNode(node->type);
    }
}

void treePrinter::printMethodFunctionDeclWithModifierNode(methodFunctionDeclWithModifierNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "methodFunctionDeclWithModifier_" << node->id_node << " -> methodFunctionDecl_" << node->functionDeclNode->id_node << ";\n";
        for (auto it = node->modifier_list->begin(); it != node->modifier_list->end(); it++)
        {
            if (*it == modifier::override_modifier)
            {
                outfile << "methodFunctionDeclWithModifier_" << node->id_node << " -> override_" << node->id_node << "_" << distance(node->modifier_list->begin(), it) << ";\n";
            }
            if (*it == modifier::static_modifier)
            {
                outfile << "methodFunctionDeclWithModifier_" << node->id_node << " -> static_" << node->id_node << "_" << distance(node->modifier_list->begin(), it) << ";\n";
            }
            if (*it == modifier::overload_modifier)
            {
                outfile << "methodFunctionDeclWithModifier_" << node->id_node << " -> overload_" << node->id_node << "_" << distance(node->modifier_list->begin(), it) << ";\n";
            }
        }

        printMethodFunctionDeclNode(node->functionDeclNode);
    }
}

void treePrinter::printMethodProcedureDeclWithModifierNode(methodProcedureDeclWithModifierNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "methodProcedureDeclWithModifier_" << node->id_node << " -> functionElement_" << node->function_element->id_node << ";\n";
        for (auto it = node->modifier_list->begin(); it != node->modifier_list->end(); it++)
        {
            if (*it == modifier::override_modifier)
            {
                outfile << "methodProcedureDeclWithModifier_" << node->id_node << " -> override_" << node->id_node << "_" << distance(node->modifier_list->begin(), it) << ";\n";
            }

            if (*it == modifier::static_modifier)
            {
                outfile << "methodProcedureDeclWithModifier_" << node->id_node << " -> static_" << node->id_node << "_" << distance(node->modifier_list->begin(), it) << ";\n";
            }

            if (*it == modifier::overload_modifier)
            {
                outfile << "methodProcedureDeclWithModifier_" << node->id_node << " -> overload_" << node->id_node << "_" << distance(node->modifier_list->begin(), it) << ";\n";
            }
        }

        printFunctionElementNode(node->function_element);
    }
}

void treePrinter::printConstructorDeclNode(constructorDeclNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "constructorDecl_" << node->id_node << " -> " << node->id << ";\n";
        for (auto it = node->param_list_node_list->begin(); it != node->param_list_node_list->end(); it++)
        {
            outfile << "constructorDecl_" << node->id_node << " -> paramList_" << (*it)->id_node << ";\n";
            printParamListNode(*it);
        }
    }
}

void treePrinter::printConstructorDeclWithModifierNoNode(constructorDeclWithModifierNoNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "constructorDeclWithModifierNo_" << node->id_node << " -> constructorDecl_" << node->constructor_decl_node->id_node << ";\n";
        if (node->has_override)
        {
            outfile << "constructorDeclWithModifierNo_" << node->id_node << " -> override_" << node->id_node << ";\n";
        }

        printConstructorDeclNode(node->constructor_decl_node);
    }
}

void treePrinter::printConstructorImplNode(constructorImplNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "constructorImpl_" << node->id_node << " -> " << node->id << ";\n";
        outfile << "constructorImpl_" << node->id_node << " -> parent_" << node->id_node << ";\n";
        outfile << "parent_" << node->id_node << " -> " << node->parent_id << ";\n";
        outfile << "constructorImpl_" << node->id_node << " -> functionElement_" << node->function_element->id_node << ";\n";
        outfile << "constructorImpl_" << node->id_node << " -> stmt_" << node->stmt_node->id_node << ";\n";
        if (node->has_override)
        {
            outfile << "constructorImpl_" << node->id_node << " -> override_" << node->id_node << ";\n";
        }

        printFunctionElementNode(node->function_element);
        printStmtNode(node->stmt_node);
    }
}

void treePrinter::printDestructorDeclNode(destructorDeclNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "destructorDecl_" << node->id_node << " -> " << node->id << ";\n";
        if (node->has_override)
        {
            outfile << "destructorDecl_" << node->id_node << " -> override_" << node->id_node << ";\n";
        }
    }
}

void treePrinter::printDestructorImplNode(destructorImplNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "destructorImpl_" << node->id_node << " -> " << node->id << ";\n";
        outfile << "destructorImpl_" << node->id_node << " -> parent_" << node->id_node << ";\n";
        outfile << "parent_" << node->id_node << " -> " << node->parent_id << ";\n";
        outfile << "destructorImpl_" << node->id_node << " -> stmt_" << node->stmt_node->id_node << ";\n";
        if (node->has_override)
        {
            outfile << "destructorImpl_" << node->id_node << " -> override_" << node->id_node << ";\n";
        }

        printStmtNode(node->stmt_node);
    }
}

void treePrinter::printMethodDeclNode(methodDeclNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        if (node->method_function_decl_with_modifier_node != nullptr)
        {
            outfile << "methodDecl_" << node->id_node << " -> methodFunctionDeclWithModifier_" << node->method_function_decl_with_modifier_node->id_node << ";\n";
            printMethodFunctionDeclWithModifierNode(node->method_function_decl_with_modifier_node);
        }
        else if (node->method_procedure_decl_with_modifier_node != nullptr)
        {
            outfile << "methodDecl_" << node->id_node << " -> methodProcedureDeclWithModifier_" << node->method_procedure_decl_with_modifier_node->id_node << ";\n";
            printMethodProcedureDeclWithModifierNode(node->method_procedure_decl_with_modifier_node);
        }
    }
}

void treePrinter::printMethodFieldPropertyNode(methodFieldPropertyNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        if (node->method_decl_node != nullptr)
        {
            outfile << "methodFieldProperty_" << node->id_node << " -> methodDecl_" << node->method_decl_node->id_node << ";\n";
            printMethodDeclNode(node->method_decl_node);
        }
        else if (node->property_decl_node != nullptr)
        {
            outfile << "methodFieldProperty_" << node->id_node << " -> propertyDecl_" << node->property_decl_node->id_node << ";\n";
            printPropertyDeclNode(node->property_decl_node);
        }
        else if (node->field_decl_node != nullptr)
        {
            outfile << "methodFieldProperty_" << node->id_node << " -> fieldDecl_" << node->field_decl_node->id_node << ";\n";
            printFieldDeclNode(node->field_decl_node);
        }
        else if (node->constructor_decl_with_modifier_no_node != nullptr)
        {
            outfile << "methodFieldProperty_" << node->id_node << " -> constructorDeclWithModifierNo_" << node->constructor_decl_with_modifier_no_node->id_node << ";\n";
            printConstructorDeclWithModifierNoNode(node->constructor_decl_with_modifier_no_node);
        }
        else if (node->destructor_decl_node != nullptr)
        {
            outfile << "methodFieldProperty_" << node->id_node << " -> destructorDecl_" << node->destructor_decl_node->id_node << ";\n";
            printDestructorDeclNode(node->destructor_decl_node);
        }
    }
}

void treePrinter::printClassElementNode(classElementNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        for (auto it = node->method_field_property_node_list->begin(); it != node->method_field_property_node_list->end(); it++)
        {
            outfile << "classElement_" << node->id_node << " -> methodFieldProperty_" << (*it)->id_node << ";\n";
            printMethodFieldPropertyNode(*it);
        }

        if (
            node->access_modifier_enum == accessModifier::public_access_modifier ||
            node->access_modifier_enum == accessModifier::private_access_modifier ||
            node->access_modifier_enum == accessModifier::protected_access_modifier)
        {
            if (node->access_modifier_enum == accessModifier::public_access_modifier)
            {
                outfile << "classElement_" << node->id_node << " -> public_" << node->id_node << ";\n";
            }
            else if (node->access_modifier_enum == accessModifier::private_access_modifier)
            {
                outfile << "classElement_" << node->id_node << " -> private_" << node->id_node << ";\n";
            }
            else if (node->access_modifier_enum == accessModifier::protected_access_modifier)
            {
                outfile << "classElement_" << node->id_node << " -> protected_" << node->id_node << ";\n";
            }
        }
    }
}

void treePrinter::printSectionNode(sectionNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        if (node->type == sectionType::var_decl_sect)
        {
            for (auto it = node->var_decl_list->begin(); it != node->var_decl_list->end(); it++)
            {
                outfile << "section_" << node->id_node << " -> varDecl_" << (*it)->id_node << ";\n";
                printVarDeclNode(*it);
            }
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
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "enumDecl_" << node->id_node << " -> " << node->id << ";\n";

        for (auto it = node->param_list->begin(); it != node->param_list->end(); it++)
        {
            outfile << "enumDecl_" << node->id_node << " -> enumParam_" << (*it)->id_node << ";\n";
            printEnumParamNode(*it);
        }
    }
}

void treePrinter::printEnumParamNode(enumParamNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        outfile << "enumParam_" << node->id_node << " -> " << node->id << ";\n";

        if (node->value != nullptr)
        {
            outfile << "enumParam_" << node->id_node << " -> expr_" << node->value->id_node << ";\n";
            printExprNode(node->value);
        }
    }
}

void treePrinter::printFieldDeclNode(fieldDeclNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

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
                    outfile << "fieldDecl_" << node->id_node << " -> override_" << node->id_node << "_" << distance(node->field_modifier_list->begin(), it) << ";\n";
                }

                if (*it == modifier::static_modifier)
                {
                    outfile << "fieldDecl_" << node->id_node << " -> static_" << node->id_node << "_" << distance(node->field_modifier_list->begin(), it) << ";\n";
                }

                if (*it == modifier::overload_modifier)
                {
                    outfile << "fieldDecl_" << node->id_node << " -> overload_" << node->id_node << "_" << distance(node->field_modifier_list->begin(), it) << ";\n";
                }
            }
    }
}

void treePrinter::printImplementationElementNode(implementationElementNode *node)
{
    printf("Node name: %s\n", typeid(node).name());

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
    printf("Node name: %s\n", typeid(node).name());

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
    printf("Node name: %s\n", typeid(node).name());

    if (node != nullptr)
    {
        if (node->id != nullptr)
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
