/**
 * print_name - a function that prints a name.
 * @name: ..
 * @f: ..
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(*f)(name);

}
