#include "../minishell.h"

int count_words(char *str, char delimiter)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == delimiter)
			count++;
		i++;
	}
	if (str[i] != delimiter)
		count++;
	return (count);
}
