void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		giz;

	i = 0;
	while (i < size / 2)
	{
		giz = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = giz;
		i++;
	}
}
