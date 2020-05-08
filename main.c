//#include "libasm.h"
//#include <stdio.h>
//#include <unistd.h>
//#include <string.h>
#include <fcntl.h>
extern int ft_write(int fd, char *buff, int len);
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
	
//	char *mal = strdup("TOCPY             ");
//	char *mal2 = strdup("BASE             ");
	//printf("cpy %s\n", ft_strcpy(mal, mal2));
	int fd = open("test.txt", O_APPEND | O_TRUNC | O_WRONLY | O_CREAT, 0644);
	ft_write(fd, "TESTBONJOURLESAMIS", 10);	
	close(fd);
	//write(1,"TEST2",5);
return 0;
}
