#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct list_s - Singly linked list.
 * @str: string - (malloc'ed string)
 * @len: length of the string.
 * @next: Points to the next node.
 *
 * Description: Singly linked list node structure.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif