#include <stdio.h>
#include <stdint.h>

int32_t input_lowercase_test_ascii(char str[]);

int main() {
  
  char str[] = "HELLO!!!AAAAÑ"; 
int32_t  ret = input_lowercase_test_ascii(str);
  
	printf("Lowercase: %s\n Is ascii: %d\n",str, ret);



	//Is_ascii: False
	//Lowercase_ascii: “feliz año”


  return 0;
}

int32_t input_lowercase_test_ascii(char str[])
{

 int i = 0;
    while(str[i] != '\0')
    {
    if(str[i] > 64  && str[i] < 91)
    {str[i] += 32;}
    i++;
    }

    int32_t cpi = 1;
    int j = 0;
    while(str[j] != '\0')
    {
    if(str[j] > 127|| str[j] < 0){cpi = 0; break;}
    i++;
    }
    return cpi;

};




