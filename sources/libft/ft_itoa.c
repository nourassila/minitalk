#include "libft.h"

int	count_digits(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*write_word(char *s, int i, int sign, long l)
{
	s += i + sign;
	*s = '\0';
	while (l)
	{
		*--s = (l % 10) + '0';
		l /= 10;
	}
	if (sign)
		*--s = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		sign;
	int		i;
	int		l;

	l = n;
	i = 0;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		l *= -1;
	}
	i = count_digits(l);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	p = malloc(sizeof(char) * (sign + i + 1));
	if (p == NULL)
		return (NULL);
	p = write_word(p, i, sign, l);
	if (p == NULL)
		return (NULL);
	return (p);
}
