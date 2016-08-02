#include "libft.h"
#include "ft_bftostr.c"

int		main(void)
{
	char	*bfstr;
	char	*str;

	/*Hello World!*/
	bfstr = "++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.";
	str = ft_bftostr(bfstr);
	ft_putendl(str);
	return (0);
}
