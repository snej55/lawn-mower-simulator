//
// Created by jenskromdijk on 14/03/25.
//

#ifndef APP_H
#define APP_H

#include <iostream>

#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>

class App {
public:
    App() {

    }

private:
    SDL_Window* window {nullptr};
};

#endif //APP_H
