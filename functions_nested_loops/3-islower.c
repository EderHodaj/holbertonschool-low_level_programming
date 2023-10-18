#include "main.h"

/**
 *  * _islower - Entry point
 *   * ctype.h header file
 *    * @c: is parameter
 *     * Return:0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
