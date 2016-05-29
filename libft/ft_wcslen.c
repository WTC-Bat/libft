
#include "libft.h"

size_t	ft_wcslen(const wchar_t *wcs)
{
	int		cnt;

	cnt = 0;
	while (*wcs++ != '\0')
		cnt++;
	return (cnt);
}
