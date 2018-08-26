#include "cellular.h"

int	main()
{
	int cells[21] = {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0};
	int taille = 21;
	int t = 8;
	
	ft_putstr("########## test 1 ##########\n");
	ft_putstr("Plaquette à t0 : ");
	ft_display(cells, taille);
	ft_putstr("Taille : ");
	ft_putnbr(taille);
	ft_putstr("\nTime : ");
	ft_putnbr(t);
	ft_putstr("\nResult :\n");
	cellularx(cells, taille, t);

	int cells2[10] = {0,0,0,0,0,0,0,0,0,0};
        int taille2 = 10;
        int t2 = 3;

        ft_putstr("\n########## test 2 ##########\n");
        ft_putstr("Plaquette à t0 : ");
        ft_display(cells2, taille2);
        ft_putstr("Taille : ");
        ft_putnbr(taille2);
        ft_putstr("\nTime : ");
        ft_putnbr(t2);
        ft_putstr("\nResult :\n");
	cellularx(cells2, taille2, t2);

	int cells3[10] = {0,0,0,0,1,0,1,0,0,0};
        int taille3 = 10;
        int t3 = -1;
	ft_putstr("\n########## test 3 ##########\n");
        ft_putstr("Plaquette à t0 : ");
        ft_display(cells3, taille3);
        ft_putstr("Taille : ");
        ft_putnbr(taille3);
        ft_putstr("\nTime : ");
        ft_putnbr(t3);
        ft_putstr("\nResult :\n");
        cellularx(cells3, taille3, t3);

	int cells4[10] = {0,0,2,0,1,0,1,8,0,3};
        int taille4 = 10;
        int t4 = 2;
        ft_putstr("\n########## test 4 ##########\n");
        ft_putstr("Plaquette à t0 : ");
        ft_display(cells4, taille4);
        ft_putstr("Taille : ");
        ft_putnbr(taille4);
        ft_putstr("\nTime : ");
        ft_putnbr(t4);
        ft_putstr("\nResult :\n");
        cellularx(cells4, taille4, t4);

	int cells5[2] = {0,0};
        int taille5 = 2;
        int t5 = -1;
        ft_putstr("\n########## test 5 ##########\n");
        ft_putstr("Plaquette à t0 : ");
        ft_display(cells5, taille5);
        ft_putstr("Taille : ");
        ft_putnbr(taille5);
        ft_putstr("\nTime : ");
        ft_putnbr(t5);
        ft_putstr("\nResult :\n");
        cellularx(cells5, taille5, t5);

	int cells6[10] = {9};
        int taille6 = 1;
        int t6 = 0;
        ft_putstr("\n########## test 6 ##########\n");
        ft_putstr("Plaquette à t0 : ");
        ft_display(cells6, taille6);
        ft_putstr("Taille : ");
        ft_putnbr(taille6);
        ft_putstr("\nTime : ");
        ft_putnbr(t6);
        ft_putstr("\nResult :\n");
        cellularx(cells6, taille6, t6);

	int cells7[10] = {1,0,0,0,1,0,1,0,0,1};
        int taille7 = 10;
        int t7 = 5;
        ft_putstr("\n########## test 7 ##########\n");
        ft_putstr("Plaquette à t0 : ");
        ft_display(cells7, taille7);
        ft_putstr("Taille : ");
        ft_putnbr(taille7);
        ft_putstr("\nTime : ");
        ft_putnbr(t7);
        ft_putstr("\nResult :\n");
        cellularx(cells7, taille7, t7);

}
