#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    char * fn = "/tmp/XYZ";
    char buffer[60];
    FILE *fp;
    uid_t ruid = getuid();
    uid_t euid = geteuid(); 
    /* get user input */
    scanf("%50s", buffer );

   if(!access(fn, W_OK)){
       //sleep(20);  
       fp = fopen(fn, "a+"); 
       fwrite("\n", sizeof(char), 1, fp);
       fwrite(buffer, sizeof(char), strlen(buffer), fp);
       fclose(fp);
   }
   else printf("No permission \n");
   seteuid(euid);
}

