int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int 	i;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}