//
//  keyboard.c
//  SDLtut
//
//  Created by Brent Douglas on 7/30/19.
//  Copyright © 2019 Brent Douglas. All rights reserved.
//

#include <SDL2/SDL.h>
#include <stdbool.h>

#include "includes/prototypes.h"

void waitKeyboardEvents(void) {
    SDL_Event e;
    bool quit = false;
    while (!quit) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                quit = true; 
            }
        }
    }
    // cleanup.c
    teardown();
}

