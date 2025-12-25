# Arithmetic Expression Tokenizer (C++)

This project implements a simple **lexical analyzer (tokenizer)** for arithmetic expressions.

## Features
- Integer numbers (multi-digit)
- Operators: +  -  *  /
- Parentheses: ( )
- Ignores whitespace
- Suitable for Compiler Design (Lexical Analysis)

## Token Types
- INTEGER
- PLUS, MINUS, MUL, DIV
- LPAREN, RPAREN
- END

## Build & Run

```bash
g++ main.cpp tokenizer.cpp -o tokenizer
./tokenizer
