#include <stdio.h>

/* przepisz wejscie na wyjscie; ver 1 */
int main ()
{
int c;

c = getchar();
while (c != EOF) {
putchar(c);
c = getchar();
}
}
