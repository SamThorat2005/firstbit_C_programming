//strdup() -> duplicate the string copy in new memory location

#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="hello";
    char *copy;
    copy=strdup(str);

    printf("\noriginal:%s",str);
    printf("\ncopy:%s",copy);
}
