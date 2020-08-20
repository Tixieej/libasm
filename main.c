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

	printf("-=-=-\tmy ft_strcpy\t-=-=-\n");	
	printf("-=-=-\treal strcpy\t-=-=-\n");
}

void	test_strcmp(void)
{

	printf("-=-=-\tmy ft_strcmp\t-=-=-\n");	
	printf("-=-=-\treal strcmp\t-=-=-\n");
}


void	test_write(void)
{
	
	printf("-=-=-\tmy ft_write\t-=-=-\n");	
	printf("-=-=-\treal write\t-=-=-\n");
}


int		main(void)
{	
	test_strlen();
	int a, b;
	char *s = "februari";
	char dst[20] = "hallo";
	ft_strcpy(dst, "doeii");
	printf("ft_strcpy:\tdst = %s\n", dst);

	a = ft_strcmp("abc", "acb");
	b = ft_strcmp(s, "februari");
	printf("ft_strcmp:\ta = %i, b = %i\n", a, b);
	a = strcmp("abc", "fiets");
	char s1[10] = "fiets";
	char s2[10] = "cba";
	b = strcmp(s2, s1);
	printf("echt strcmp:\t%i %i\n", a, b);

	printf("\nft_write:\t");
	int w;
	w = ft_write(1, "hello\n", 6);
	printf("w = %i\n", w);
	w = ft_write(16, "saus\n", 5);
	printf("w = %i\n", w);
	printf("errno = %i\n", errno);
	printf("%s\n", strerror(errno));

	printf("real read:\n");
	char buff[8];
	w = read(1, buff, 8);
	printf("%s\nw = %i\n", buff, w);
	
	w = 0;
	printf("ft_read:\n");
	char buf2[8];
	w = read(1, buf2, 8);
	printf("%s\nw = %i\n", buf2, w);

	char *src = "hallo";
	char *dest;
	printf("%p, %p\n", src, dest);
	dest = ft_strdup(src);
	printf("dest = %s\n", dest);
	printf("%p, %p\n", src, dest);
	char *vla;
	vla = strdup(src);
	printf("vla = %s\n", dest);
}
