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
            switch (e.type) {
                case SDL_QUIT:
                    quit = true;
                    break;
                case SDL_KEYDOWN:
                    switch (e.key.keysym.sym) {
                        case SDLK_ESCAPE:
                            quit = true;
                            break;
                    }
                default:
                    break;
            }
        }
    }
    // cleanup.c
    teardown();
}

