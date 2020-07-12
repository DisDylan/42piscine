int	ft_fibonacci(int index)
{
	int a;
	int b;
	int new;
	int i;

	a = 0;
	b = 1;
	i = 2;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	while (i <= index)
	{
		new = a + b;
		a = b;
		b = new;
		i++;
	}
	return (new);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_fibonacci(35));
}
