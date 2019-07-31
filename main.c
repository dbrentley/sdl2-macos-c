//
//  main.c
//  SDLtut
//
//  Created by Brent Douglas on 7/30/19.
//  Copyright © 2019 Brent Douglas. All rights reserved.
//

#include <SDL2/SDL.h>
#include <stdio.h>

#include "includes/prototypes.h"
#include "includes/models.h"

#define SCREEN_WIDTH  800
#define SCREEN_HEIGHT 600

SDL_Window *window;
SDL_Renderer *renderer;

int main(int argc, char * argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize.\n%s\n", SDL_GetError());
        return -1;
    }
    printf("SDL initialized.\n");
    window = SDL_CreateWindow("SDLtut",
                              SDL_WINDOWPOS_CENTERED,
                              SDL_WINDOWPOS_CENTERED,
                              SCREEN_WIDTH,
                              SCREEN_HEIGHT,
                              SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created.\n%s\n", SDL_GetError());
        return -1;
    }
    printf("Window created.\n");
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created.\n%s\n", SDL_GetError());
        return -1;
    }
    
    // clear screen
    SDL_RenderClear(renderer);

    // set drawing color to blue
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    SDL_Rect rect = { 220, 140, 200, 200 };
    SDL_RenderFillRect(renderer, &rect);
    
    // done drawing, "present" the screen we've drawn
    SDL_RenderPresent(renderer);
    
    waitKeyboardEvents();
    return 0;
}
