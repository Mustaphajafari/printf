#include "main.h"
/**
 * character_s - search for match and execute for the associate function
 * @suivant: the character to match
 * @dino: the position of next
 * Return: null
 **/
int (*character_s(const char *suivant, int dino))(va_list)
{
	int i;
	spc_t options[] = {
		{"s", handle_string},
		{"c", handle_char},
		{"i", print_num},
		{"d", print_num},
		{"u", handle_unsigned},
		{"r", print_rev},
		{NULL, NULL}
	};

	for (i = 0; options[i].match != NULL; i++)
		if (options[i].match[0] == suivant[dino])
			return (options[i].function);
	return (NULL);
}
