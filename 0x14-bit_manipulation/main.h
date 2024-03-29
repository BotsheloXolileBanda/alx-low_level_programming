#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
unsigned int binary_to_uint(const char * b);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
