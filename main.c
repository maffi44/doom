#include "game_structs.h"
#include "engines.h"
#include "control_functions.h"

void	start_main_loop(t_game_data *game_data)
{
	t_loop_data	loop_data;

	loop_init(&loop_data);
	while (1)
	{
		logic_engine(game_data);
		physics_engine(game_data);
		render_engine(game_data);
		loop_engine(&loop_data);
	}
}

int	main()
{
	t_game_data game_data;

	game_init(&game_data);
	start_main_loop(&game_data);
}