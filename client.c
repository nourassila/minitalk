#include "minitalk.h"

int	main(int ac, char **av)
{
	int	pid;
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		pid = ft_atoi(av[1]);
		while (av[2][i])
		{
			j = 7;
			while (j >= 0)
			{
				if ((av[2][i] >> j & 1) == 1)
					kill(pid, SIGUSR2);
				if ((av[2][i] >> j & 1) == 0)
					kill(pid, SIGUSR1);
				usleep(900);
				j--;
			}
			i++;
		}
	}
	return (0);
}
