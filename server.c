#include "minitalk.h"

void	process(int sig)
{
	static char		c;
	static int		i;

	if (sig == SIGUSR2)
		c += (1 << (7 - i));
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		c = 0;
		i = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("Process identifier's %d\n", pid);
	signal (SIGUSR2, process);
	signal (SIGUSR1, process);
	while (1)
		pause();
}
