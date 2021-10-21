int	ft_strlen(char *str)
{
	int	sayi;

	sayi = 0;
	while (*str != '\0' )
	{
		sayi++;
		str++;
	}
	return (sayi);
}
