#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	if (!dst && !src)
		return (0);
	if ((dst == NULL && dstsize == 0) || dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (src[i] && dest_len + i < dstsize - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	if (dstsize > dest_len)
		return (src_len + dest_len);
	else
		return (src_len + dstsize);
}
