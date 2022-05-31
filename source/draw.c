#include "draw.h"
#include "window.h"

void prepareCanvas(Win *app)
{
    SDL_SetRenderDrawColor(app->renderer, 0, 0, 0, 0);
    SDL_RenderClear(app->renderer);
}

void presentCanvas(Win *app)
{
    SDL_RenderPresent(app->renderer);
}

SDL_Texture *loadTexture(Win *app, char *img_path)
{
    SDL_Texture *texture;
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION,SDL_LOG_PRIORITY_INFO, "Loading: %s", img_path);
    texture = IMG_LoadTexture(app->renderer, img_path);
    if (texture == NULL){
        printf("failed to load texture %s\n", IMG_GetError());
    }
    return texture;
}

int check_collision( SDL_Rect *A, SDL_Rect *B)
{
    //Les cotes des rectangles
    int leftA, leftB;
    int rightA, rightB;
    int topA, topB;
    int bottomA, bottomB;

    //Calcul les cotes du rectangle A
    leftA = A->x;
    rightA = A->x + A->w;
    topA = A->y;
    bottomA = A->y + A->h;

    //Calcul les cotes du rectangle B
    leftB = B->x;
    rightB = B->x + B->w;
    topB = B->y;
    bottomB = B->y + B->h;
    //Tests de collision
    if( bottomA <= topB )
    {
        return 0;
    }

    if( topA >= bottomB )
    {
        return 0;
    }

    if( rightA <= leftB )
    {
        return 0;
    }

    if( leftA >= rightB )
    {
        return 0;
    }

    //Si conditions collision detectee
    return 1;
}

int drawEntity(Win *app, Entity *entity, Entity *enemy, Entity *obstacle)
{
    SDL_Rect destination = {entity->pos_x, entity->pos_y, entity->width, entity->height};
    SDL_Rect minion1 = {enemy->pos_x, enemy->pos_y, enemy->width, enemy->height};
    SDL_Rect minion2 = {obstacle->pos_x, obstacle->pos_y, obstacle->width, obstacle->height};
    SDL_RenderCopy(app->renderer, entity->texture, NULL, &destination);
    SDL_RenderCopy(app->renderer, enemy->texture, NULL, &minion1);
    SDL_RenderCopy(app->renderer, obstacle->texture, NULL, &minion2);

    if (check_collision(&destination, &minion1)) {
        printf ("C'est perdu !!");
        return -1;
    }
    if (check_collision(&destination, &minion2)){
        printf ("c'est perdu !!");
        return -1;
    }
    return 0;
}