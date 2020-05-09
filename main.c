#include "libasm.h"
//#include <stdio.h>
//#include <unistd.h>
#include <errno.h>

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
// 	out = ft_write(1, "Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet.", 494
// );


	// char *str = "haha";
	// int len = 10;
	// int fd = 1;


	// out = ft_write(fd,str,len);
	// printf("\n%d %s\n",out,strerror(errno));
	// out = write(fd,str,len);
	// printf("\n%d %s\n",out,strerror(errno));

	char *mall = strdup("Hello world         ");
	char *mall2 = strdup("Goodbye world      ");

	ft_strcpy(mall,mall2 );

	printf("%s\n%s\n",mall, mall2 );



	char *str = ft_strdup("Hello frend");
	// printf("%d\n",str );
	// str[0]= 'a';
	// str[1] = 'b';
	// str[2] = 0;
	// str[3] = 0;
	printf("%s\n",str );
	// free(str);
	// char *test = malloc(sizeof(char) * 100);

	// out = ft_read(1,test,5);
	// printf("\n%d : %s\n %s",out, test, strerror(errno));
	// free(test);


	// out = ft_read(1,test,5);
	// printf("\n%d : %s\n %s",out, test,strerror(errno));


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
