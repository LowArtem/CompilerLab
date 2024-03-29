#include <iostream>
#include <string>
#include "classes/startSymbolNode.h"
#include "tree/treePrinter.h"

extern int l_main(FILE* file);
extern startSymbolNode* root;

int main(int argc, char* argv[]) {
    FILE *file = nullptr;
    if (argc > 1) {
        file = fopen(argv[1], "r");
    } else {
        file = fopen("../test2.pas", "r");
    }

    if (file == nullptr) {
        printf("File opening error");
        return 1;
    }

    int lexer_result = l_main(file);

    if (lexer_result)
        return lexer_result;

    treePrinter printer = treePrinter();
    printer.printTree(root);
}