#include "../minishell.h"

int is_space(char c)
{
	if ((c >= 9 && c <= 12) || (c == 32))
		return (1);
	return (0);
}

int	is_quote(char c)
{
	if (c == 39 || c == 34)
		return (1);
	return (0);
}

int	is_redirection(char c)
{
	if ((c == '>')|| (c == '<'))
		return (1);
	return (0);
}

int	is_operator(char c)
{
	if (c == '&' || c == '|')
		return (1);
	return (0);
}

int	is_command_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c<= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else if (c == '_' || c == '-' || c == '.')
		return (1);
	return (0);
}
