#include "minitalk_bonus.h"

void	handler(int sig, siginfo_t *info, void *content)
{
	static char	c;
	static int	i;

	(void)content;
	if (sig == SIGUSR1)
		c = c << 1;
	else if (sig == SIGUSR2)
		c = (c << 1) + 1;
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		i = 0;
		c = 0;
		kill(info->si_pid, SIGUSR1);
	}
}

int	main(void)
{
	int					pid;
	struct sigaction	sig;

	pid = getpid();
	sig.sa_flags = SA_SIGINFO;
	sig.sa_sigaction = handler;
	ft_printf("%d\n", pid);
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	while (1)
		pause();
	return (0);
}
