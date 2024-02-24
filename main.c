#include <stdint.h>
#include <unistd.h>
#include <stdio.h>

const unsigned i = 15;

#define N i > 1 ? "numeros" : "numero"
#define C(x, m) (m * x)

enum semanas{SEGUNDA = 1, TERCA, QUARTA, QUINTA, SEXTA, SABADO, DOMINGO}semana;

void getByDiaID() {
    printf("Digite o numero do semana: ");
    scanf("%d",&semana);

    switch (semana) {
        case SEGUNDA:
            printf("%d - Segunda-Feira\n", semana);
        break;
        case TERCA:
            printf("%d - Terca-Feira\n", semana);
        break;
        case QUARTA:
            printf("%d - Quarta-Feira\n", semana);
        break;
        case QUINTA:
            printf("%d - Quinta-Feira\n", semana);
        break;
        case SEXTA:
            printf("%d - Sexta-Feira\n", semana);
        break;
        case SABADO:
            printf("%d - Sabado-Feira\n", semana);
        break;
        case DOMINGO:
            printf("%d - Domingo-Feira\n", semana);
        break;
    }
}

int main() {

    int i1 = 1;
    int i2 = 2;
    int mut = C(i1, i2);


    getByDiaID();
    printf("Hello World!\nTemos %i %s\nMultiplicacao: %i", i, N, mut);

    sleep(3);
    return 0;
}