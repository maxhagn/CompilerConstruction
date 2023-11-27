#ifndef __TOKEN_H__
#define __TOKEN_H__

// TODO: Add delimiter and braces to tokens for better flexibility
enum Token {

    // End of file
    tok_eof         = -1,

    // Instructions
    tok_function    = -10,
    tok_if          = -11,
    tok_else        = -12,
    tok_if_else     = -13,
    tok_while       = -14,
    tok_for         = -15,
    tok_return      = -16,

    // Identifier Names
    tok_identifier  = -30,
    tok_number      = -31,

};

#endif
