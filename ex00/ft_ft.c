#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_ft(int *nbr)
{
	int		i;

	i = 42;
	while(i == 42)
	{
		ft_putchar(i);
		return i;
	}

}
int		main (void)
{

	ft_putchar("%d\n");
	return 0;
}
