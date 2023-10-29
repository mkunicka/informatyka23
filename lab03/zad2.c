void main(){
    int number;
    int number2;

    printf("Podaj liczbę:");
    scanf("%d", &number);
    printf("Podaj drugą liczbę:");
    scanf("%d", &number2);

int dodawanie = number2 + number;
int odejmowanie = number2 - number;
int mnożenie = number2 * number;
int dzielenie = number2 / number;
int reszta = number2 % number;

printf("Wynik dodawania: %d \n", dodawanie);
printf("Wynik odejmowania: %d \n", odejmowanie);
printf("Wynik mnożenia: %d \n", mnożenie);
printf("Wynik dzielenia: %d \n", dzielenie);
printf("Wynik dzielenia z resztą: %d \n", reszta);

}