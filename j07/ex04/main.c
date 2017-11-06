#include <stdio.h>

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int		main(int argc, char **argv)
{
	char **tab = ft_split_whitespaces(argv[1]);
	ft_print_words_tables(tab);
	return (0);
}
