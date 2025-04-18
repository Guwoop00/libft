#include<stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    char *str;
    size_t i;

    i = 0;
    str = (char *)b;
    while (i < len)
    {
        str[i] = c;
        i++;
    }
    return (str);
}

int main(void)
{
    size_t i;
    i = 0;
    char buffer[10];

    ft_memset(buffer, '0', sizeof(buffer));

    while (i < sizeof(buffer))
    {
        printf("%c\n", buffer[i]);
        i++;
    }
}
