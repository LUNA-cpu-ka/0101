#include "so_long.h"

void    error(t_app *app, char *msg)
{
    (void)app;
    write(2, msg, ft_strlen(msg));
    exit (1);
}