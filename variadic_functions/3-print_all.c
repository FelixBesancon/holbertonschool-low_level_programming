#include "variadic_functions.h"
/**
 * print_all - Prints anything.
 * @format: The type of the argument to print.
 *
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	char char_arg;
	int i = 0, comma = 0, int_arg;
	float float_arg;
	char *string_arg;
	va_list args;

	va_start(args, format);
		while (format != NULL && format[i] != '\0')
		{
			if (comma)
				printf(", ");
			comma = 1;
			switch (format[i])
			{
			case 'c':
				char_arg = va_arg(args, int);
				printf("%c", char_arg);
				break;
			case 'i':
				int_arg = va_arg(args, int);
				printf("%d", int_arg);
				break;
			case 'f':
				float_arg = va_arg(args, double);
				printf("%f", float_arg);
				break;
			case 's':
				string_arg = va_arg(args, char*);
				if (string_arg == NULL)
					string_arg = "(nil)";
				printf("%s", string_arg);
				break;
			default:
				comma = 0;
				break;
			}
		i++;
	}
	printf("\n");
	va_end(args);
}
