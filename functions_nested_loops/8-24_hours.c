#include "main.h"
/**
 * main - prints time
 * Return: nothing
*/
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute)
		{
			_putchar(hour / 10 + '0');
			_putchar(hout % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
		}
	}
	
}
