#include <stdio.h>
int		ft_strlen(char *);
int		ft_strcpy(char *, char *);

int		main(void)
{
	int		a;
	int		b;
	char	*s = "februari";
	a = ft_strlen(s);
	printf("a = %i\n", a);
	b = ft_strlen("hello");
	printf("b = %i\n", b);

	ft_strcpy();
}

//https://courses.cs.washington.edu/courses/cse378/10au/sections/Section1_recap.pdf//https://www.felixcloutier.com/x86/
//https://cs.brown.edu/courses/cs033/docs/guides/x64_cheatsheet.pdf
