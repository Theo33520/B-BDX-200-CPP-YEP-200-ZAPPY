//
// Created by Fages  on 05/02/2025.
//

#include "../includes/chess.h"


unsigned int get_pos_port(char **av)
{
    unsigned int port = 0;
    for (int i = 0; av[i] != NULL; i++) {
        if (strcmp(av[i], "-p") == 0) {
            port = atoi(av[i + 1]);
            break;
        }
    }
    return port;
}

char *get_pos_name_team(char **av)
{
    char *name_team = NULL;
    for (int i = 0; av[i] != NULL; i++) {
        if (strcmp(av[i], "-n") == 0) {
            name_team = av[i + 1];
            break;
        }
    }
    return name_team;
}

char *get_pos_time(char **av)
{
    char *time = NULL;
    for (int i = 0; av[i] != NULL; i++) {
        if (strcmp(av[i], "-t") == 0) {
            time = av[i + 1];
            break;
        }
    }
    return time;
}