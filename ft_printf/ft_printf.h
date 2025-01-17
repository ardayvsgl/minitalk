#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_chrprinter(int c);
int		ft_strprinter(char *str);
int		ft_ptrprinter(unsigned long long ptr);
int		ft_intprinter(int n);
int		ft_unintprinter(unsigned int n);
int		ft_hexprinter(unsigned int n, int c);

#endif
