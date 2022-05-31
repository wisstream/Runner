#include <stdio.h>
#include "obstacle.h"

    Entity* initObstacle(int x, int y, int w, int h, Win* app){
    Entity *obstacle = malloc(sizeof(Entity));

    obstacle->pos_x = x;
    obstacle->pos_y = y;
    obstacle->width = w;
    obstacle->height = h;
    obstacle->texture = loadTexture(app, "ressource/obstacle.png");

    return obstacle;
}