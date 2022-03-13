#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  //Declaração das variáveis
  float nota1, nota2, nota3, nota4, media;
  
  //Entrada de dados
  printf("\t\t\t\t\Media Escolar\n");
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);

  printf("Digite a terceira nota do aluno: ");
  scanf("%f",&nota3);
  
  printf("Digite a quarta nota do aluno: ");
  scanf("%f",&nota4);
  
  //Processamento
  media = (nota1 + nota2 + nota3 + nota4) / 4;
  
  //Saída
  printf("Obteve a média = %.1f\n",media);
  if(media >= 7){
      printf("Você foi aprovado.");
    }else{
      printf("Você foi reprovado.");
    }
  
  return 0;
}