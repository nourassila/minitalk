#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}		
	else
		ft_memcpy((unsigned char *)dst, (unsigned char *)src, len);
	return ((unsigned char *)dst);
}
