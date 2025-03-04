#include "../minishell.h"

int main(void)
{
	char    *command;

	while (1)
	{
		command = readline("Minishell > ");
		if (command)
			add_history(command);
		else
			break;
		//execute_command(command);
	}
}