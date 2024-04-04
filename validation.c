#include "so_long.h"

// void    validate_map(t_app *app)
// {
//     // printf("file name is: %s\n", app->file_name);
//     app->fd = open(app->file_name, O_RDONLY);
//     if (app->fd == -1)
// }

void    validate_extention(t_app *app, int ac, char **av)
{
    char *point;

    if(ac < 2)
        error(app ,"Invalid number of arguments!");
    point = ft_strrchr(av[1], '.');
    if (!point || ft_strncmp(point, ".ber", 4) != 0)
        error(app, "invalide extention!");
    app->file_name = av[1];
}