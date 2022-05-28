#include "input.h"
#include <stdio.h>

int input_handler(Entity *entity) {
    SDL_Event event;

    SDL_PollEvent(&event);

    switch (event.type)
    {
    case SDL_QUIT:
        return -1;
    case SDL_KEYDOWN :
        switch (event.key.keysym.sym)
        {
       
        case SDLK_UP :
            int test = 1;
            break;
        while (test == 1)
        {
            entity->pos_y -= 5;
        }
        
        case SDLK_DOWN :
            entity->pos_y += 5;
            break;
        }
        break;
  

    default:
        break;
    }
    return 0;
}