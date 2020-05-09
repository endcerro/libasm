SRCS =	src/ft_strlen.s	\
	src/ft_strcmp.s	\
	src/ft_strcpy.s \
	src/ft_write.s 	\
	src/ft_read.s	\
	src/ft_strdup.s
	
NAME = libasm.a

all : $(NAME)

OBJS = ${SRCS:.s=.o}

.s.o:
	nasm -f elf64 $^

test : $(NAME)
	gcc -no-pie main.c $(NAME)

$(NAME) : ${OBJS} 
	ar rcs $(NAME) $(OBJS)
	
clean :
	rm -rf $(NAME)
	rm -rf a.out

fclean : clean
	rm -rf $(OBJS)

re : fclean all
