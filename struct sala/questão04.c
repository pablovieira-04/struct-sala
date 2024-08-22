#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

typedef struct {
    Ponto sup_esq;  
    Ponto inf_dir; 
} Retangulo;

int main() {
    Retangulo ret;

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &ret.sup_esq.x, &ret.sup_esq.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &ret.inf_dir.x, &ret.inf_dir.y);

    float largura = ret.inf_dir.x - ret.sup_esq.x;
    float altura = ret.sup_esq.y - ret.inf_dir.y;

    float area = largura * altura;
    float perimetro = 2 * (largura + altura);
    float diagonal = sqrt(largura * largura + altura * altura);

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
//
