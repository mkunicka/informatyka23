void main (){
int number1, number2, number3;

    printf("Podaj liczbę:");
    scanf("%d", &number1);
    printf("Podaj drugą liczbę:");
    scanf("%d", &number2);
    printf ("Podaj trzecią liczbę:");
    scanf("%d", &number3);
    

    if(number1 > number2 && number1 > number3){
        printf("Największa: %d \n", number1);

    }else if (number2 > number1 && number2 > number3){
        printf("Największa: %d \n", number2);

    }else {
    printf("Njawiększa: %d \n", number3);
    }
    
    }