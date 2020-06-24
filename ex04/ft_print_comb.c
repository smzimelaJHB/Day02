#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb()
{
    char x = '0';
	char y = '1';
	char z = '2';

	while(z<='9')
	{
		if(x!=z&&y!=z)
		{
	    	ft_putchar(x);
			ft_putchar(y);
			ft_putchar(z);
			ft_putchar(',');
			ft_putchar(' ');	
		}
		z++;
	}
	z=9;
	while(y<=8)
		{
			if(z!=y&&x!=y)
			   {
				ft_putchar(x);
				ft_putchar(y);
    		    ft_putchar(z);
      			ft_putchar(',');
   				ft_putchar(' ');

		}
		y++;
		}
}

int main()
{
	ft_print_comb();
	return 0;
}

