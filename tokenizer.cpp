#include "tokenizer.h"
#include <cctype>
#include <iostream>

Lexer::Lexer(const std::string& input) : text(input), pos(0) {
    current_char = text[pos];
}

void Lexer::advance() {
    pos++;
    current_char = (pos < text.length()) ? text[pos] : '\0';
}

void Lexer::skip_whitespace() {
    while (current_char != '\0' && isspace(current_char))
        advance();
}

std::string Lexer::integer() {
    std::string result;
    while (current_char != '\0' && isdigit(current_char)) {
        result += current_char;
        advance();
    }
    return result;
}

Token Lexer::get_next_token() {
    while (current_char != '\0') {

        if (isspace(current_char)) {
            skip_whitespace();
            continue;
        }

        if (isdigit(current_char))
            return {INTEGER, integer()};

        switch (current_char) {
            case '+': advance(); return {PLUS, "+"};
            case '-': advance(); return {MINUS, "-"};
            case '*': advance(); return {MUL, "*"};
            case '/': advance(); return {DIV, "/"};
            case '(': advance(); return {LPAREN, "("};
            case ')': advance(); return {RPAREN, ")"};
            default:
                std::cout << "Invalid character: " << current_char << std::endl;
                exit(1);
        }
    }

    return {END, ""};
}
