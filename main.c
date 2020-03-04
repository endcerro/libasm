extern int ft_strlen(char *c);

int main()
{
	int len;
	char *test = "Hello world";
	len = ft_strlen(test);
	printf("len = %d\n",len );
	return 0;
}


//TORUN 
//nasm -fmacho64 hello.s
//gcc hello.o main.c


// nasm -f elf64 hello.s
//ld -s -o hello hello.o
//