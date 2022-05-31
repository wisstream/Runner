#include <stdio.h>
#include "enemy.h"

Entity* initEnemy(int x, int y, int w, int h, Win* app){
    Entity *enemy = malloc(sizeof(Entity));

    enemy->pos_x = x;
    enemy->pos_y = y;
    enemy->width = w;
    enemy->height = h;
    enemy->texture = loadTexture(app, "ressource/enemy.png");

    return enemy;
}

void drawEnemy(Win *app, Entity *enemy){
    
    SDL_Rect minion1 = {enemy->pos_x, enemy->pos_y, enemy->width, enemy->height};
    SDL_RenderCopy(app->renderer, enemy->texture, NULL, &minion1);
}