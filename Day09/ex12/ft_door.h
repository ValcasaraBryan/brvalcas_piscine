#ifndef FT_DOOR_H
# define FT_DOOR_H

typedef int				t_bool;

typedef struct			s_door
{
	int state;

}						t_door;

enum					e_list
{
	OPEN = 0,
	CLOSE = 1,
	TRUE = 1,
	FALSE = 0,
};

void					ft_putstr(char *str);
void					open_door(t_door *door);
void					close_door(t_door *door);
t_bool					is_door_close(t_door *door);
t_bool					is_door_open(t_door *door);

#endif
