#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

typedef struct
{
    int pontos;
    char nome[20];
} Ranking;

void textColor(int cor) // Função para mudar a cor da letra
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Ranking ranking[10];
    int opcao, num = 0;

    do
    {
        system("cls");
        textColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        printf("\n\t\t       NIBIRUS ATTACKS!"); // Mostra na tela o menu do jogo
        printf("\n\n\t\t\t 1.Iniciar");
        printf("\n\t\t\t 2.Ranking");
        printf("\n\t\t\t 3.Sobre");
        printf("\n\t\t\t 4.Créditos");
        printf("\n\n\t\t\t 0.Sair\n\n\n");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) // Determina o que ira ocorrer de acordo com o comando executado
        {
        case 1:
            do
            {
                textColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                system("cls");
                printf("Jogo esta em desenvolvimento , volte em breve!");
                printf("\n\nDigite 0 para retornar ao menu de opções.\n");
                scanf("%d", &opcao);
                if (opcao == 0) // Condição para voltar para o menu
                {
                    break;
                }
                else
                {
                    printf("\nDigite um comando válido\n");
                    system("pause");
                }
            } while (opcao != 0);
            opcao = 1;
            break;

        case 2:
            do
            {
                textColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
                system("cls");
                printf("\t\tRanking.");
                if (ranking[num].pontos == 0)
                {
                    printf("\n\n\tSem pontuação registrada.");
                }
                else
                {
                    printf("\n\n\t%s = %d", ranking[num].nome, ranking[num].pontos);
                    num++;
                }
                printf("\n\nDigite 1 para registrar nova pontuação.\n");
                printf("Digite 0 para retornar ao menu de opções.\n");
                scanf("%d", &opcao);
                getchar();

                switch (opcao)
                {
                case 0:
                    break;

                case 1:
                    system("cls");
                    printf("Insira um Nick para usar no jogo: ");
                    gets(ranking[num].nome);
                    printf("Insira sua pontuação: ");
                    scanf("%d", &ranking[num].pontos);
                    break;

                default:
                    printf("\n\nDigite um comando válido\n");
                    system("pause");
                    break;
                }
            } while (opcao != 0);
            opcao = 2;
            break;

        case 3:
            do
            {
                textColor(FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
                system("cls");
                printf("\t\t\t\t\tHistoria do jogo\n\n");
                printf("\tUm Ovni alienígena tem a missão de enfrentar os habitantes de um planeta\n");
                printf("\tque vai se autodestruir para aniquilar com a natureza da via láctea, os\n");
                printf("\thabitantes enfurecidos com a iniciativa deste ovni, estão bloqueando a rota\n");
                printf("\tque dá acesso ao planeta, assim sendo está tendo uma guerra espacial\n");
                printf("\tentre os nibirus e a espaçonave alienígena (Ovni).\n");
                printf("\n\nDigite 0 para retornar ao menu de opções.\n");
                scanf("%d", &opcao);
                if (opcao == 0)
                { // Condição para voltar para o menu
                    break;
                }
                else
                {
                    printf("\nDigite um comando válido\n");
                    system("pause");
                }
            } while (opcao != 0);
            opcao = 3;
            break;

        case 4:
            do
            {
                textColor(FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                system("cls");
                printf("Desenvolvedores do jogo:");
                printf("\n\n    Dany, Ahmad, Josué, André");
                printf("\n\nDigite 0 para retornar ao menu de opções.\n");
                scanf("%d", &opcao);
                if (opcao == 0)
                { // Condição para voltar para o menu
                    break;
                }
                else
                {
                    printf("\nDigite um comando válido\n");
                    system("pause");
                }
            } while (opcao != 0);
            opcao = 4;
            break;

        case 0: // Case 0 não chama nenhuma função apenas sai do loop
            break;

        default:
            printf("\nOpção invalida!\n\n");
            system("pause");
        }
    } while (opcao != 0); // Continua no menu enquanto a tecla de saída não for pressionada

    return 0;
}