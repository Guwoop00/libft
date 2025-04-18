#include<stdio.h>

void ft_bzero(void *s, size_t n)
{
    char *str;
    size_t i;

    i = 0;
    str = (char *)s;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}

int main(void)
{
    size_t i;
    i = 0;
    char buffer[10];

    ft_bzero(buffer, sizeof(buffer));

    while (i < sizeof(buffer))
    {
        printf("%c\n", buffer[i]);
        i++;
    }
}
