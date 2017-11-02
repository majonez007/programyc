#include <stdio.h>

/*wpisz zestawienie temperatur Farenheita-Celsjusza
dla fahr = 0, 20, ..., 300; wersja zmiennopozycyjna */
main()
{
	float fahr, celsius;
	int lower, upper, step,
	
	lower = 0; /* dolna granica temperatur */
	upper = 300; /* górna granica */
	step = 20; /* rozmiar kroku */

	fahr = lower;
	while (fahr <= upper) {
	celsius = (5.0/9.0) * (fahr-32.0);
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr = fahr + step;
	}
}
