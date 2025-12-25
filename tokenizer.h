
---

## 📄 `tokenizer.h`

```cpp
#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <string>

enum TokenType {
    INTEGER,
    PLUS,
    MINUS,
    MUL,
    DIV,
    LPAREN,
    RPAREN,
    END
};

struct Token {
    TokenType type;
    std::string value;
};

class Lexer {
private:
    std::string text;
    int pos;
    char current_char;

    void advance();
    void skip_whitespace();
    std::string integer();

public:
    Lexer(const std::string& input);
    Token get_next_token();
};

#endif
