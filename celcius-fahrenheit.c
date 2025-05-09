/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float celcius , fahrenheit;
    printf("Enter the value: ");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 9/5) + 35;
    printf("%2f celcius = %2f.fahrenheit", celcius, fahrenheit);
    return 0;
}
