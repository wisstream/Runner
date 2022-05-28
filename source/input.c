#include "input.h"
#include <stdio.h>

int input_handler() {
    SDL_Event event;

    SDL_PollEvent(&event);

    switch (event.type)
    {
    case SDL_QUIT:
        return -1;
    case SDL_KEYDOWN :
        printf("key is down\n"); 
        break;
    case SDL_KEYUP :
        printf("key is up\n");
        break;

    default:
        break;
    }
    return 0;
}