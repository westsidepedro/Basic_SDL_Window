//============================================================================
// Name        : Basic_SDL_Window.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
using namespace std;

int main(int argc, char *argv[])
    {

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
	cout << "SDL init failed." << endl;
	return 1;
	}
    //SDL object
    SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
	    SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    if (window == NULL) //if window doesn't load, run the quit function
	{
	SDL_Quit();
	return 2; // return a number so you can look at where things went wrong in error codes/0 if runs good
	}

    bool quit = false;

    SDL_Event event;

    while (!quit)	//game loop
	{
	//update particles
	//draw particles
	//check for messages/events

	while (SDL_PollEvent(&event))
	    {
	    if (event.type == SDL_QUIT)
		{
		quit = true;
		}
	    }
	}

    SDL_DestroyWindow(window); //kills the anything to do with the window

    SDL_Quit(); //quit SDL stuff

    return 0; //return 0 b/c all ran well
    }
