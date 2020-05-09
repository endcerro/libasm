#ifndef LIBASM_H
#define LIBASM_H
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char *a);
size_t	ft_write(int fd, char *str, int len);
int		ft_strcmp(char *a, char *b);
size_t 	ft_read(int fd, void *buf, size_t count);
char	*ft_strcpy(char *dest, char *src);
char 	*ft_strdup(char *str);

#endif
