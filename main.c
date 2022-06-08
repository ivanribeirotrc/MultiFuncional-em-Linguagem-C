#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
// Declarando a funcao
int menu_escolhas();

// Mensagem de boas vindas ao executar o programa
    printf("====================================================\n");
    printf("=====================Bem-Vindo!=====================\n");
    printf("====================================================\n");
    printf("================Creditos: Ivan Ribeiro==============\n");
    printf("====================================================\n");
    printf("=====================Divirta-se=====================\n");
    printf("====================================================\n");

// Limpeza do console apos mensagem de boas vindas seja lida
    system("PAUSE");
    system("cls");
    menu_escolhas();
}

int menu_escolhas()
{
    int e_menu;

    printf("Escolha o que deseja fazer: \n");
    printf("(1)Calculadora | (2)Conversor de moeda | (3)Conversor de temperatura | (4)Calculadora IMC |\n");
    scanf("%d",&e_menu);

// Definindo a funcao
    int menu_calculadora(int e_calculadora);
    int menu_conversor(float e_moeda, float e_moeda2);
    int menu_temperatura(float e_temperatura, float e_temperatura2);
    void menu_imc();

    if(e_menu == 1)
    {
        int calculadora;
        printf("Voce selecionou: %d - Calculadora \n",e_menu);
        printf("Escolha a operacao desejada: (1)Adicao | (2)Subtracao | (3)Multiplicacao | (4)Divisao | (5)Radiciacao | \n");
        scanf("%d",&calculadora);
        menu_calculadora(calculadora);
    }
    else if(e_menu == 2)
    {
        float m1,m2;
        printf("Voce selecionou: %d - Conversor de moeda \n",e_menu);
        printf("Escolha qual moeda deseja converter: (1)Real | (2)Dolar | (3)Euro | \n");
        scanf("%f",&m1);
        printf("Escolha para qual moeda sera convertida: (1)Real | (2)Dolar | (3)Euro | \n");
        scanf("%f",&m2);
        menu_conversor(m1,m2);
    }
    else if(e_menu == 3)
    {
        float t1,t2;
        printf("Voce selecionou: %d - Conversor de temperatura \n",e_menu);
        printf("Escolha qual temperatura deseja converter: (1)Celsius | (2)Fahrenheit | (3)Kelvin | \n");
        scanf("%f",&t1);
        printf("Escolha para qual temperatura sera convertida: (1)Celsius | (2)Fahrenheit | (3)Kelvin | \n");
        scanf("%f",&t2);
        menu_temperatura(t1,t2);
    }
    else if(e_menu == 4)
    {
        printf("Voce selecionou: %d - Calculadora IMC \n",e_menu);
        menu_imc();
    }
    return 0;
}
int menu_calculadora(int e_calculadora)
{
    if(e_calculadora == 1)
    {
        float n1,n2,resultado;
        int menu;
        printf("Voce selecionou: %d - Adicao \n",e_calculadora);
        printf("Insira o primeiro valor: \n");
        scanf("%f",&n1);
        printf("Insira o segundo valor: \n");
        scanf("%f",&n2);
        resultado = n1 + n2;
        printf("Resultado da adicao: %4.2f \n",resultado);
        printf("(1)Nova Operacao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_calculadora(1);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_calculadora == 2)
    {
        float n1,n2,resultado;
        int menu;
        printf("Voce selecionou: %d - Subtracao \n",e_calculadora);
        printf("Insira o primeiro valor: \n");
        scanf("%f",&n1);
        printf("Insira o segundo valor: \n");
        scanf("%f",&n2);
        resultado = n1 - n2;
        printf("Resultado da subtracao: %4.2f \n",resultado);
        printf("(1)Nova Operacao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_calculadora(2);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_calculadora == 3)
    {
        float n1,n2,resultado;
        int menu;
        printf("Voce selecionou: %d - Multiplicacao \n",e_calculadora);
        printf("Insira o primeiro valor: \n");
        scanf("%f",&n1);
        printf("Insira o segundo valor: \n");
        scanf("%f",&n2);
        resultado = n1 * n2;
        printf("Resultado da multiplicacao: %4.2f \n",resultado);
        printf("(1)Nova Operacao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_calculadora(3);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_calculadora == 4)
    {
        float n1,n2,resultado;
        int menu;
        printf("Voce selecionou: %d - Divisao \n",e_calculadora);
        printf("Insira o primeiro valor: \n");
        scanf("%f",&n1);
        printf("Insira o segundo valor: \n");
        scanf("%f",&n2);
        resultado = n1 / n2;
        printf("Resultado da divisao: %4.2f \n",resultado);
        printf("(1)Nova Operacao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_calculadora(4);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_calculadora == 5)
    {
        int n1;
        float resultado,resultado2;
        int menu;
        printf("Voce selecionou: %d - Radiciacao \n",e_calculadora);
        printf("Insira o valor desejado: \n");
        scanf("%d",&n1);
        resultado = sqrt(n1);
        resultado2 = cbrt(n1);
        printf("O resultado da raiz quadrada do numero: %d sera: %f \n",n1,resultado);
        printf("O resultado da raiz cubica do numero: %d sera: %f \n",n1,resultado2);
        printf("(1)Nova Operacao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_calculadora(5);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    return 0;
}
int menu_conversor(float e_moeda, float e_moeda2)
{
    if(e_moeda == 1 && e_moeda2 == 2)
    {
        float v_moeda, v_resultado;
        int menu;
        printf("Insira o valor que deseja converter: \n");
        scanf("%f",&v_moeda);
        v_resultado = v_moeda * 0.18;
        printf("O valor de %4.1f Reais apos a conversao sera: %4.1f Dolares \n",v_moeda, v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_conversor(1,2);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_moeda == 1 && e_moeda2 == 3)
    {
        float v_moeda, v_resultado;
        int menu;
        printf("Insira o valor que deseja converter: \n");
        scanf("%f",&v_moeda);
        v_resultado = v_moeda * 0.15;
        printf("O valor de %4.1f Reais apos a conversao sera: %4.1f Euros \n",v_moeda, v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_conversor(1,3);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_moeda == 2 && e_moeda2 == 1)
    {
        float v_moeda, v_resultado;
        int menu;
        printf("Insira o valor que deseja converter: \n");
        scanf("%f",&v_moeda);
        v_resultado = v_moeda * 5.59;
        printf("O valor de %4.1f Dolares apos a conversao sera: %4.1f Reais \n",v_moeda, v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_conversor(2,1);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_moeda == 2 && e_moeda2 == 3)
    {
        float v_moeda, v_resultado;
        int menu;
        printf("Insira o valor que deseja converter: \n");
        scanf("%f",&v_moeda);
        v_resultado = v_moeda * 0.85;
        printf("O valor de %4.1f Dolares apos a conversao sera: %4.1f Euros \n",v_moeda, v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_conversor(2,3);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_moeda == 3 && e_moeda2 == 1)
    {
        float v_moeda, v_resultado;
        int menu;
        printf("Insira o valor que deseja converter: \n");
        scanf("%f",&v_moeda);
        v_resultado = v_moeda * 6.61;
        printf("O valor de %4.1f Euros apos a conversao sera: %4.1f Reais \n",v_moeda, v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_conversor(3,1);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_moeda == 3 && e_moeda2 == 2)
    {
        float v_moeda, v_resultado;
        int menu;
        printf("Insira o valor que deseja converter: \n");
        scanf("%f",&v_moeda);
        v_resultado = v_moeda * 1.18;
        printf("O valor de %4.1f Euros apos a conversao sera: %4.1f Dolares \n",v_moeda, v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_conversor(3,2);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }

    return 0;
}
int menu_temperatura(float e_temperatura, float e_temperatura2)
{
    if(e_temperatura == 1 && e_temperatura2 == 2)
    {
        float v_temperatura, v_resultado;
        int menu;
        printf("Insira o valor da temperatura: \n");
        scanf("%f",&v_temperatura);
        v_resultado = (v_temperatura*9/5)+32;
        printf("O valor de %4.1f G.Celsius resulta em: %4.1f G.Fahrenheit \n",v_temperatura,v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_temperatura(1,2);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_temperatura == 1 && e_temperatura2 == 3)
    {
        float v_temperatura, v_resultado;
        int menu;
        printf("Insira o valor da temperatura: \n");
        scanf("%f",&v_temperatura);
        v_resultado = v_temperatura+273.15;
        printf("O valor de %4.1f G.Celsius resulta em: %4.1f G.Kelvin \n",v_temperatura,v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_temperatura(1,3);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_temperatura == 2 && e_temperatura2 == 1)
    {
        float v_temperatura, v_resultado;
        int menu;
        printf("Insira o valor da temperatura: \n");
        scanf("%f",&v_temperatura);
        v_resultado = (v_temperatura-32)*5/9;
        printf("O valor de %4.1f G.Fahrenheit resulta em: %4.1f G.Celsius \n",v_temperatura,v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_temperatura(2,1);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_temperatura == 2 && e_temperatura2 == 3)
    {
        float v_temperatura, v_resultado;
        int menu;
        printf("Insira o valor da temperatura: \n");
        scanf("%f",&v_temperatura);
        v_resultado = (v_temperatura-32)*5/9+273.15;
        printf("O valor de %4.1f G.Fahrenheit resulta em: %4.1f G.Kelvin \n",v_temperatura,v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_temperatura(2,3);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_temperatura == 3 && e_temperatura2 == 1)
    {
        float v_temperatura, v_resultado;
        int menu;
        printf("Insira o valor da temperatura: \n");
        scanf("%f",&v_temperatura);
        v_resultado = v_temperatura-273.15;
        printf("O valor de %4.1f G.Kelvin resulta em: %4.1f G.Celsius \n",v_temperatura,v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_temperatura(3,1);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(e_temperatura == 3 && e_temperatura2 == 2)
    {
        float v_temperatura, v_resultado;
        int menu;
        printf("Insira o valor da temperatura: \n");
        scanf("%f",&v_temperatura);
        v_resultado = (v_temperatura-273.15)*9/5+32;
        printf("O valor de %4.1f G.Kelvin resulta em: %4.1f G.Fahrenheit \n",v_temperatura,v_resultado);
        printf("(1)Nova conversao | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_temperatura(3,2);
            break;
        case 2:
            system("PAUSE");
            system("cls");
            main();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            return 0;
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    return 0;
}
void menu_imc()
{
    int menu;
    float peso,altura,rimc;

    printf("Insira seu peso: ");
    scanf("%f",&peso);
    printf("Insira sua altura: ");
    scanf("%f",&altura);
    rimc = peso / (altura * altura);

    if(rimc < 18.5)
    {
        printf("IMC = %.2f - Abaixo do peso ideal. \n",rimc);
        printf("(1)Calcular novamente | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_imc();
            break;
        case 2:
            system("PAUSE");
            system("cls");
            menu_escolhas();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(rimc >= 18.5 && rimc <= 24.9)
    {
        printf("IMC = %.2f - Normal. \n",rimc);
        printf("(1)Calcular novamente | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_imc();
            break;
        case 2:
            system("PAUSE");
            system("cls");
            menu_escolhas();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(rimc >= 25.0 && rimc <= 29.9)
    {
        printf("IMC = %.2f - Acima do peso ideal. \n",rimc);
        printf("(1)Calcular novamente | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_imc();
            break;
        case 2:
            system("PAUSE");
            system("cls");
            menu_escolhas();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(rimc >= 30.0 && rimc <= 34.9)
    {
        printf("IMC = %.2f - Acima do peso (Obesidade I). \n",rimc);
        printf("(1)Calcular novamente | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_imc();
            break;
        case 2:
            system("PAUSE");
            system("cls");
            menu_escolhas();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(rimc >= 35.0 && rimc <= 39.9)
    {
        printf("IMC = %.2f - Acima do peso (Obesidade II). \n",rimc);
        printf("(1)Calcular novamente | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_imc();
            break;
        case 2:
            system("PAUSE");
            system("cls");
            menu_escolhas();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
    else if(rimc > 40.0)
    {
        printf("IMC = %.2f - Acima do peso (Obesidade III). \n",rimc);
        printf("(1)Calcular novamente | (2)Menu Inicial | (3)Sair \n");
        scanf("%d",&menu);
        switch(menu)
        {
        case 1:
            system("PAUSE");
            system("cls");
            menu_imc();
            break;
        case 2:
            system("PAUSE");
            system("cls");
            menu_escolhas();
            break;
        case 3:
            printf("Obrigado por utilizar meu programa!");
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    }
}
