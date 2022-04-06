#include <stdio.h>
#include <string.h>

int main()
{
    char empty[5] = "";
    char null[5] = {'\0'};

    if( strcmp(empty,null)==0 )
        puts("Strings are the same");
    else
        puts("Strings are not the same");

    return(0);
}

