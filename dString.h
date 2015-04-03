/*     dArray.h
 *     by Jon Atkins and Karan Singhal, 1/27/14
 *     Assignment `
 *
 *     Dynamic array
 */ 

#ifndef DSTRING_H
#define DSTRING_H

#include <stdio.h>
#include <stdlib.h>

/*
        This struct includes...
*/
typedef struct {
        char* array;
        /* size_t is the size (in bytes)*/
        size_t size;
        size_t capacity;
} dString;

void initialize_dString(dString* s, size_t initCapacity);
void add_letter_to_dString(dString* s, char letter);
void free_dString(dString* a);

#endif