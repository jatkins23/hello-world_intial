/*     fgroups.h
 *     by Jon Atkins and Karan Singhal, 1/27/14
 *     Assignment 1
 *
 *     summary
 */ 

#ifndef FGROUPS_H
#define FGROUPS_H

#include <stdio.h>
#include <stdlib.h>
#include <atom.h>
#include <set.h>
#include <table.h>
#include "dString.h"

/*
expands a string by creating a larger char array and copying over the
elements of the array. Takes in the char array and the size of the string.
*/
char* expand_string(char* string, int size);

#endif