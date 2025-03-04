#include "../minishell.h"


void    handle_input(char *command)
{
	int i;
	int	len;
	int	token;

	i = 0;
	len = 0;
	token = 0;
	while(is_space(command[i]))
		i++;
	while(is_command_char(command[i]))
	{
		i++;
		len++;
	}
	ft_srldup

}