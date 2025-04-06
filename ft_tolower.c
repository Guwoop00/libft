#include<stdio.h>

int	ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c += 32);
    return (0);
}

int main(void)
{
    printf("%d\n", ft_tolower('1'));
    printf("%d\n", ft_tolower('A'));
    printf("%d\n", ft_tolower('Z'));
    printf("%d\n", ft_tolower('$'));
    printf("%d\n", ft_tolower('a'));
}