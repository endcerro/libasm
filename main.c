#include "libasm.h"

int main()
{

	char *str1 = "Hello World";
	char *str2 = "";
	
	printf("Testing ft_strlen :\n");
	printf("\"%s\" --> strlen : %ld / ",str1,strlen(str1));
	printf("ft_strlen : %ld\n",ft_strlen(str1));
	printf("\"%s\" --> strlen : %ld / ",str2,strlen(str2));
	printf("ft_strlen : %ld\n",ft_strlen(str2));


	char *str3 = malloc(sizeof(char) * 100);
	*str3 = '\0';
	char *str4 = "Hello World";
	

	printf("\n====================================\n");
	printf("Testing ft_strcpy (malloc of 100):\n");
	printf("Before call : \nD = %s \nS = %s",str3, str4 );
	ft_strcpy(str3, str4);
	printf("\n================\nAfter call : \nD = %s \nS = %s\n",str3, str4 );
	free(str3);



	int a, b;
	printf("\n====================================\n");
	printf("Testing ft_strcmp :\n");
	

	str1 = strdup("Sample text ");
	str2 = strdup("Sample text");


	printf("|%s| and |%s|\n",str1, str2);
	a = ft_strcmp(str1, str2);
	b = strcmp(str1, str2);
	printf("strcmp = %d || ft_strcmp = %d\n",b,a);
	a = ft_strcmp(str2, str1);
	b = strcmp(str2, str1);
	printf("strcmp = %d || ft_strcmp = %d\n",b,a);
	free(str1);
	free(str2);

	printf("\n====================================\n");
	printf("Testing ft_strdup :\n");

	str1 = ft_strdup("Hello le monde");
	printf("%s\n",str1);
	free(str1);

	printf("\n====================================\n");
	printf("Testing ft_write :\n");

	int fd = 1;
	int nb = 10;
	char *strd = "Sample text";
	a = ft_write(fd, strd, nb);
	printf("\n%d %s\n", a, strerror(errno));
	b = write(fd, strd, nb);
	printf("\n%d %s\n", b, strerror(errno));


	printf("\n====================================\n");
	printf("Testing ft_read (malloc 500)\n");

	fd = open("src/ft_strlen.s", O_RDONLY);
	nb = 500;
	strd = malloc(sizeof(char) * 500);

	a = ft_read(fd, strd, nb);
	printf("\n%d %s\n%s\n===============================\n"
		, a, strerror(errno), strd);
	close(fd);
	fd = open("src/ft_strlen.s", O_RDONLY);
	b = read(fd, strd, nb);
	printf("\n%d %s\n%s\n===============================\n"
		, b, strerror(errno), strd);
	free(strd);
	close(fd);
	return 0;
}
