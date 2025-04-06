#include<stdio.h>

int	ft_isascii(int c)
{
    if (c == 0)
		return (1);
    if (c > 0 && c <= 127)
        return (c);
    return (0);
}

int main(void)
{
    printf("%d\n", ft_isascii('s'));
    printf("%d\n", ft_isascii('-'));
    printf("%d\n", ft_isascii('#'));
    printf("%d\n", ft_isascii('0'));
}