#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft/libft.h"

typedef struct t_app
{
    int counter;
    char *file_name;
    int fd;
}   t_app;

/*validation*/
void    validate_extention(t_app *app, int ac, char **av);
// void    validate_map(t_app *app);

/*error*/
void    error(t_app *app, char *msg);

#endif