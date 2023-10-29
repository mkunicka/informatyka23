void main (){
    int a,b,c,d;

    printf("Podaj pierwszą wartość:");
    scanf("%d, %d",&a,&b);
    printf("Podaj drugą wartość:");
    scanf("%d, %d", &c, &d);

    int bok = abs(a - c);
    int bok2 = abs (b - d);

int pole = bok * bok2;
int obw = 2*bok + 2*bok2;

printf("Pole wynosi: %d a obwód : %d \n" , pole, obw);
 
}