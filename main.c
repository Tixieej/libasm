#include <stdio.h> //printf
#include <string.h>
#include <unistd.h> //write
#include <errno.h> //errno
#include "libasm.h"

void	test_strlen(void)
{
	int		a;
	int		b;
	char	*s1;
	char	*s2;

	s1 = "hello everyone, how are you doing?";
	s2 = "bye.";
	
	printf("-=-=-\tmy ft_strlen\t-=-=-\n");	
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	printf("length of %s is %i\n", s1, a);
	printf("length of %s is %i\n", s2, b);

	printf("-=-=-\treal strlen\t-=-=-\n");
	a = strlen(s1);
	b = strlen(s2);
	printf("length of %s is %i\n", s1, a);
	printf("length of %s is %i\n", s2, b);
}

void	test_strcpy(void)
{
	char	my_src[20] = "Fantastisch";
	char	src[20] = "Fantastisch";
	char	my_dst[20];
	char	dst[20];

	printf("-=-=-\tmy ft_strcpy\t-=-=-\n");
	ft_strcpy(my_dst, my_src);
	printf("src = %s \tdst = %s\n", my_src, my_dst);
	
	printf("-=-=-\treal strcpy\t-=-=-\n");
	strcpy(dst, src);
	printf("src = %s \tdst = %s\n", src, dst);
}

void	test_strcmp(void)
{
	char	*s1;
	char	*s2;
	int		my_i;
	int		i;

	s1 = "Hallo";
	s2 = "hallo";
	printf("-=-=-\tmy ft_strcmp\t-=-=-\n");
	my_i = ft_strcmp(s1, s2);
	printf("%i\n", my_i);

	printf("-=-=-\treal strcmp\t-=-=-\n");
	i = strcmp(s1, s2);
	printf("%i\n", i);
}


void	test_write(void)
{
	int		ret;

	printf("-=-=-\tmy ft_write\t-=-=-\n");
	ret = ft_write(1, "hello\n", 6);
	printf("ret = %i\n", ret);
	ret = ft_write(16, "saus\n", 5);
	printf("ret = %i\n", ret);
	printf("errno = %i\n", errno);
	printf("%s\n", strerror(errno));

	printf("-=-=-\treal write\t-=-=-\n");
	ret = 0;
	ret = write(1, "hello\n", 6);
	printf("ret = %i\n", ret);
	ret = write(16, "saus\n", 5);
	printf("ret = %i\n", ret);
	printf("errno = %i\n", errno);
	printf("%s\n", strerror(errno));
	
}

void	test_read(void)
{
	char	buff1[28];
	char	buff2[28];
	int		ret;

	printf("-=-=-\tmy ft_read\t-=-=-\n");
	ret = 0;
	ret = ft_read(1, buff1, 28);
	printf("%s\nret = %i\n", buff1, ret);

	printf("-=-=-\treal read\t-=-=-\n");
	ret = 0;
	ret = read(1, buff2, 28);
	printf("%s\nret = %i\n", buff2, ret);
}

void	test_strdup(void)
{
	char *src = "hallo";
	char *dest;
	char *dest2;
	
	printf("-=-=-\tmy ft_strdup\t-=-=-\n");
	dest = ft_strdup(src);
	printf("pointers:\t%p, %p\n", src, dest);
	printf("dest = %s\n", dest);

	printf("-=-=-\treal strdup\t-=-=-\n");
	dest2 = strdup(src);
	printf("pointers:\t%p, %p\n", src, dest2);
	printf("dest2 = %s\n", dest2);
}

int		main(void)
{	
	test_strlen();
	test_strcpy();
	test_strcmp();
	test_write();
	test_read();
	test_strdup();
	return (0);
}
