#include <stdio.h>
#include <string.h>

int		ft_strlen(char *);
char	*ft_strcpy(char *, char *);
int		ft_strcmp(char *, char *);

int		main(void)
{
	int		a;
	int		b;
	char	*s = "februari";
	a = ft_strlen(s);
	printf("ft_strlen:\na = %i\n", a);
	b = ft_strlen("hello");
	printf("b = %i\n", b);

	char dst[20] = "hallo";
	ft_strcpy(dst, "doeii");
	printf("ft_strcpy:\ndst = %s", dst);

	a = ft_strcmp("acb", "abc");
	b = ft_strcmp(s, "februari");
	printf("ft_strcmp:\na = %i, b = %i\n", a, b);
}

//https://courses.cs.washington.edu/courses/cse378/10au/sections/Section1_recap.pdf//https://www.felixcloutier.com/x86/
//https://cs.brown.edu/courses/cs033/docs/guides/x64_cheatsheet.pdf
