# ifndef ENGINES_H
# define ENGINES_H

# include "game_structs.h"

void    logic_engine(t_game_data *game_data);
void    physics_engine(t_game_data *game_data);
void    render_engine(t_game_data *game_data);
void    loop_engine(t_loop_data *loop_data);
void    loop_init(t_loop_data *loop_data);

#endif /*ENGINES_H*/