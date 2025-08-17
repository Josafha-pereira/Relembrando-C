#include <stdio.h>
#include <string.h>

// revisando C
double Soma(double a, double b);
double Subtrair(double a, double b);
void Pergunta(double *pe1, double *pe2);

int main() {
     double x=0, y=0;
     char p[10];

     printf("voce gostaria de fazer uma soma  ou subtracao? (soma/subtracao): ");
     fgets(p, 10, stdin);
     
     p[strcspn(p, "\n")] = 0;

     if (strcmp(p, "soma") == 0){

        Pergunta(&x, &y);

        printf("O resultado é: %.2f\n", Soma(x, y));
        

     }

     if (strcmp(p, "subtracao") == 0){

        Pergunta(&x, &y);

        printf("O resultado é: %.2f\n", Subtrair(x, y));
        

     }


}

double Soma (double a, double b) {

    return a + b;
}

double Subtrair (double a, double b) {

    return a - b;
}
void Pergunta(double *pe1, double *pe2){

    printf("digite o primeiro numero: "); 
    scanf("%lf", pe1);

    printf("digite o segundo numero: "); 
    scanf("%lf", pe2);


}