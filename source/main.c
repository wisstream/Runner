#include <stdio.h>
#include "window.h"
#include "init.h"
#include "input.h"
#include "draw.h"
#include "player.h"

int main()
{
    Win *app = malloc(sizeof(Win));

    if (initSDL(app) < 0)
    {
        return -1;
    }
    Entity *player = initPlayer(100, 100, 50, 50, app);
    

    SDL_SetRenderDrawColor(app->renderer, 96, 128, 255, 255);
    while (input_handler(player) == 0)
    
    {
        prepareCanvas(app);
        drawEntity(app, player);
        presentCanvas(app);
        SDL_Delay(17);
    }
    
    return 0;
}