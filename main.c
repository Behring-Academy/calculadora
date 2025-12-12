#include <stdio.h>

int main()
{
    int opcao;
    float n1, n2, resultado;
    char continuar;

    do
    {
        printf("===============================\n");
        printf("   Calculadora Simples   \n");
        printf("===============================\n");
        printf("Selecione uma operacao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Opcao: ");

        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 5)
            printf("Opcao invalida. Digite um numero de 1 a 5.\n\n");

    } while (opcao < 1 || opcao > 5);

    switch (opcao)
    {
    case 1:
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        resultado = n1 + n2;
        printf("Resultado: %.2f + %.2f = %.2f\n", n1, n2, resultado);

        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 's' || continuar == 'S')
            main();
        else if (continuar == 'n' || continuar == 'N')
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        else
        {
            do
            {
                printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao: ");
                scanf(" %c", &continuar);
            } while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');

            if (continuar == 's' || continuar == 'S')
                main();
            else
                printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        }
        break;

    case 2:
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        resultado = n1 - n2;
        printf("Resultado: %.2f - %.2f = %.2f\n", n1, n2, resultado);

        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 's' || continuar == 'S')
            main();
        else if (continuar == 'n' || continuar == 'N')
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        else
        {
            do
            {
                printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao: ");
                scanf(" %c", &continuar);
            } while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');

            if (continuar == 's' || continuar == 'S')
                main();
            else
                printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        }
        break;

    case 3:
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        resultado = n1 * n2;
        printf("Resultado: %.2f * %.2f = %.2f\n", n1, n2, resultado);

        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 's' || continuar == 'S')
            main();
        else if (continuar == 'n' || continuar == 'N')
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        else
        {
            do
            {
                printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao: ");
                scanf(" %c", &continuar);
            } while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');

            if (continuar == 's' || continuar == 'S')
                main();
            else
                printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        }
        break;

    case 4:
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        if (n2 == 0)
        {
            printf("Erro: divisao por zero nao eh permitida.\n");

            printf("Deseja realizar outra operacao? (s/n): ");
            scanf(" %c", &continuar);

            if (continuar == 's' || continuar == 'S')
                main();
            else if (continuar == 'n' || continuar == 'N')
                printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            else
            {
                do
                {
                    printf("Resposta invalida. Digite 's' ou 'n': ");
                    scanf(" %c", &continuar);
                } while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');

                if (continuar == 's' || continuar == 'S')
                    main();
                else
                    printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            }
            break;
        }

        resultado = n1 / n2;
        printf("Resultado: %.2f / %.2f = %.2f\n", n1, n2, resultado);

        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 's' || continuar == 'S')
            main();
        else if (continuar == 'n' || continuar == 'N')
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        else
        {
            do
            {
                printf("Resposta invalida. Digite 's' ou 'n': ");
                scanf(" %c", &continuar);
            } while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');

            if (continuar == 's' || continuar == 'S')
                main();
            else
                printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        }
        break;

    case 5:
        printf("Obrigado por usar a calculadora! Ate a proxima.\n");
        break;
    }

    return 0;
}
