/*     dString.c
 *     by Jon Atkins and Karan Singhal, 1/27/14
 *     Assignment 1
 *
 *     This is essentially a dynamic string class?? tha
 */ 

#include "dString.h"

void initialize_dString(dString* s, size_t initCapacity)
{
        s->array = (char *)malloc(initCapacity * sizeof(char));
        s->size = 0;
        s->capacity = initCapacity;
}

void add_letter_to_dString(dString* s, char letter)
{
        if (s->size == s->capacity) {
                s->capacity *= 2;
                s->array = (char *)realloc(s->array, s->capacity *
                                                                sizeof(char));
        }
        s->array[s->size++] = letter;
}

void free_dString(dString* s)
{
        free(s->array);
        s->array = NULL;
        s->size = s->capacity = 0;
}