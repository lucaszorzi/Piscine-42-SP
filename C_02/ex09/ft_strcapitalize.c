char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && capitalize == 0)
		{
			str[i] = str[i] - 32;
			capitalize = 1;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') && capitalize == 1)
			capitalize = 1;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && capitalize == 1)
			str[i] = str[i] + 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && capitalize == 0)
			capitalize = 1;
		else if (str[i] >= '0' && str[i] <= '9')
			capitalize = 1;
		else
			capitalize = 0;
		i++;
	}
	return (str);
}
