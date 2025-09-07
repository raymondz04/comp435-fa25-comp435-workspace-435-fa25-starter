#include "./tiny-AES-c/aes.h"
#include "lab1.h"

/* ------------------------------------------------------------------------------
 *
 *  TASK 2 
 *
 *  YOU NEED TO COMPLETE THIS FUNCTION.
 *
 *  This function finds and returns the key used by Alice to encrypt her tax 
 *  documents. 
 * 
 *  Note: 
 *      Within this function, you can use the generatekey(...) 
 *      function from task 1. Remember, this function allocates space 
 *      for the key that it generates on the stack. For every key you 
 *      generate (except for the one this function returns) you will 
 *      need to call the free() function.
 *
 *  Arguments:
 *      argc: the number of command line arguments.
 *      argv: an array of strings passed in from the command line 
 *
 *  Return:
 *      A pointer to a character array on the heap.
 *
 */
unsigned char* findkey(int argc, char** argv) {
	/* We're using AES 128 so all inputs will be 16 bytes long.
	 * You will need to initialize all components of the plaintext, ciphertext, IV
	 * triple that you accept from the command line arguments. */

	// TODO 1. Initialize and read in arguments.

	/* The AES context structure that is going to be used by the tiny AES API to 
	 * make any encryption or decryption function calls */
	struct AES_ctx ctx;

	// TODO 2. Generate keys.


    // This API call initializes the context with the specific key and IV being used.
    AES_init_ctx_iv(&ctx, key, iv);

    /* This API call encrypts the input buffer named 'plaintext'. 
    * The resulting ciphertext will be written into the input buffer 
    * and the previous plaintext will be overwritten. */
    AES_CBC_encrypt_buffer(&ctx, plaintext, KEYSIZE);

    // TODO 3. Verify match.

    // TODO 4. Return Alice's key
}
