#include <stdio.h> //printf
#include <string.h>
#include <unistd.h> //write
#include <errno.h> //errno

int		ft_strlen(char *);
char	*ft_strcpy(char *, char *);
int		ft_strcmp(char *, char *);
int		ft_write(int, void *, size_t);
int		ft_read(int, void *, size_t);

int		main(void)
{
	int		a;
	int		b;
	char	*s = "februari";
	a = ft_strlen(s);
	printf("ft_strlen:\ta = %i\n", a);
	b = ft_strlen("hello");
	printf("b = %i\n", b);

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
}

//https://courses.cs.washington.edu/courses/cse378/10au/sections/Section1_recap.pdf
//https://www.felixcloutier.com/x86/
//https://cs.brown.edu/courses/cs033/docs/guides/x64_cheatsheet.pdf
//https://www.tutorialspoint.com/assembly_programming/assembly_basic_syntax.htm
