#include "lab1.h"

/* ------------------------------------------------------------------------------
 *
 *  TASK 1 
 *
 *  YOU NEED TO COMPLETE THIS FUNCTION.
 *
 *  This function returns a pseudo-randomly generated key. 
 * 
 *  Note:
 *      This function mallocs the key variable so that it can return it. Your 
 *      code will need to call free() to avoid memory leaks.
 *
 *  Arguments:
 *      seed: a number to seed the random generation of the key.
 *
 *  Return:
 *      A pointer to a character array on the heap.
 *
 */
unsigned char* generatekey(long long seed) {
    int i; 
    unsigned char *key = (unsigned char*)malloc(sizeof(char) * KEYSIZE);

    printf("%lld\n", seed); 
    srand(seed); // Line A

    for (i = 0; i < KEYSIZE; i++){ 
        key[i] = rand()%256; 
    } 

    return key;
} 
