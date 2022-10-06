void segf(void)
{
	char *str;

	str = "Holberston";
	str[0] = 's';
}

int main (void)
{
	segf();
	return 0;
}
