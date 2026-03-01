#include "buyer.h"

void Create(const char *filename, const char *data){
    FILE *fp = fopen(filename, "w");
    if(fp)
    {
        fputs(data, fp); 
        fclose(fp);
    }
}

void Display(const char *filename) {
    char buffer[1024]; 
    FILE *fp = fopen(filename, "r");
  
    if(fp)
    {
        while((fgets(buffer, 1024, fp))!=NULL)
        {
            printf("%s", buffer);
        }
        fclose(fp);
    } 
}

void Find(const char *input, const char* output){
    char buffer[1024]; 
    FILE *fp = fopen(input, "r");
    FILE *w = fopen(output, "w");
      
    if(fp && w)
    {
        while((fgets(buffer, 1024, fp))!=NULL)
        {
           if (strstr(buffer, "Брест") != NULL) {
               fputs(buffer, w); 
           }
        }
        fclose(fp);
        fclose(w);
    } 
}
