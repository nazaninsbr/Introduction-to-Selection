#include "SDL.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window *window;
	window = SDL_CreateWindow("Hello",
								SDL_WINDOWPOS_UNDEFINED,
								SDL_WINDOWPOS_UNDEFINED,
								400,//window width 
								200, //window height
								SDL_WINDOW_RESIZABLE);

	if (window==NULL){
		cout<<"there was an error";
	}
	else{
		cout<<"working";
	}

	SDL_Delay(5000);
	SDL_DestroyWindow(window);

	SDL_Quit();
	return 0;
}