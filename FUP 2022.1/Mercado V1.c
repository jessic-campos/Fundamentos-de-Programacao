// | 22 tests run/13 tests passed |

#include <stdio.h>
#include <math.h>

int main (){

float v, j1, j2;

scanf ("%f %f %f", &v, & j1, &j2);

if (v - j1<  v - j2) 
printf ("primeiro");

else if (v - j1>  v - j2)
printf ("segundo") ;

else printf ("empate") ;

return 0;

}
