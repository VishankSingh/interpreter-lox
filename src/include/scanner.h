#ifndef clox_scanner_h
#define clox_scanner_h

typedef enum TOKEN_TYPE
{
    TOKEN_LEFT_PAREN, 
    TOKEN_RIGHT_PAREN,
    TOKEN_LEFT_BRACE,
    TOKEN_RIGHT_BRACE,
    TOKEN_COMMA,
    TOKEN_DOT,
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_STAR,
    TOKEN_SLASH,
    TOKEN_SEMICOLON,

    TOKEN_BANG,
    TOKEN_BANG_EQUAL,
    TOKEN_EQUAL,
    TOKEN_EQUAL_EQUAL,
    TOKEN_GREATER,
    TOKEN_GREATER_EQUAL,
    TOKEN_LESS,
    TOKEN_LESS_EQUAL,

    TOKEN_IDENTIFIER,
    TOKEN_STRING,
    TOKEN_NUMBER,

    TOKEN_VAR,
    TOKEN_AND,
    TOKEN_OR,
    TOKEN_IF,
    TOKEN_ELSE,
    TOKEN_WHILE,
    TOKEN_FOR,
    TOKEN_TRUE,
    TOKEN_FALSE,
    TOKEN_NIL,
    TOKEN_THIS,
    TOKEN_CLASS,
    TOKEN_FUN,
    TOKEN_PRINT,
    TOKEN_SUPER,
    TOKEN_RETURN,

    TOKEN_ERROR,

    TOKEN_EOF
} TokenType;


typedef struct TOKEN_STRUCT 
{
    TokenType type;
    const char* start;
    int length;
    int line;
} Token;


void initScanner(const char* source);

Token scanToken();

#endif
