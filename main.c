#include "libasm.h"
//#include <stdio.h>
//#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
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
	out = ft_write(1,"#c#s#p#x#X#e#f#g",16);
	printf("\n%d\n",out );
//	char *mal = strdup("TOCPY             ");
//	char *mal2 = strdup("BASE             ");
//	printf("%d\n", ft_strcmp("11","1"));	
//	printf("%d\n", strcmp("11","1"));
//	printf("Comparing %s and %s\n", "\xff\xff", "\xff");	
//	printf("%d\n", strcmp("\xff\xff","\xff"));
	// char *str;
	// char *str2;

	// str = strdup("Hello world");
	// str2 = strdup("Hello world !");	
	// printf("Comparing |%s| and |%s| : ft = %d -> %d \n"
	// 	,str, str2, ft_strcmp(str, str2), strcmp(str, str2));
	// free(str);
	// free(str2);


	// str = strdup("\xff\xff\xff");
	// str2 = strdup("\xff\xff\xff");	
	// printf("Comparing |%s| and |%s| : ft = %d -> %d \n"
	// 	,str, str2, ft_strcmp(str, str2), strcmp(str, str2));
	// free(str);
	// free(str2);



	// str = strdup("\xff\xff");	
	// str2 = strdup("\xff");	
	// printf("Comparing |%s| and |%s| : ft = %d -> %d \n"
	// 	,str, str2, ft_strcmp(str, str2), strcmp(str, str2));
	// free(str);
	// free(str2);

	// printf("%d %d \n", );
	// printf("%d\n", ft_strcmp("123","1\xff\xff"));	
	// printf("%d\n", strcmp("\xff 2\xff","\xff 2"));	
	// printf("%d\n", ft_strcmp("\xff 2\xff","\xff 2"));	
	// printf("%d\n", strcmp("123","1\xff\xff"));	
	//printf("cpy %s\n", ft_strcpy(mal, mal2));
	// printf("%d\n", ft_strcmp("123","12"));	
	// printf("%d\n", ft_strcmp("12","123"));	
	//int out = ft_write(1, "AAA", 20);	
	//printf(" : %d\n",out);	
//	out = write(1, "AAA", 20);	
//	printf(" : %d\n",out);	
	
//write(1,"TEST2",5);
return 0;
}
