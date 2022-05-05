#include <iostream>
#include <cstdio>
#include <SDL2/SDL.h>

const int WIDTH = 640;
const int HEIGHT = 480;

int main( int argc, char* args[] ) {
    SDL_Window* window = nullptr;
    SDL_Surface* screenSurface = nullptr;
    if( SDL_Init( SDL_INIT_EVERYTHING ) < 0 )
        printf( "SDL Could not initialize! Error: %s\n", SDL_GetError() );
    else {
        window = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT,
                                   SDL_WINDOW_SHOWN );
        if( window == nullptr )
            printf( "Window could not be created! Error: %s\n", SDL_GetError() );
        else {
            screenSurface = SDL_GetWindowSurface( window );
            SDL_FillRect( screenSurface, nullptr, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
            SDL_UpdateWindowSurface( window );
            SDL_Delay( 2000 );
        }
        SDL_DestroyWindow( window );
        SDL_Quit();
    }
    return 0;
}
