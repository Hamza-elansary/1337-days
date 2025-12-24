#include <unistd.h>

void	ft_print_combn(int n)
{
	int	i;
	char	char_n;
	
	i = 0;
	while ( i < n)
	{
		char_n = n % 10 + '0';
		write(1,&char_n, 1);
		i++;
	}	

}
int main (void)
{
	ft_print_combn(3);
}
