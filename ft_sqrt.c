int	ft_sqrt(int nb)
{
	int i;
	
	i = 0;
	while(i != (nb / 2))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(143));
}
