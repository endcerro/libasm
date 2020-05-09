#ifndef LIBASM_H
#define LIBASM_H
#include <unistd.h>

size_t	ft_strlen(char *a);
size_t	ft_write(int fd, char *str, int len);
int		ft_strcmp(char *a, char *b);
size_t 	ft_read(int fd, void *buf, size_t count);
char	*ft_strcpy(char *dest, char *src);
#endif
