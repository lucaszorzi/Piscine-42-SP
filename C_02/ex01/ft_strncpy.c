int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest_len = ft_strlen(dest);
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
