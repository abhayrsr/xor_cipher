#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;

    fptr = fopen("demo_text.txt", "w");

    if(fptr == NULL){
        printf("Error writing the demo_text.txt file");
        return 1;
    }

    fprintf(fptr, "%s", "abhayrajsingh");
    fclose(fptr);
    
    fptr = fopen("demo_text.txt", "r");

    if(fptr == NULL){
        printf("Error reading the demo_text.txt file");
        return 1;
    }
    
    char buff[100];

    fgets(buff, sizeof(buff), fptr);

    printf("%s", buff);

    printf("x");
    fclose(fptr);
//    fclose(fptr);
    return 0;
}
