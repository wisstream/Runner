#include "input.h"

int input_handler() {
    SDL_Event event;

    SDL_PollEvent(&event);

    switch (event.type)
    {
    case SDL_QUIT:
        return -1;
        break;

    default:
        break;
    }
    return 0;
}