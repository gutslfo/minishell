#include "../minishell.h"

int find_token_len(char *content, token_type type)
{
	int	i;

	i = 0;
	switch (type)
	{
		case WORD:
		while (is_command_char(content[i]))
			i++;
	}
	return (i);
}

int	find_command_len(char *word)
{
	int	len;

	len = 0;
	while (is_command_char(*word))
		len++;
	return (len);
}

