//
// Created by Fages  on 05/02/2025.
//

#include "../includes/chess.h"




int main(int ac, char **av)
{
    param_t *param = init_param(ac, av);
    if (param == NULL || ac != 7)
        return 84;
    create_server();
    free(param);
}