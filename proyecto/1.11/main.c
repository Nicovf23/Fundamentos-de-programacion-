#include <stdio.h>
#include <stdlib.h>
#include <stdio.h> #include <math.h>
/* Perímetro del triángulo.
El programa, al recibir las coordenadas de los puntos P1, P2 y P3 que ➥corresponden a los vértices de un triángulo, calcula su perímetro.
X1, Y1, X2, Y2, X3, Y3, LA1, LA2, LA3 y PER: variables de tipo real. */
void main(void) {
float X1,Y1,X2,Y2,X3,Y3,LA1,LA2,LA3,PER; printf(“f:”); scanf(“%f %f”, &X1, &Y1 );
printf(“l P2:”); scanf(“%f %f”, &X2, &Y2 );
printf(“t P3:”); scanf(“%f %f”, &X3, &Y3 );
LA1 = sqrt(pow(X1-X2, 2) + LA2 = sqrt(pow(X2-X3, 2) + LA3 = sqrt(pow(X1-X3, 2) + PER = LA1 + LA2 + LA3; printf(“\nEl perímetro del
}
