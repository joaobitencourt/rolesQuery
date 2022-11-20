#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int option;
int run = 1;
char categories[6][11][100] = {
    {"Cargo", "Salário", "FGTS","Decimo Terceiro", "Férias", "1/3 Férias ","Vale Transpote ", "Vale Alimentação", "Uniforme", "EPI"},
    {"PEDREIRO", "2283.36", "182.66", "190.28", "190.28", "63.42", "VARIA", "506.00", "200.00", "300" },
    {"AJUDANTE", "1877.00", "150.16", "156.41", "156.41", "52,12", "VARIA", "506.00", "200.00", "300"}
    };
void manenigFuncs() {
    for (int iColum = 0; iColum < 11; iColum++)
    {
        switch (option) {
            case 0:
                printf("%s  %s\n", categories[0][iColum], categories[1][iColum]);
            break;
            case 1:
                printf(" %s\n", categories[2][iColum]);
            break;
            case 2:
                printf(" %s\n", categories[3][iColum]);
            break;
            case 3:
                printf(" %s\n", categories[4][iColum]);
            break;
            case 4:
                printf(" %s\n", categories[5][iColum]);
            break;
            case 5: 
                printf(" %s\n", categories[6][iColum]);
            break;
             case 6: 
                exit(0);
            break;
        }
    }
}
void menu() {
    char role[6][50] = {"Pedreiro", "Ajudante", "Carpinteiro", "Armador", "Mestre de obras", "Sair"};
  printf("Escolha o Cargo que deseja:\n\n");
  for (int i = 0; i < 6; i++) {
    printf(" %d %s\n", i, role[i]);
  }
  printf("Digite o número referente ao cargo desejada:\n");
  scanf("%d", &option);
  system("pause");
  
}
int main(void) {
    while (run)
    {
        menu();
        manenigFuncs();
        system("pause");
        system("cls");
    }
  return 0;
}