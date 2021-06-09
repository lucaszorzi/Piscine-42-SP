#include <unistd.h>

void	write_result(char first, char second, char third, char fourth)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, " ", 1);
	write(1, &third, 1);
	write(1, &fourth, 1);
	if (first == '9' && second == '8' && third == '9' && fourth == '9')
		return ;
	write(1, ", ", 2);
}

void	comb2_iterator(char first, char second, char third, char fourth)
{
	while (first <= '9')
	{
		while (second <= '9')
		{
			while (third <= '9')
			{
				while (fourth <= '9')
				{
					write_result(first, second, third, fourth);
					fourth++;
				}
				fourth = '0';
				third++;
			}
			second++;
			third = first;
			fourth = second + 1;
		}
		first++;
		second = '0';
		fourth = second + 1;
		third = first;
	}
}

void	ft_print_comb2(void)
{
	char	first;
	char	second;
	char	third;
	char	fourth;

	first = '0';
	second = '0';
	third = '0';
	fourth = '1';
	comb2_iterator(first, second, third, fourth);
}
