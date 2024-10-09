#include <stdio.h>
#include <string.h>

int main(){
            char name[5];
            fgets(name,5,stdin); // have a null terminator in the last char of the stirng 

            name[strlen(name)-1] = '\0'; // only work if your dont use fgets or is less than the memeory of the string

            printf("your name is %s", name);
            printf("The lengh of the string is: %ld" string(name));

    

    return 0;
}