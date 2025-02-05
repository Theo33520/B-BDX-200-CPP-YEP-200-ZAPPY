//
// Created by Fages  on 05/02/2025.
//

#ifndef B_BDX_200_CPP_YEP_200_ZAPPY_CHESS_H
#define B_BDX_200_CPP_YEP_200_ZAPPY_CHESS_H

#define HEIGHT 8
#define WIDTH 8

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

typedef struct param_s {
    unsigned int port;
    char *name_team;
    char *time;
} param_t;


param_t *init_param(int ac, char **av);
void free_param(param_t *param);

char *get_pos_time(char **av);
char *get_pos_name_team(char **av);
unsigned int get_pos_port(char **av);

int create_server();


#endif //B_BDX_200_CPP_YEP_200_ZAPPY_CHESS_H
