#include <unistd.h>
#include <stdio.h>

int	len_nb(char *lenNb)
{
	int	i;
	while(lenNb[i])
	{
		i++;
	}
	return (i -1);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	b;

	char	table_nb[11];
	
	i = 0;
	b = 0;
	if (!(nb == -2147483648))
	{
		while (i < 11 )
		{
			table_nb[i] = nb % 10 + '0';
			
			if ((nb / 10) == 0)
			{
				table_nb[i] = (nb % 10) + '0';
				table_nb[i +1] = '\0';
				i = 11;
			}
			
			else
			{
				nb = nb / 10 ;
				i++;
			}

		}
		i = len_nb(table_nb);
		
		if (b == 1)
		{
			write(1, "-", 1);
		}
		
		while(i >= 0)
		{
			write(1, &table_nb[i], 1);
			i--;
		}
	}
	else
		write(1, "-2147483648", 11);

}
int main(void)
{
	ft_putnbr(42);
}
