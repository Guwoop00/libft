#include<stdio.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}

int main(void)
{
    printf("%zu\n", ft_strlen("Morgan"));
    printf("%zu\n", ft_strlen("yess"));
    printf("%zu\n", ft_strlen("go"));
    printf("%zu\n", ft_strlen("a"));
    printf("%zu\n", ft_strlen(""));
}