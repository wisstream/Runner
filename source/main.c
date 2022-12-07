#include <stdio.h>
#include "window.h"
#include "init.h"
#include "input.h"
#include "draw.h"
#include "player.h"
#include "enemy.h"
#include "obstacle.h"


int main()
{
    Win *app = malloc(sizeof(Win));

    if (initSDL(app) < 0)
    {
        return -1;
    }
    Entity *player = initPlayer(100, 100, 50, 50, app);
    Entity *enemy = initEnemy(1200, 100, 150, 100, app);
    Entity *obstacle = initObstacle(1200, 200, 300, 100, app);

    SDL_SetRenderDrawColor(app->renderer, 96, 128, 255, 255);
    
    while (input_handler(player) == 0)
    
    {
        prepareCanvas(app);
        enemy->pos_x -= 10;
        obstacle->pos_x -= 6;
        if (drawEntity(app, player, enemy, obstacle) == -1)
        {
            return 0;
        }
        
        presentCanvas(app);
        SDL_Delay(17);
    }
    
    return 0;
}