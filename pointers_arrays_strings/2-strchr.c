#include <stddef.h>
/**
 * _strchr - dsfsdf
 * @s:dsfgsdg
 * @c:sdfs
 * Return:dfsf
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return (NULL);
}
