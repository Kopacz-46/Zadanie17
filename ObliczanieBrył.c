#include <stdio.h>

float cuboid_volume(float a, float b, float c){
return (a*b*c);

}

float sphere_volume (float r){
return ((4.0/3.0)*3.1415926535*(r*r*r));
}

int main () {
    float a, b, c, r;
    char command;



    while (1) {

    printf("1 - objetosc prostopadloscianu\n");
    printf("2 - objetosc kuli \n");
    printf("3 - wyjscie \n");

        scanf("%1d", &command);
        if (command == 1){
        printf("podaj dlugosc podstawy twojego prostopadloscianu (a) \n");
        scanf("%f", &a);

    printf("podaj szerokosc podstawy twojego prostopadloscianu (b) \n");
    scanf("%f", &b);

    printf("podaj wysokosc twojego prostopadloscianu (c) \n");
    scanf("%f", &c);

    printf("objetosc twojego prostopadloscianu wynosi: %f\n", cuboid_volume(a, b, c));
    printf("\n Brawo obliczyles objetosc :) \n");

        } else if (command == 2){
     printf("podaj promien kuli (r) \n");
    scanf ("%f", &r);

    printf("objetosc twojej kuli wynosi: %f \n", sphere_volume(r));


        }else if (command == 3){
return(0);
        } else {
        printf("Nie prawidlowy numer polecenia !!! \n");
        }
    }




}
