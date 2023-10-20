#include "main.h"
/**
 * more_numbers - function print except 2,4
 * main.h header file
 * Return:0
 */

void more_numbers()
{
    int number, printNumber;
    for (number = 0; number < 10; number++)
    {
        for (printNumber = 0; printNumber <= 14; printNumber++)
        {
            if (printNumber > 9)
            {
                _putchar('0' + printNumber / 10);
            }
            _putchar('0' + printNumber % 10);
        }
        _putchar('\n');
    }
}
