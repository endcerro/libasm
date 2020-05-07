extern int ft_strlen(char *c);
extern int ft_strcmp(char *a, char *b);
int main()
{
	int len;
	char *test = "Hello world";
	len = ft_strlen(test);
	printf("len = %d\n",len );
	len = ft_strlen("hello");
	printf("len = %d\n",len );
	
	char *test1 = "test";
	char *test2 = "testa";

	
	printf("cmp %d\n", ft_strcmp(test1, test2));
	printf("cmp %d", strcmp(test1, test2));
	
	
	return 0;
}


//TORUN 
//nasm -fmacho64 hello.s
//elf64 on linux
//gcc hello.o main.c


// nasm -f elf64 hello.s
//ld -s -o hello hello.o
//
