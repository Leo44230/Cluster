#ifndef CELLULAR_H

# define CELLULAR_H

# include <unistd.h>

void	ft_putstr(char *str);
int	ft_error(int cells[], int taille, int t);
void	cellularx(int cells[], int taille, int t);
void	ft_putnbr(int n);
void	ft_display(int cells[], int taille);

#endif
