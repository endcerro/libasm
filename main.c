extern int strlen(char *c);
int main()
{
	int len = strlen("hello");
	printf("len = %d\n",len );
	return 0;
}


//TORUN 
//nasm -fmacho64 hello.s
//gcc hello.o main.c


// nasm -f elf64 hello.s
//ld -s -o hello hello.o
//