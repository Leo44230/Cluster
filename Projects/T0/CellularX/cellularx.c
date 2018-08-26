#include "cellular.h"

void	ft_putstr(char *str)
{
	char c;

	while (*str)
	{
		c = *str;
		write(1, &c, 1);
		str++;
	}
}

int	ft_extra(int cells[], int taille)
{
	int i;

	i = 0;
	while (i < taille)
	{
		if (cells[i] != 0 && cells[i] != 1)
			return (1);
		i++;
	}
	return (0);
}

int	ft_death(int cells[], int taille)
{
	int i;

	i = 0;
	while (i < taille)
	{
		if (cells[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_error(int cells[], int taille, int t)
{
	int err;
	int i;

	i = 0;
	err = 0;
	if (taille <= 3)
	{
		ft_putstr("Pas de vie sans espace :(\n");
		err = 1;
	}
	if (t <= 0)
	{
		ft_putstr("Pas de vie sans temps :(\n");
		err = 1;
	}
	if (ft_extra(cells, taille))
	{
		ft_putstr("Pas de vie extraterrestre :(\n");
		err = 1;
	}

	if (ft_death(cells, taille))
	{
		ft_putstr("La vie est morte :(\n");
		err = 1;
	}
	return (err);
}

void	ft_display(int cells[], int taille)
{
	int i;

	i = -1;
	while (++i < taille)
		ft_putnbr(cells[i]);
	ft_putstr("\n");
}

int	reprod(int cells[], int j)
{
	if (cells[j - 1] == 1 && cells[j] == 1 && cells[j + 1] == 1)
		return (0);
	if (cells[j - 1] == 1 && cells[j] == 1 && cells[j + 1] == 0)
		return (0);
	if (cells[j - 1] == 1 && cells[j] == 0 && cells[j + 1] == 1)
		return (0);
	if (cells[j - 1] == 1 && cells[j] == 0 && cells[j + 1] == 0)
		return (1);
	if (cells[j - 1] == 0 && cells[j] == 1 && cells[j + 1] == 1)
		return (1);
	if (cells[j - 1] == 0 && cells[j] == 1 && cells[j + 1] == 0)
		return (1);
	if (cells[j - 1] == 0 && cells[j] == 0 && cells[j + 1] == 1)
		return (1);
	if (cells[j - 1] == 0 && cells[j] == 0 && cells[j + 1] == 0)
		return (0);
}

void	cellularx(int cells[], int taille, int t)
{
	int i;
	int j;
	int k;
	int cells2[taille];

	if (ft_error(cells, taille, t))
		return ;
	i = 0;
	ft_display(cells, taille);
	cells[0] = 0;
	cells[taille - 1] = 0;
	while (i < t)
	{
		k = 0;
		while (k < taille)
		{
			cells2[k] = cells[k];
			k++;
		}
		j = 1;
		while (j < taille - 1)
		{
			cells2[j] = reprod(cells, j);
			j++;
		}
		i++;
		ft_display(cells2, taille);
		k = 0;
                while (k < taille)
                {
                        cells[k] = cells2[k];
                        k++;
                }
	}
}

