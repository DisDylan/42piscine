int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
		ft_find_next_prime(nb + 1);
}

int main()
{
	printf("%d", ft_find_next_prime(90));
}
