#include<stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i] && i < dstsize)
    {
        i++;
    }

    while (src[j] && i + j + 1 < dstsize)
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i + j < dstsize)
        dst[i + j] = '\0';
    
    while(src[j])
    {
        j++;
    }
    return (i + j);
}

int main(void)
{
    char dst[20] = "Hello";
    char src[] = " World";

    printf("AVANT: %s\n", dst);
    printf("Retour de strlcat: %zu\n", ft_strlcat(dst, src, sizeof(dst)));
    printf("APRES: %s\n", dst);
    printf("\n");
}
