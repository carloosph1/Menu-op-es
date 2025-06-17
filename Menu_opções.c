#include <stdio.h>
#include <stdlib.h> 

void calculadora_simples(){
    char c;
    float x, y; 
    printf("=====CALCULADORA SIMPLES:=====\n\nInforme a operação que deseja efetuar(+,-,x,/): ");
    scanf(" %c", &c);
    if (c != '+' && c != '-' && c != 'x' && c != '/'){
    printf("operador inválido\n");
    }else{
    printf("\ninforme o primeiro valor: ");
    scanf("%f", &x);
    printf("\ninforme o segundo valor: ");
    scanf("%f", &y);
}
    float resultado;
    switch (c){
        case '+':
        resultado = x + y;
        printf("\nvalor da soma: %.2f", resultado);
        break;
        case '-':
        resultado = x - y;
        printf("\nvalor da subtração: %.2f", resultado);
        break;
        case 'x':
        resultado = x * y;
        printf("\nvalor da multiplicação: %.2f", resultado);
        break;
        case '/':
        if (y <= 0) { 
                printf("\nErro: Divisão não existe.\n");
            } else {
                resultado = x / y;
                printf("\nValor da divisao: %.2f\n", resultado); 
            }
            break;
        default: 
        printf("Por favor, use +, -, x ou /.\n");
    }
}
void calculo_fatorial(){
    long int valor_fat, fat = 1;
    printf("\n=====CALCULO DE FATORIAL=====");
    printf("\ninforme o valor a ser fatorado: ");
    scanf("%ld", &valor_fat); 
    for(int i = 1; i < valor_fat + 1 ; i++){
        fat *= i;
    }
    printf("\nfatorial de %ld igual a: %ld", valor_fat, fat);
}
void calculo_media(){
        float soma_vetores, media;
        int quanti_notas;
        printf("\ninforme a quantidade de notas: ");
        scanf("%d", &quanti_notas);
        int vetor_quanti[quanti_notas];
        for(int i = 0; i < quanti_notas; i++){
        printf("\ninforme a %d° nota: ", i+1);
        scanf("%d", &vetor_quanti[i]);
        soma_vetores += vetor_quanti[i];
        media = soma_vetores/quanti_notas;
        printf("\nA MEDIA É IGUAL A: %.2f", media);
       
        }
}
void conversor() {
    float temperatura_entrada; 
    int opcao;                 
    do{
       printf("Selecione a unidade para a qual deseja converter:\n");
        printf("1- Para Fahrenheit\n");
        printf("2- Para Celsius\n");
        printf("3- Para Kelvin\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 3) {
            printf("Opcao invalida! Por favor, digite 1, 2 ou 3.\n");
        }
    } while (opcao < 1 || opcao > 3);

    printf("Digite a temperatura a ser convertida: ");
    scanf("%f", &temperatura_entrada);
    switch (opcao) {
        case 1: { 
            float fahrenheit = (temperatura_entrada * 1.8) + 32;
            printf("Temperatura em Fahrenheit: %.2f F\n", fahrenheit);
            break;
        }
        case 2: { 
            float celsius = (temperatura_entrada - 32) * 5.0 / 9.0;
            printf("Temperatura em Celsius: %.2f C\n", celsius);
            break;
        }
        case 3: { 
            float kelvin = temperatura_entrada + 273.15;
            printf("Temperatura em Kelvin: %.2f K\n", kelvin);
            break;
        }
        default:
            printf("Erro: Opcao nao reconhecida.\n");
            break;
    }
}
void calculo_tabuada(){
    int x; 
    printf("taboada: informe o valor: ");
        scanf("%d", &x);
        while(getchar() != '\n');
        for(int i = 1; i <=10; i++){
            printf("%d X %d = %d", x, i, x*i);
        }
}
void calculo_imparoupar(){
    int z;
    printf("\n===========ESCOLHA===========\n========IMPAR OU PAR=========");
        printf("\nInforme o número de sua escolha: ");
        scanf("%d", &z);
        while(getchar() != '\n');
        if(z%2==0){
            printf("%d É um número PAR", z);
        }else{
            printf("%d É um número IMPAR", z);
        }
}
void menu_principal(int opcao){
    int retorno = 1;
    do{
    printf("\n===== MENU INICIAR =====\n");
    printf("escolha as opções que quer trabalhar: \n");
printf("1.Calculadora Simples.\n2.fatorial.\n3.Conversão em temperaturas.\n4.Taboada.\n5.Impar ou par.\n6.Calculo da média entre notas.\n7.sair do programa.\n-------------------------\nInforme o número correspondente a ação:\n");
scanf("%d", &opcao);
while(getchar() != '\n');
    switch (opcao){
        case 1:
        float x, y; 
        char c;
        calculadora_simples(x,y,c);
        break;
        case 2:
        calculo_fatorial(x);
        break; 
        
        case 3:
        conversor();
        break;
        
        case 4:
        calculo_tabuada();
        break;
        
        case 5:
        calculo_imparoupar();
        break;
        
        case 6:
        calculo_media();
        break;
        
        case 7:
        retorno = 5; 
        break;
        
        default: 
        printf("\nValor não compatível\n");
        }
        int sim_ou_nao;
        printf("\ndeseja continuar?\n 1.sim\n 2.não\n-> ");
        scanf(" %d", &sim_ou_nao);
        if(sim_ou_nao == 2){
            printf("\n OBRIGADO PELA PARTICIPAÇÃO");
            retorno = 0; 
        }else{
            printf("\nRETORNANDO AO MENU\n");
            retorno = 1;
    }
}while(retorno == 1);
}

int main(){
    int opcao;
    menu_principal(opcao);
    return 0;
}
