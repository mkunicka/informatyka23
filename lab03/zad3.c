void main (){
    int number;
    int number2;

    printf("Podaj liczbę:");
    scanf("%d", &number);
    printf("Podaj drugą liczbę:");
    scanf("%d", &number2);

    if (number > number2){
        printf ("Większa: %d \n", number);

    }else {
        printf("Większa: %d \n", number2);
    
    }

}