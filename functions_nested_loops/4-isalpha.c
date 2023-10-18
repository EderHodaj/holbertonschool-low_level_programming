#include "main.h"

/**
 *  * _islower - Entry point
 *   * ctype.h header file
 *    * @c: is parameter
 *     * Return:0
 */
int _isalpha(int c)
{
        if (c >= 'a' && c <= 'z')
        {
                return (1);
        }
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
        else
        {
                return (0);
        }
}
