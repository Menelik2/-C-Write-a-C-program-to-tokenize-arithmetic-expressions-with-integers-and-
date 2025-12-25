#include <iostream>
#include "tokenizer.h"

int main() {
    std::string input;
    std::cout << "Enter arithmetic expression: ";
    std::getline(std::cin, input);

    Lexer lexer(input);
    Token token;

    std::cout << "\nTokens:\n";
    do {
        token = lexer.get_next_token();
        std::cout << "Token(" << token.type << ", " << token.value << ")\n";
    } while (token.type != END);

    return 0;
}
