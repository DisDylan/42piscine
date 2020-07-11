#include <unistd.h>

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb < 10)
    {
        nb = nb + 48;
        write(1, &nb, 1);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }

}

int main()
{
    ft_putnbr(-745);
    write(1, "\n", 1);
    ft_putnbr(32);
    write(1, "\n", 1);
    ft_putnbr(7);
    write(1, "\n", 1);
    ft_putnbr(2043);
}