#include <stdio.h>
#include <math.h>

int main() {

    float peso;

    printf("Ingresa tu peso \n");
    scanf("%f", &peso);
    
    float altura;

    printf("Ingresa tu altura \n");
    scanf("%f", &altura);
    
    float IMC;

    IMC = peso / (altura*altura);

    if (IMC >= 40){
        printf("Obesidad3");
    }else if (IMC >= 35){
        printf("Obesidad2");
    }else if (IMC >= 30){
        printf("Obesidad1");
    }else if (IMC >= 25){
        printf("Sobrepeso");
    }else if (IMC >= 18.5){
        printf("Normal");
    }else{
        printf("Bajo peso");
    }

return 0;
}
