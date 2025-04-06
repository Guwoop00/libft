#include<stdio.h>

int	ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c -= 32);
    return (0);
}

int main(void)
{
    printf("%d\n", ft_toupper('1'));
    printf("%d\n", ft_toupper('a'));
    printf("%d\n", ft_toupper('z'));
    printf("%d\n", ft_toupper('$'));
    printf("%d\n", ft_toupper('A'));
}