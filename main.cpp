#include <iostream>
#include <string>

extern int l_main(FILE* file);
extern std::string *file_name;

int main(int argc, char* argv[]) {
    FILE *file = nullptr;
    if (argc > 1) {
        file = fopen(argv[1], "r");
    }

    if (file == nullptr) {
        printf("File opening error");
        return 1;
    }

    file_name = new std::string(argv[1]);
    int lexer_result = l_main(file);

    if (lexer_result)
        return lexer_result;
}