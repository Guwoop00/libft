#include<stdio.h>

int	ft_isalnum(int c)
{
    //if (ft_isalpha(c) || ft_isdigit(c))
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return (c);
    return (0);
}

int main(void)
{
    printf("%d\n", ft_isalnum('s'));
    printf("%d\n", ft_isalnum('1'));
    printf("%d\n", ft_isalnum('#'));
    printf("%d\n", ft_isalnum('$'));
}