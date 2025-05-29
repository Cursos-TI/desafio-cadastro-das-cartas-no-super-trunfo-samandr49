
    #include <stdio.h>

   int main(){  
 char estado;
 char carta;
 char cidade;
 int populacao;
 float area;
 float PIB;
 int tursticos;
 
 printf("Digite a letra que deseja utilizar para identificar o primeiro estado (A - H): \n");
 scanf("%c", &letra1);

 printf("Digite o nome deste estado: \n");
 scanf(" %49s", nomeest1);

    printf("Digite o número da primeira cidade, de %s (1 a 4): \n", nomeest1);
        scanf(" %d", &numero11);

 printf("Digite o nome da primeira cidade, de %s: \n", nomeest1);
        scanf(" %49s", nomecid11);

  printf("Digite a população de %s: \n", nomecid11);
        scanf(" %d", &populacao11);

   printf("Digite a área de %s em Km2: \n", nomecid11);
        scanf(" %f", &area11);

    printf("Digite o PIB de %s em reais: \n", nomecid11);
        scanf(" %f", &pib11);

    printf("Digite o número de pontos turísticos em %s: \n", nomecid11);
        scanf(" %d", &turistico11);















}






    