#include "so_long.h"

int main(int ac, char **av)
{
    t_app app; //12 //stack
    //init the varibales inside the struct

    validate_extention(&app, ac, av);
    printf("file name: %s\n", app.file_name);
    // validate_map(&app);
    return(0);
}
