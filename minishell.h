# ifndef MINISHELL_H
# define MINISHELL_H

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>

//Local header files
#include "parsing/parsing.h"
#include "tests/minitest.h"

//Token structure
typedef struct s_token{
	token_type	type;
	char		*content;
	t_token		*next;
	t_token		*prev;
}	t_token;

//Input typology
typedef enum {
	
	//Basic elements 
	WORD,			// Commands and arguments
	ASSIGNMENT,		// Variable assignments 

	//Quotes
	SINGLE_QUOTE,	// 'string'
	DOUBLE_QUOTE,	// "string"

	//Redirections
	REDIR,
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
	ENV_VAR,		// $VAR
	EXIT_STATUS,	// $?
	ESCAPE,			// \ (backslash)
	COMMENT,		// #
	T_NEWLINE,		// End of command
	T_EOF,			// End of input

	//Error handling
	UNKNOWN 
}	token_type;

#endif 