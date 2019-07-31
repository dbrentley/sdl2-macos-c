//
//  prototypes.h
//  SDLtut
//
//  Created by Brent Douglas on 7/30/19.
//  Copyright © 2019 Brent Douglas. All rights reserved.
//

#ifndef prototypes_h
#define prototypes_h

// main window and renderer
extern SDL_Window *window;
extern SDL_Renderer *renderer;

// cleanup to exit
void teardown(void);

// keyboard events
void waitKeyboardEvents(void);

#endif /* prototypes_h */
