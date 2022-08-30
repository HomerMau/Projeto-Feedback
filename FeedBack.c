#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===================STRUCT=======================//
struct paciente
{
  int codigo;
  char nome[30];
  char SETOR[14];
  char reclamacao[200];
  char data[10];
  char NReclamacao[200];
};

int main()
{

  //===================STRUCT=======================//
  struct paciente cad[99];

  int i;
  int cont;
  int op;
  char busca[14];
  int acha;

  op = 0;
  i = 0;
  cont = 0;

  //====================FUNÇAO================//
  void cadastro()
  {
    cont = cont + 1;
    for (i = 0; i < cont; i++)
      ;
    {
      printf("O codigo da reclamacao e: %d\n", --i);

      printf("Digite o seu nome: ");
      gets(cad[i].nome);
      fflush(stdin);
      printf("Digite o SETOR do paciente: ");
      gets(cad[i].SETOR);
      fflush(stdin);
      printf("Digite qual a sua reclamacao: ");
      gets(cad[i].reclamacao);
      fflush(stdin);
      printf("Digite a data: ");
      gets(cad[i].data);
      fflush(stdin);
      printf("Digite o numero da reclamacao: ");
      gets(cad[i].NReclamacao);
      fflush(stdin);
      printf("\n\n");
    }
  }

  //====================FUNÇAO================//
  void relatorio()
  {
    for (i = 0; i < cont; i++)
    {
      printf("\nCódigo: %d\n", i);
      printf("Nome: %s\n", cad[i].nome);
      printf("SETOR: %s\n", cad[i].SETOR);
      printf("reclamacao: %s\n", cad[i].reclamacao);
      printf("Data: %s\n", cad[i].data);
      printf("Numero da reclamacao: %d\n", cad[i].NReclamacao);
      printf("========================================");
    }
  }
  //====================FUNÇAO================//
  void buscaCODIGO()
  {
    printf("Digite o CODIGO que deseja buscar: ");
    gets(busca);
    fflush(stdin);

    for (i = 0; i < cont;)
    {

      acha = strcmp(busca, cad[i].NReclamacao);

      if ((acha == 0) && (i < cont))
      {
        system("cls");
        printf("Código: %d\n", i);
        printf("Nome: %s\n", cad[i].nome);
        printf("SETOR: %s\n", cad[i].SETOR);
        printf("reclamacao: %s\n", cad[i].reclamacao);
        printf("Data: %s\n", cad[i].data);
        printf("Numero da reclamacao: %d\n", cad[i].NReclamacao);
        i = cont;
      }

      else
      {
        system("cls");
        printf("\n Reclamacao nao encontrada");
        i = i + 1;
      }
    }
  }
  //====================FUNÇAO================//
  void escolhas()
  {
    printf("\n\n");
    printf("Para voltar pressione ENTER\n");
    getchar();
  }

  //====================INICIO==============//

INICIO:

  system("cls");

  printf("==================================");
  printf("BEM-VINDO AO PROGRAMA DE FEEDBACK DA CPTM!");
  printf("==================================");
  printf("\n\n");

  do
  {

    printf("Por favor, selecione o numero para o que voce deseja fazer:\n");
    printf(" 1 - Cadastrar reclamacao \n");
    printf(" 2 - Mostrar relatorio geral de reclamacoes\n");
    printf(" 3 - Consultar por codigo\n");
    printf(" 4 - Sair\n");

    //====================ESCOLHAS===================//

    scanf("%d", &op);
    fflush(stdin);
    switch (op)
    {
    case 1:
    CASE1:
      system("cls");
      cadastro();

    ESCOLHA:
      printf("Voce deseja cadastrar mais pacientes?\n");
      printf("1 - Sim\n");
      printf("2 - Retornar ao menu principal\n");
      scanf("%d", &op);
      fflush(stdin);
      if (op == 1)
      {
        goto CASE1;
      }
      else if (op == 2)
      {
        goto INICIO;
      }
      else
      {
        system("cls");
        printf("\nOpcao invalida por favor digite novamente:\n\n");

        goto ESCOLHA;
      }
      break;

    case 2:
      system("cls");
      relatorio();

      //====================ESCOLHAS===================//
      escolhas();
      system("cls");

      goto INICIO;

      // printf("pinto");
      break;
    case 3:
      system("cls");
      buscaCODIGO();

      //====================ESCOLHAS===================//
      escolhas();
      system("cls");
      goto INICIO;

      // ("calca");
      break;
    case 4:
      system("cls");
      printf("cagado");
      break;

    default:
      system("cls");
      printf("Opcao invalida por favor digite novamente:\n\n");
      break;
    }

  } while (op >= 5);
  return (0);
}