#include <stdio.h>

float cuboid_volume(float a, float b, float c){
return (a*b*c);

}

int main () {
    float a, b, c;

    printf("podaj dlugosc podstawy twojego prostopadloscianu (a) \n");
    scanf("%f", &a);

    printf("podaj szerokosc podstawy twojego prostopadloscianu (b) \n");
    scanf("%f", &b);

    printf("podaj wysokosc twojego prostopadloscianu (c) \n");
    scanf("%f", &c);

    printf("objetosc twojego prostopadloscianu wynosi: %f\n", cuboid_volume(a, b, c));
    printf("\n Brawo obliczyles objetosc :)");


return(0);
}
