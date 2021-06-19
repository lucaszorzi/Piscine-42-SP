char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr_str;
	char	*ptr_to_find;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		ptr_str = str;
		ptr_to_find = to_find;
		while (*ptr_to_find && *ptr_str == *ptr_to_find)
		{
			ptr_to_find++;
			ptr_str++;
		}
		if (*ptr_to_find == '\0')
			return (str);
		str++;
	}
	return (0);
}
