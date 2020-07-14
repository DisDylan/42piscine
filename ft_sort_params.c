#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	if (&s2[k] == "")
		return (1);
	while (s1[k] || s2[k])
	{
		if (s1[k] > s2[k])
			return (1);
		else if (s1[k] < s2[k])
			return (-1);
		k++;
	}
	return (0);
}

void	ft_sort_in_tab(char **str)
{
	int l;
	char *swap;

	l = 1;
	while (str[l])
	{
		if (ft_strcmp(str[l - 1], str[l]) == 1)
		{
			swap = str[l];
			str[l] = str[l -1];
			str[l - 1] = swap;
			l = 1;
		}
		l++;
	}

}
/*
int	put_prog_name_out(char **str)
{
	int m;
	int n;
	char swap;
	char to_see;

	m = 0;
	n = 0;
	while (str[m])
	{
		to_see = str[m];
		if (to_see[n] == '.' && to_see[n + 1] == '/')
		{
			swap = str[m];
			str[m] = str[0];
			str[0] = swap;
			return (0);
		}
		m++;
	}
}
*/
int	main(int argc, char **argv)
{
	(void) 	argc;
	(void) 	argv;
	int 	j;
	char 	**printable;

	j = 1;
	while (argv[j])
	{
		printable[j] = argv[j];
		j++;
	}
	j = 1;
	printable = argv;
	ft_sort_in_tab(printable);
	while (printable[j])
	{
		ft_putstr(printable[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
