SRCS =	src/ft_strlen.s	\
	src/ft_strcmp.s	\
	src/ft_strcpy.s \
	src/ft_write.s	
	
NAME = libasm.a

all : $(NAME)

OBJS = ${SRCS:.s=.o}

.s.o:
	nasm -f elf64 $^

$(NAME) : ${OBJS}
	ar rcs $(NAME) $(OBJS)
	gcc main.c $(NAME)

clean :
	rm $(NAME)
	rm a.out

fclean : clean
	rm $(OBJS)
