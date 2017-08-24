#include "main.h"
#include <stdlib.h>

int main(char** args, int charc){
    printf("Hello, World!");
    char * buffer = 0;
    long length;
    FILE* f = fopen("test.txt", "rb");
    if (f)
    {
      fseek (f, 0, SEEK_END);
      length = ftell (f);
      fseek (f, 0, SEEK_SET);
      buffer = malloc (length);
      if (buffer)
      {
        fread (buffer, 1, length, f);
      }
      fclose (f);
    }
    if(buffer){
        printf(buffer);
        free(buffer);
    }    
    return 0;
}

int replaceAbbr(){

}