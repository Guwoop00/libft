#include<stdio.h>

int	ft_isdigit(int c)
{
    if ( (c >= '0' && c <= '9'))
        return (c);
    return (0);
}

int main(void)
{
    printf("%d\n", ft_isdigit('1'));
    printf("%d\n", ft_isdigit('-'));
    printf("%d\n", ft_isdigit('#'));
    printf("%d\n", ft_isdigit('0'));
}