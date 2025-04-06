#include<stdio.h>

int	ft_isprint(int c)
{
    if ( (c >= 32 && c <= 126))
        return (c);
    return (0);
}

int main(void)
{
    printf("%d\n", ft_isprint('1'));
    printf("%d\n", ft_isprint('-'));
    printf("%d\n", ft_isprint('#'));
    printf("%d\n", ft_isprint('0'));
}