#ifndef PARSING_H
#define PARSING_H

typedef struct s_token{
	int		type;
	char	*content;
}

enum e_token_type {
	
	//Basic elements 
	WORD,			//Commands and arguments
	ASSIGNMENT,		// Variable assignments 

	//Quotes
	SINGLE_QUOTE,	// 'string'
	DOUBLE_QUOTE,	// "string"

	//Redirections
	REDIR_IN, 		// <
	REDIR_OUT,		// >
	REDIR_APPEND,	// >>
	HEREDOC,		// <<

	//Operators
	PIPE,			// |
	AND,			// &&
	OR,				// ||
	SEMICOLON,		// ;

	//Grouping
	PAREN_OPEN,		// (
	PAREN_CLOSE,	// )

	//Special caracters
	ENV_VAR,		//$VAR
	EXIT_STATUS,	//$?
	ESCAPE,			// \ (backslash)
	COMMENT,		// #
	T_NEWLINE,		// End of command
	T_EOF,			//End of input

	//Error handling
	UNKNOWN

};

int count_words(char *str, char delimiter);

#endif