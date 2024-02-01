#include "lists.h"

/**
  * add_node - Adds a node at the head of a list.
  *
  * @h: Pointer to head node.
  * @str: Node value.
  * Return: The new node.
 */
list_t *add_node(list_t **h, const char *str)
{
	list_t *added = malloc(sizeof(list_t));

	if (!added)
	{
		return (NULL);
	}
	else
	{
		added->next = *h;
		added->str = strdup(str);
		added->len = _strlen(str);

		*h = added;

		return (added);
	}
}
/**
  * _strlen - Determines length of string.
  *
  * @_str: The particular string.
  * Return: Length.
  */
int _strlen(const char *_str)
{
	int r = 0;

	while (*(_str + r) != '\0')
	{
		r++;
	}
	return (r);
}
