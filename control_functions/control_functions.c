#include "libft.h"

void    err_and_exit(char *str)
{
    ft_putendl_fd(str, 2);
    exit(1);
}