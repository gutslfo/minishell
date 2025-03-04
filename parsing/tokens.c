#include "../minishell.h"

void   create_token(t_token *token, int token_count)
{
    int i;

    i = 0;
    while (i <= token_count)
    {
        token = malloc(sizeof(token));
        if (!token)
            return ;
        token->type = 0;
        token->content = NULL;
        i++;
    }
}