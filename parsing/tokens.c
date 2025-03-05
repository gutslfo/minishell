#include "../minishell.h"

//Token allocation and initialisation
t_token	*create_token(t_token *new_token)
{
	t_token	*new_token;

	new_token = malloc(sizeof(t_token));
	if (!new_token)
		return (NULL);
	new_token->type = 0;
	new_token->content = NULL;
	new_token->next = NULL;
	return (new_token);
}

char	*populate_token(char *command, token_type type, int len)// A METTRE DANS TOKENS
{
	char	*content;

	if (!command)
		return (NULL);	
	content = malloc(sizeof(char) * len); // A VOIR SI ON FAIT AVEC UNE FONCTION A PART 
	if (!content)
		return (NULL);
	switch (type)
	{
		case WORD:
		content = copy_token(command, content, WORD);
		//case
		case REDIR:
		content = copy_token(command, content, REDIR)
	}
	return (content);
}
