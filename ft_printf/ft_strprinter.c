#include "ft_printf.h"

int	ft_strprinter(char *str)
{
	int	i;

	i = 0;
	if (str)
	{	
		while (str[i])
			write(1, &str[i++], 1);
	}
	else
		i += write(1, "(null)", 6);
	return (i);
}
