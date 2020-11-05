#ifndef GAME_STRUCT_H

# define GAME_STRUCT_H

typedef	struct	s_loop_data
{
	int			time;
}				t_loop_data;

typedef	struct	s_player
{
	int			time;
}				t_player;

typedef	struct	s_entites
{
	int			time;
}				t_entites;

typedef	struct	s_map
{
	int			time;
}				t_map;

typedef	struct	s_window
{
	int			time;
}				t_window;

typedef	struct	s_settings
{
	int			time;
}				t_settings;

typedef	struct	s_game_data
{
	t_player	player;
	t_entites	entites;
	t_map		map;
    t_window    window;
    t_settings  settings;
}				t_game_data;

#endif /*GAME_STRUCT_H*/