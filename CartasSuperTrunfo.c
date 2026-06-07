    int opcao;

    printf("\n");
    printf("Escolha o atributo para comparar\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\n");

    switch(opcao){

        case 1:
            printf("Comparação por População\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);

            if(populacao1 > populacao2){
                printf("Resultado: %s venceu!\n", cidade1);
            } else if(populacao2 > populacao1){
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Comparação por Área\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if(area1 > area2){
                printf("Resultado: %s venceu!\n", cidade1);
            } else if(area2 > area1){
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Comparação por PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if(pib1 > pib2){
                printf("Resultado: %s venceu!\n", cidade1);
            } else if(pib2 > pib1){
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Comparação por Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);

            if(pontos1 > pontos2){
                printf("Resultado: %s venceu!\n", cidade1);
            } else if(pontos2 > pontos1){
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Comparação por Densidade Populacional\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            // aqui a regra é ao contrario
            if(densidade1 < densidade2){
                printf("Resultado: %s venceu!\n", cidade1);
            } else if(densidade2 < densidade1){
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção invalida!\n");
    }