#include "ft_printf.h"

int	ft_chrprinter(int c)
{
	write(1, &c, 1);
	return (1);
}
