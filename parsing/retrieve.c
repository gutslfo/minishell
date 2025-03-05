#include "../minishell.h"


void    handle_input(char *command)
{
	int	i;
	lexer_state current_state;
	t_token		**token_list;

	i = 0;
	token_list = create_token_list(token_list);
	while (*command)
	{
		if (is_command_char(*command))
			command = tokenize(command, token_list, WORD);
		else if (is_redirection(*command))
			command = tokenize(command, token_list, REDIR);
		else if (is_operator(*command))
			command = handle_operator(command, &current_state, token_list);
		else if (is_quote(*command))
			command = handle_quote(command, &current_state, token_list);
		//Grouping
		//Special caracters	
	}
}


char	*handle_word(char	*word, t_token **token_list)
{
	int		len;
	t_token	*new_token;

	if (!word || !token_list)
		return (NULL);
	new_token = create_token(new_token);
	if (!new_token)
		return(NULL);
	new_token->type = WORD;
	len = find_token_len(word, WORD);
	new_token->content = populate_token(word, WORD, len);
}


char	*tokenize(char	*input, t_token **token_list, token_type type)
{
	int		len;
	t_token	*new_token;

	if (!input|| !token_list)
		return (NULL);
	new_token = create_token(new_token);
	if (!new_token)
		return(NULL);
	new_token->type = type;
	len = find_token_len(i nput, type);
	new_token->content = populate_token(input, type, len);
}
