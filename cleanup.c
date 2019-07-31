//
//  cleanup.c
//  SDLtut
//
//  Created by Brent Douglas on 7/30/19.
//  Copyright © 2019 Brent Douglas. All rights reserved.
//

#include <SDL2/SDL.h>
#include "includes/prototypes.h"

void teardown(void) {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}
