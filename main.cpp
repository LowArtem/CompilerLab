#include <iostream>
#include <string>

extern int l_main(FILE* file);

int main(int argc, char* argv[]) {
    FILE *file = nullptr;
    if (argc > 1) {
        file = fopen(argv[1], "r");
    }

    if (file == nullptr) {
        printf("File opening error");
        return 1;
    }

    int lexer_result = l_main(file);

    if (lexer_result)
        return lexer_result;
}