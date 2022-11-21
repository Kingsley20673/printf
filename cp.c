#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num -= 10;
	if (x == 'x')
		return (hex[num]);
	else
		return(Hex[num]);
}
/*int wrt(char c)
{
	return ());
}*/
int main(void)
{
	int numb;
	int val;
	numb = 100;
	val = hex_check(numb, 'A');
	printf("%d\n", val);

	printf("%c\n", wrt(f));
	return (0);
}
