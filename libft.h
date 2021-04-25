#ifndef LIBFT_H
#define LIBFT_H
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
    void *ft_memcpy (void *destination, const void *source, size_t n);
    void ft_bzero(void *s, size_t n);
    void *ft_memset(void *buf, int c, size_t n);
#endif