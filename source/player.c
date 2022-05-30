#include <stdio.h>
#include "window.h"
#include "init.h"
#include "input.h"
#include "draw.h"
#include "player.h"

Entity* initPlayer(int x, int y, int w, int h, Win* app){
    Entity *player = malloc(sizeof(Entity));

    player->pos_x = x;
    player->pos_y = y;
    player->width = w;
    player->height = h;
    player->texture = loadTexture(app, "ressource/player.png");
    
    return player;
}

