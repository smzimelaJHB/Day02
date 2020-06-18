#include <unistd.h>

void ft_putchar(char c)
{
  write(1,&c,1);
}

void ft_print_alphabet();

int main()
{
	ft_print_alphabet();
	return 0;
}

void ft_print_alphabet()
{
	char ch  = 'a';
	while(ch <= 'z')
	{
		ft_putchar(ch);
		ch++;
	}
}

