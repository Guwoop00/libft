#include<stdio.h>

int	ft_isalpha(int c)
{
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        return (c);
    return (0);
}

int main(void)
{
    printf("%d\n", ft_isalpha('s'));
    printf("%d\n", ft_isalpha('-'));
    printf("%d\n", ft_isalpha('#'));
    printf("%d\n", ft_isalpha('$'));
}