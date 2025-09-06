/*
 * DO NOT MODIFY THIS HEADER FILE
 */

#ifndef LAB1
#define LAB1

#include <stdio.h> 
#include <stdlib.h> 
#include <stdint.h>
#include <time.h> 
#include <string.h>

#define KEYSIZE 16

unsigned char* generatekey(long long seed);
unsigned char* findkey(int argc, char** argv);
unsigned char* readrandom();

void phex(uint8_t* str, int len);

#endif