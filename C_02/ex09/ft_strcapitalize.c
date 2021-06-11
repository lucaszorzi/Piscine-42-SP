char	*ft_strcapitalize(char *str)
{
	int	i;
	int capitalize;

	i = 0;
	capitalize = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && capitalize == 1)
		{
			str[i] -= 32;
			capitalize = 0;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') && capitalize == 0)
			capitalize = 0;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && capitalize == 0)
			str[i] += 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && capitalize == 1)
			capitalize = 0;
		else if ((str[i] >= '0' && str[i] <= '9') && capitalize == 1)
			capitalize = 0;
		else
			capitalize = 1;
		i++;
	}
	return (str);
}
