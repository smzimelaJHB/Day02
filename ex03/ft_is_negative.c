#include <unistd.h>

void ft_putchar(char c)
{
 if(c<0)
  write(1,"N",1);
 if(c>0)
  write(1,"P",1);	 
}

void ft_print_numbers(int);

int main()
{
    ft_print_numbers(-1);
    return 0;
}

void ft_print_numbers(int n)
{       
    ft_putchar(n);
}
