#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===================STRUCT=======================//
struct paciente
{
  int codigo;
  char nome[30];
  char CPF[14];
  char reclamacao[200];
  char data[10];
  char setor[8];
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
      printf("O codigo do protocolo e: %d\n", --i);

      printf("Digite seu nome: ");
      gets(cad[i].nome);
      fflush(stdin);
      printf("Digite seu CPF: ");
      gets(cad[i].CPF);
      fflush(stdin);
      printf("Digite qual a sua reclamacao: ");
      gets(cad[i].reclamacao);
      fflush(stdin);
      printf("Digite a data: ");
      gets(cad[i].data);
      fflush(stdin);
      printf("Digite o seu setor: ");
      gets(cad[i].setor);
      fflush(stdin);
      printf("\n\n");
    }
  }

  //====================FUNÇAO================//
  void relatorio()
  {
    for (i = 0; i < cont; i++)
    {
      printf("\nCodigo: %d\n", i);
      printf("Nome: %s\n", cad[i].nome);
      printf("CPF: %s\n", cad[i].CPF);
      printf("Reclamacao: %s\n", cad[i].reclamacao);
      printf("Data: %s\n", cad[i].data);
      printf("Setor: %s\n", cad[i].setor);
      printf("========================================");
    }
  }
  //====================FUNÇAO================//
  void buscaCPF()
  {
    printf("Digite o CPF que deseja buscar: ");
    gets(busca);
    fflush(stdin);

    for (i = 0; i < cont;)
    {

      acha = strcmp(busca, cad[i].CPF);

      if ((acha == 0) && (i < cont))
      {
        system("clear");
        printf("Codigo: %d\n", i);
        printf("Nome: %s\n", cad[i].nome);
        printf("CPF: %s\n", cad[i].CPF);
        printf("Reclamacao: %s\n", cad[i].reclamacao);
        printf("Data: %s\n", cad[i].data);
        printf("Setor: %s\n", cad[i].setor);
        i = cont;
      }

      else
      {
        system("clear");
        printf("\n CPF nao encontrado");
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

  system("clear");

  printf("==================================");
  printf("BEM-VINDO AO PROGRAMA DE FEEDBACK DA CPTM!!!");
  printf("==================================");
  printf("\n\n");

  do
  {

    printf("Por favor, selecione o numero para o que voce deseja fazer:\n");
    printf(" 1 - Cadastrar FeedBack \n");
    printf(" 2 - Mostrar relatorio geral de Feedback\n");
    printf(" 3 - Consultar por CPF\n");
    printf(" 4 - Sair\n");

    //====================ESCOLHAS===================//

    scanf("%d", &op);
    fflush(stdin);
    switch (op)
    {
    case 1:
    CASE1:
      system("clear");
      cadastro();

    ESCOLHA:
      printf("Voce deseja adicionar outra reclamacao?\n");
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
        system("clear");
        printf("\nOpcao invalida por favor digite novamente:\n\n");

        goto ESCOLHA;
      }
      break;

    case 2:
      system("clear");
      relatorio();

      //====================ESCOLHAS===================//
      escolhas();
      system("clear");

      goto INICIO;

      // printf("pinto");
      break;
    case 3:
      system("clear");
      buscaCPF();

      //====================ESCOLHAS===================//
      escolhas();
      system("clear");
      goto INICIO;

      // ("calca");
      break;
    case 4:
      system("clear");
      printf("Viii!! ta me devendo uma coxinha XD\n (PS... Isso representa o programa fechado)");
      break;

    default:
      system("clear");
      printf("Opcao invalida por favor digite novamente:\n\n");
      break;
    }

  } while (op >= 5);
  return (0);
}