#include "lab1.h"

/* ------------------------------------------------------------------------------
 *
 *  This is a utility function that prints out a byte array as hex. This
 *  is a modified version of a utility function from the tiny-AES-c library. 
 * 
 *  Arguments:
 *      str: a byte array with a length of KEYSIZE 
 *
 *  Return:
 *      N/A
 *
 */
void phex(uint8_t* str, int len) {
	for (int i = 0; i < len; ++i) {
		printf("%.2x", str[i]);
	}
	printf("\n");
}