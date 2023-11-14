#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - sdfgsdf
 * @name:sdfsdf
 * @f:xxcvxcv
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
