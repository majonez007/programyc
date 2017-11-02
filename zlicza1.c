#include <stdio.h>
int main()   /*zlicz znaki wejsciowe; ver 1*/
{
long nc;

nc = 0;
while (getchar() != EOF)
++nc;
printf("%ld\n", nc);
}


