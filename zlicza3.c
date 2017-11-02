#include <stdio.h>
/*zlicz wiersze wejsciowe */
int main()
{
int c, nl;
nl = 0;
while ((c = getchar()) != EOF)
if (c == '\n')
printf("%d\n", nl);
}


