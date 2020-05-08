#include "libasm.h"
//#include <stdio.h>
//#include <unistd.h>
//#include <string.h>
#include <fcntl.h>
//extern int ft_write(int fd, char *buff, int len);
int main()
{
	//int len;
//	char *test = "Hello world";
//	len = ft_strlen(test);
//	printf("len = %d\n",len );
//	len = ft_strlen("hello");
//	printf("len = %d\n",len );
	

	
	//printf("cmp %d\n", strcmp("Testa", "Test\n"));
	//printf("cmp %d\n", ft_strcmp("Testa", "Test\n"));
	int out;
//	char *mal = strdup("TOCPY             ");
//	char *mal2 = strdup("BASE             ");
	printf("%d\n", ft_strcmp("11","1"));	
	printf("%d\n", strcmp("11","1"));
	printf("Comparing %s and %s\n", "\xff\xff", "\xff");	
	printf("%d\n", ft_strcmp("\xff\xff","\xff"));	
	printf("%d\n", strcmp("\xff\xff","\xff"));	
	//printf("cpy %s\n", ft_strcpy(mal, mal2));
	//int out = ft_write(1, "AAA", 20);	
	//printf(" : %d\n",out);	
//	out = write(1, "AAA", 20);	
//	printf(" : %d\n",out);	
	
//write(1,"TEST2",5);
return 0;
}
