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
