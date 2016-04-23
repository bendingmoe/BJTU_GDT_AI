
#ifndef ALLUM1_H_
#define ALLUM1_H_

#define BUF	4096

typedef	struct	s_line
{
  int		first;
  int		second;
  int		third;
  int		fourth;
  int		check;
}		t_line;

typedef	struct	s_allum
{
  int		x_allum;
  int		y_allum;
  int		bytes;
  char		**pars;
  int		nb_allum;
}		t_allum;

typedef	struct	s_param
{
  int		j;
  int		player;
  int		final;
  int		mode;
  t_allum	allum;
  t_line	line;
}		t_param;

void		check_final(t_param *param);
int		check_math(t_param *param);
void		erase_allum(t_param *param);
char		*get_next_line(const int fd, t_param *param);
int		my_getnbr(char *str);
int		my_put_nbr(int nb);
void		my_putnbr(int nb);
void		my_putchar(char a);
void		my_putstrs(char *str, char *str2);
void		my_putstr(char *str);
int		my_strlen(char *str);
int		my_strcmp(char *str, char *str2);
int		check_lines(char *buffer);
int		check_columns(char *buffer, t_param *param);
void		check_bytes(t_param *param);
char		**parsallum(char *av, t_param *param);
int		player_one(t_param *param);
int		player_two(t_param *param);
void		display_allum(t_param *param);
void		error_line(t_param *param);
void		error_empty(t_param *param);
int		select_mode(t_param *param);
int		player_ia(t_param *param);
void		count_line(t_param *param);
int		my_strlen_line(char *str);
int		other_param(t_param *param);
int		final_param(t_param *param);
int		line_first(t_param *param);
int		line_second(t_param *param);
int		line_third(t_param *param);
int		line_fourth(t_param *param);
void		check_max(t_param *param);
void		check_ia(t_param *param);
void		check_zero(t_param *param);
void		almost_final(t_param *param);
void		play_one(t_param *param, char *buff);
void		play_two(t_param *param, char *buff);
void		param_number(t_param *param);

#endif /* !ALLUM1_H_ */
