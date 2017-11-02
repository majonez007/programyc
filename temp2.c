#include <stdio.h>

/* zestawienie temperatur Fahrenheita-Celsiusza */
int main()
{
int fahr;

for (fahr = 0; fahr <= 300; fahr = fahr + 20)
printf("%3d %6.1\n", fahr, (5.0/9.0)*(fahr-32));
}
