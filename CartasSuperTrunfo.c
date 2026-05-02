#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //nome das cidades de 1 e 2 (cidades e codigos das cartas não pode conter espaços)
  char codigo1 [10], codigo2 [10];  //codigo das cartas não ler com &codigonum pois da erro usar sem o & para strings
  char cidade1 [20], cidade2 [20];  //nome das cidades 
  int populacao1, populacao2; //população com num inteiro
  float area1, area2; //area em km² // ler float usa se %f // ler double usa se %lf
  float pib1, pib2; //pib das cidades 
  float capta1, capta2; //pib per capta
  int pontotur1, pontotur2; //quantidade de pontos turisticos
  float densidade1, densidade2; //densidade populacional
  // Área para entrada de dados
  printf ("Este é um menu para cadastro das cartas do desafio Super Trunfo\n");
  printf ("Por favor siga as etapas à seguir para cadastrar até 2 cartas no sistema\n");


  printf ("Agora por favor digite o cadastro da cidade número 1: \n"); //iniciando cadastro da carta número 1
  printf ("Agora digite o código da carta (Utilize uma letra seguido de 3 números sem espaçamento): \n");
  scanf (" %s", codigo1);

  printf ("Agora digite o nome de uma cidade (sem espaço): \n");
  scanf (" %s", cidade1);

  printf ("Digite a população dessa cidade: \n");
  scanf (" %i", &populacao1);

  printf ("Digite agora a área (em Km²): \n");
  scanf (" %f", &area1);

  printf ("Digite agora o PIB da cidade cadastrada (em bi): \n");
  scanf (" %f", &pib1);

  printf ("Para finalizar digite agora a quantidade de pontos turísticos na cidade: \n");
  scanf (" %i", &pontotur1);

  printf ("------------------------------------------------------ \n");
  printf ("----------------------Concluído!---------------------- \n");
  printf ("------------------------------------------------------ \n");

  printf ("Agora por favor digite o cadastro da cidade número 2: \n"); //iniciando cadastro da carta número 2

  printf ("Agora digite o código da carta (Utilize uma letra seguido de 3 números sem espaçamento): \n");
  scanf (" %s", codigo2);

  printf ("Agora digite o nome de uma cidade (sem espaço): \n");
  scanf (" %s", cidade2);

  printf ("Digite a população dessa cidade: \n");
  scanf (" %i", &populacao2);

  printf ("Digite agora a área (em Km²): \n");
  scanf (" %f", &area2);

  printf ("Digite agora o PIB da cidade cadastrada (em bi): \n");
  scanf (" %f", &pib2);

  printf ("Para finalizar digite agora a quantidade de pontos turísticos na cidade: \n");
  scanf (" %i", &pontotur2);

  printf ("------------------------------------------------------ \n");
  printf ("----------------------Concluído!---------------------- \n");
  printf ("------------------------------------------------------ \n");

  // calcular pib per capta 1 e 2

  capta1 = pib1 / (float) populacao1; //como populacao1 náo é num float usa se o casting correto (float) antes da variavel
  capta2 = pib2 / (float) populacao2;

  //calcular densidade populacional 1 e 2

  densidade1 = (float) populacao1 / area1;
  densidade2 = (float) populacao2 / area2;

  //agora mostrar o resultado das cartas 1 e 2 corretamente com todas as informações registradas
  // Área para exibição dos dados da cidade

  //exibindo cadastro da carta Nº 1

  printf ("Sua carta de número 1 é: \n");
  printf ("Código da carta: %s \n", codigo1);
  printf ("Cidade: %s \n", cidade1);
  printf ("Sua população é de: %i Habitantes \n", populacao1); //usa se %d ou %i para int
  printf ("Sua área é de: %.3f Km² \n",area1);
  printf ("O PIB é de: R$ %.2f bi\n", pib1);
  printf ("O PIB per capta é de : %.10f \n", capta1);
  printf ("Na cidade de %s existem %i pontos turísticos \n", cidade1, pontotur1);
  printf ("Densidade populacional de: %.2f Habitantes por Km²\n", densidade1);
  printf ("------------------------------------------------------ \n");

  //exibindo cadastro da carta Nº 2

  printf ("Sua carta de número 2 é: \n");
  printf ("Código da carta: %s \n", codigo2);
  printf ("Cidade: %s \n", cidade2);
  printf ("Sua população é de: %i Habitantes \n", populacao2);
  printf ("Sua área é de: %.3f Km² \n", area2);
  printf ("O PIB é de: R$ %.2f bi\n", pib2);
  printf ("O PIB per capta é de : %.10f \n", capta2); //se der 0 é porque o valor necessita de mais casas decimais
  printf ("Na cidade de %s existem %i pontos turísticos \n", cidade2, pontotur2);
  printf ("Densidade populacional de: %.2f Habitantes por Km²\n", densidade2);
  printf ("------------------------------------------------------ \n");


return 0;
} 
