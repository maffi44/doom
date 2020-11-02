typedef	struct		s_game_data
{
	t_gplayer	gplayer;
	t_gobjects	*gobjects;
	t_gmap		gmap;	
}			t_game_data;

int	main()
{
	t_game_data game_data;

	game_data_init(&game_data);

	start_main_loop(game_data);
}

void	start_main_loop(t_game_data *game_data)
{
	t_loop_data	loop_data;	

	loop_data_init(loop_data);

	while (1)
	{
		game_engine(game_data);

		render_engine(game_data);

		loop_engine(&loop_data);
	}
}

void	game_engine(t_game_data *game_data)

