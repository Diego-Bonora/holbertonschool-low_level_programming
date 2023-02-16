#include "main.h"
/**
 * main - prints time
 * Return: nothing
*/
void jack_bauer(void)
{
	int hour;
	int minute = 0;

	for (hour = 00; hour <= 23; hour++)
	{
	_putchar(hour + '0');
	}
	_putchar(minute + '0');
}
