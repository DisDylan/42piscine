int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (ft_recursive_power(nb, power - 1)*nb);
	if (power == 0 || nb == 0)
		return (1);
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_power(3, 5));
}
