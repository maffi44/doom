#include "game_structs.h"
#include "control_functions.h"
#include "SDL2/SDL.h"

t_settings  init_global_settings()
{
    t_settings settings;

    settings.time = 0;
    return settings;
}

t_window    init_window()
{
    SDL_Window *sdl_win;

    if(SDL_Init(SDL_INIT_EVERYTHING))
    {
        err_and_exit("SDL Init ERROR");
    }
    if (!(sdl_win = SDL_CreateWindow("Doom",
    100, 100, 640, 480, SDL_WINDOW_SHOWN)))
    {
        err_and_exit("create window ERROR");
    }
}

void    game_init(t_game_data *game_data)
{
    game_data->settings = init_global_settings();
    game_data->window = init_window(game_data->settings);
}