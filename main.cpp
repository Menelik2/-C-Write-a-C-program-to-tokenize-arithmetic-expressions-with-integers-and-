
#include <iostream>
#include <string>
#include "tokenizer.h"

using namespace std;

int main() {
    string input;
    cout << "Enter arithmetic expression: ";
    getline(cin, input);

    Lexer lexer(input);
    Token token;

    cout << "\nTokens:\n";
    do {
        token = lexer.get_next_token();
        cout << "Token(" << token.type << ", " << token.value << ")\n";
    } while (token.type != END);

    return 0;
}
