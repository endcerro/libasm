extern int ft_strlen(char *c);
extern char* ft_strcpy(char *a, char *b);
extern int ft_strcmp(char *a, char *b);
int main()
{
	int len;
	char *test = "Hello world";
	len = ft_strlen(test);
	printf("len = %d\n",len );
	len = ft_strlen("hello");
	printf("len = %d\n",len );
	

	
	printf("cmp %d\n", strcmp("Testa", "Test\n"));
	printf("cmp %d\n", ft_strcmp("Testa", "Test\n"));
	
	char *mal = strdup("TOCPY             ");
	char *mal2 = strdup("BASE             ");
	printf("cpy %s\n", ft_strcpy(mal, mal2));
	return 0;
}


//TORUN 
//nasm -fmacho64 hello.s
//elf64 on linux
//gcc hello.o main.c


// nasm -f elf64 hello.s
//ld -s -o hello hello.o
//
