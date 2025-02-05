//
// Created by Fages  on 05/02/2025.
//


#include "../includes/chess.h"

param_t *init_param(int ac, char **av)
{
    param_t *param = malloc(sizeof(param_t));
    if (param == NULL)
        return NULL;
    param->port = get_pos_port(av);
    param->name_team = get_pos_name_team(av);
    param->time = get_pos_time(av);
    return param;
}
