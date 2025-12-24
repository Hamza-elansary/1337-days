#include <unistd.h>

void ft_putchar(int num)
{
	char	c ;
	c = num + '0';
	write(1 , &c, 1);
}

void    ft_print_comb(void)
{
	int	i;
	int	j;
	int	b;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			b = j + 1;
			while (b < 10)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(b);
				if (!(i == 7 && j == 8 && b == 9))
				{
					write(1, ", ", 2);
				}
				b++;
			}
			j++;
			
		}
		i++;
	}
}
