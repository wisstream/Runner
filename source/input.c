#include "input.h"
#include <stdio.h>

int input_handler(Entity *entity, Entity *enemy, Entity *obstacle) {

    SDL_Event event;

    while (SDL_PollEvent(&event)) {
    
    switch (event.type)
    {
    case SDL_QUIT:
        return -1;
    case SDL_KEYDOWN :
        
        switch (event.key.keysym.sym)
        {
        case SDLK_UP :
            entity->pos_y -= 10; 
            break;
        case SDLK_DOWN :
            entity->pos_y += 10;
            break;
        case SDLK_LEFT	:
            entity->pos_x -= 10;
            break;
        case SDLK_RIGHT :
            entity->pos_x += 10;
            break;
        default:
            break;
        }

        break;
    case SDL_KEYUP :
        
        break;
    default:
        break;
    }
    

    if (entity->pos_x <= 0) entity->pos_x = 0;
    if (entity->pos_y <= 0) entity->pos_y = 0;
    if (entity->pos_x >= WINDOW_WIDTH - entity->width) entity->pos_x = WINDOW_WIDTH - entity->width;
    if (entity->pos_y >= WINDOW_HEIGHT - entity->height) entity->pos_y = WINDOW_HEIGHT - entity->height;

    SDL_Delay(1000/60);
    
    }
    
    return 0;
}