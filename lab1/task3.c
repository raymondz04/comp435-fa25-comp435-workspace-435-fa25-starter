#include "lab1.h"

#define LEN 16 // 128 bits

/* ------------------------------------------------------------------------------
 *
 *  TASK 3
 *
 *  YOU NEED TO COMPLETE THIS FUNCTION.
 *
 *  This function returns a randomly generated key
 * 
 *  Note:
 *      This function mallocs the key variable so that it can return it. Your 
 *      code will need to call free() to avoid memory leaks.
 *
 *  Arguments:
 *      N/A
 *
 *  Return:
 *      A pointer to a character array on the heap.
 *
 */
unsigned char* readrandom() {
   unsigned char *key = (unsigned char *)malloc(sizeof(unsigned char) * LEN);
   FILE* random = fopen("/dev/urandom", "r"); 
   fopen("/dev/urandom", "r"); 
   fread(key, sizeof(unsigned char) * LEN, 1, random); 
   fclose(random);

   return key;
}
