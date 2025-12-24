#include <unistd.h>

void	ft_putchar(int num)
{
	char	c;
	char	d;
	if (num < 10)
	{
		c = num + '0';
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		d = (num / 10) + '0';
		write (1, &d, 1);
		d = (num % 10) + '0';
		write(1, &d, 1);
	}

}
void	ft_print_comb2(void)
{
	int	a;
	int	b;
	
	a = 0;
	while (a < 99)
	{
		b = 0;
		while (b < 100)
		{
			ft_putchar(a);
			write(1, " ", 1);
			ft_putchar(b);
			if (!(a == 98 && b == 99))
			{
				write(1, ", ",1);
			}
			b++;
		}
		a++;
	}
}
