/*This source code copyrighted by Lazy Foo' Productions 2004-2024
and may not be redistributed without written permission.*/

//Using SDL, SDL_image, standard IO, and strings
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <string>
#include <unistd.h>


//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

enum KeyPressSurfaces
{
        KEY_PRESS_SURFACE_DEFAULT,
        KEY_PRESS_SURFACE_UP,
        KEY_PRESS_SURFACE_DOWN,
        KEY_PRESS_SURFACE_LEFT,
        KEY_PRESS_SURFACE_RIGHT,
        KEY_PRESS_SURFACE_TOTAL
};


//Current displayed image
SDL_Surface* gCurrentSurface = NULL;

//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;

//The images that correspond to a keypress
SDL_Surface* gKeyPressSurfaces[ KEY_PRESS_SURFACE_TOTAL ];


//Starts up SDL and creates window
bool init();

//Loads media
bool loadMedia();

//Loads individual image
SDL_Surface* loadSurface( int path );

//Frees media and shuts down SDL
void close();

//Loads individual image as texture
SDL_Texture* loadTexture( std::string path );

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The window renderer
SDL_Renderer* gRenderer = NULL;

//Current displayed texture
SDL_Texture* gTexture = NULL;
SDL_Texture* gTexture2 = NULL;

SDL_Rect topLeftViewport;

bool init()
{
	//Initialization flag
	bool success = true;

	//Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		//Set texture filtering to linear
		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
		{
			printf( "Warning: Linear texture filtering not enabled!" );
		}

		//Create window
		gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( gWindow == NULL )
		{
			printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			//Create renderer for window
			gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
			if( gRenderer == NULL )
			{
				printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
				success = false;
			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if( !( IMG_Init( imgFlags ) & imgFlags ) )
				{
					printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
					success = false;
				}
			}
		}
	}
	
	   //Load default surface
        gKeyPressSurfaces[ KEY_PRESS_SURFACE_DEFAULT ] = loadSurface( KEY_PRESS_SURFACE_DEFAULT );
        if( gKeyPressSurfaces[ KEY_PRESS_SURFACE_DEFAULT ] == NULL )
        {
                printf( "Failed to load default image!\n" );
                //success = false;
        }

        //Load up surface
        gKeyPressSurfaces[ KEY_PRESS_SURFACE_UP ] = loadSurface( KEY_PRESS_SURFACE_UP );
        if( gKeyPressSurfaces[ KEY_PRESS_SURFACE_UP ] == NULL )
        {
                printf( "Failed to load up image!\n" );
                //success = false;
        }

        //Load down surface
        gKeyPressSurfaces[ KEY_PRESS_SURFACE_DOWN ] = loadSurface( KEY_PRESS_SURFACE_DOWN );
        if( gKeyPressSurfaces[ KEY_PRESS_SURFACE_DOWN ] == NULL )
        {
                printf( "Failed to load down image!\n" );
                //success = false;
        }

        //Load left surface
        gKeyPressSurfaces[ KEY_PRESS_SURFACE_LEFT ] = loadSurface( KEY_PRESS_SURFACE_LEFT );
        if( gKeyPressSurfaces[ KEY_PRESS_SURFACE_LEFT ] == NULL )
        {
                printf( "Failed to load left image!\n" );
                //success = false;
        }

        //Load right surface
        gKeyPressSurfaces[ KEY_PRESS_SURFACE_RIGHT ] = loadSurface( KEY_PRESS_SURFACE_RIGHT );
        if( gKeyPressSurfaces[ KEY_PRESS_SURFACE_RIGHT ] == NULL )
        {
                printf( "Failed to load right image!\n" );
                //success = false;
        }





                                topLeftViewport.x = 0;
                                topLeftViewport.y = 0;
                                topLeftViewport.w = 30;
                                topLeftViewport.h = 60;









	return success;
}

bool loadMedia()
{
	//Loading success flag
	bool success = true;

	//Load texture
	gTexture = loadTexture("viewport.png" );
	gTexture2 = loadTexture("viewport2.png");
	if( gTexture == NULL )
	{
		printf( "Failed to load texture image!\n" );
		success = false;
	}

	//Nothing to load
	return success;
}

SDL_Surface* loadSurface( int path )
{
        //Load image at specified path
        SDL_Surface* loadedSurface = NULL;
        switch (path){
		case KEY_PRESS_SURFACE_DEFAULT:
		break;
                case KEY_PRESS_SURFACE_UP:
		topLeftViewport.x=+10;
		break;
                case KEY_PRESS_SURFACE_DOWN:
                printf("twt");
		topLeftViewport.x=-10;
		break;
                case KEY_PRESS_SURFACE_LEFT:
                topLeftViewport.y=+10;
		break;
                case KEY_PRESS_SURFACE_RIGHT:
                topLeftViewport.y=-10;
		break;




	}



	//if( loadedSurface == NULL )
        //{
        //        printf( "Unable to load image %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
        //}

        return loadedSurface;
}






void close()
{
	//Free loaded image
	SDL_DestroyTexture( gTexture );
	gTexture = NULL;

	//Destroy window	
	SDL_DestroyRenderer( gRenderer );
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;
	gRenderer = NULL;

	//Quit SDL subsystems
	IMG_Quit();
	SDL_Quit();
}

SDL_Texture* loadTexture( std::string path )
{
	//The final texture
	SDL_Texture* newTexture = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
	if( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
	}
	else
	{
		//Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
		if( newTexture == NULL )
		{
			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
		}

		//Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}

	return newTexture;
}

int main( int argc, char* args[] )
{
	//Start up SDL and create window
	if( !init() )
	{
		printf( "Failed to initialize!\n" );
	}
	else
	{
		//Load media
		if( !loadMedia() )
		{
			printf( "Failed to load media!\n" );
		}
		else
		{	
			//Main loop flag
			bool quit = false;

			//Event handler
			SDL_Event e;

			//While application is running
			while( !quit )
			{
				//Handle events on queue
				while( SDL_PollEvent( &e ) != 0 )
				{
					//User requests quit
					if( e.type == SDL_QUIT )
					{
						quit = true;
					} 
					if( e.type == SDL_KEYDOWN )
                                        {
                                                //Select surfaces based on key press
                                                switch( e.key.keysym.sym )
                                                {
                                                        case SDLK_UP:
                                                        topLeftViewport.y-=5;
 
                                                        break;

                                                        case SDLK_DOWN:
                                                        topLeftViewport.y+=5;

                                                        break;

                                                        case SDLK_LEFT:
                                                        topLeftViewport.x-=5;
                                                        break;

                                                        case SDLK_RIGHT:
                                                        topLeftViewport.x+=5;
                                                        break;

                                                        default:
                                                        gCurrentSurface = gKeyPressSurfaces[ KEY_PRESS_SURFACE_DEFAULT ];
                                                        break;
                                                }
                                        }

				}

				

				//Clear screen
				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
				SDL_RenderClear( gRenderer );

				//Top left corner viewport
				//SDL_Rect topLeftViewport;
				//topLeftViewport.x = 0;
				//topLeftViewport.y = 0;
				//topLeftViewport.w = 30;
				//topLeftViewport.h = 60;
				SDL_RenderSetViewport( gRenderer, &topLeftViewport );
				
				//Render texture to screen
				SDL_RenderCopy( gRenderer, gTexture, NULL, NULL );


				//Top right viewport
				SDL_Rect bottomViewport;
				bottomViewport.x = SCREEN_WIDTH / 2;
				bottomViewport.y = SCREEN_HEIGHT-100;
				bottomViewport.w = 100;
				bottomViewport.h = 50;
				SDL_RenderSetViewport( gRenderer, &bottomViewport );
				
				//Render texture to screen
				SDL_RenderCopy( gRenderer, gTexture2, NULL, NULL );

                                SDL_RenderSetViewport( gRenderer, &topLeftViewport );
				usleep(10000);
				
                                //Render texture to screen
                                SDL_RenderCopy( gRenderer, gTexture, NULL, NULL );

				//Update screen
				SDL_RenderPresent( gRenderer );

				SDL_RenderSetViewport( gRenderer, &topLeftViewport );
                                //usleep(10000);

                                //Render texture to screen
                                SDL_RenderCopy( gRenderer, gTexture, NULL, NULL );

                                //Update screen
                                SDL_RenderPresent( gRenderer );

				                                //Apply the current image
                                SDL_BlitSurface( gCurrentSurface, NULL, gScreenSurface, NULL );

                                //Update the surface
                                SDL_UpdateWindowSurface( gWindow );


			}
		}
	}

	//Free resources and close SDL
	close();

	return 0;
}
