//memcpy() is used to copy data from one string to another.
//syntax : memcpy(destination, source, number_of_bytes);

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="hello";
    char str2[20];

    memcpy(str2,str1,strlen(str1)+1);

    printf("%s",str1);
    printf("\n%s",str2);
    


}
