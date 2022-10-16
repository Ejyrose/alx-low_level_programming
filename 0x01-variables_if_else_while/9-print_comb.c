#include <stdio.h>

/**
 * main-program entry point.
 * Return:0 success, non zero error.
 */
int main(void)
{
	int num;

	for (num = 48; num <= 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar('');
		}
	}
	putchar('\n');
	return (0);
}
