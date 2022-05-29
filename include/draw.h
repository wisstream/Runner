#ifndef DRAW
#define DRAW

#include "draw.h"
#include "window.h"
#include <SDL2/SDL_image.h>

typedef struct Entity
{   
    int         pos_x;
    int         pos_y;
    int         width;
    int         height;
    SDL_Texture *texture;
    /* variables utiles pour l'animation*/
    int         frameNumber;
    int         frameTimer;
    int         etat;
    int         direction;
    /* variables utiles pour la gestion des collisions*/
    int         onGround;
    int         timerMort;
    float       dirX;
    float       dirY;
} Entity;

void prepareCanvas(Win *app);
void presentCanvas(Win *app);
SDL_Texture *loadTexture(Win *app, char *img_path);
void drawEntity(Win *app,Entity *entity);


#endif