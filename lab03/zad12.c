void main (){
    int number;

    printf("Podaj liczbę:");
    scanf ("%d", &number);

for (int i = 2; i < 7; i++) {
    if (number%i == 0) {
        printf ("Dzieli się przez %d\n", i);
        return;
    }
}
printf ("Nie dzieli się przez żadną \n");
}