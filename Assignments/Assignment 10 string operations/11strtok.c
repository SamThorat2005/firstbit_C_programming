//strtok() - tokanize string

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello hii bye bye";
    char *token=strtok(str," ");

    while(token!=NULL)
    {
        printf("%s\n",token);
        token = strtok(NULL," ");
    }

}