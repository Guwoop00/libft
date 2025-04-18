#include<stdio.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *d;
    const char *s;
    size_t i;

    i = 0;
    d = (char *)dst;
    s = (char *)src;

    if (!dst || !src)
        return (NULL);

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}

int main(void)
{
    char dst[10];
    char src[] = "Morgan";

    ft_memcpy(dst, NULL, 10);
    printf("%s", dst);

    ft_memcpy(NULL, src, 10);
    printf("%s", dst);

    ft_memcpy(NULL, NULL, 10);
    printf("%s", dst);

    printf("AVANT: %s", dst);
    ft_memcpy(dst, src, 10);
    printf("APRES: %s", dst);
}

