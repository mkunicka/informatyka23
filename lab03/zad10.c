void main (){
    int a,b,c;

    printf ("Podaj długości odcinków:");
    scanf("%d, %d, %d", &a, &b, &c);

    if (a > b && a > c) {
        if (a < b + c) {
            printf ("Można zrobić trójkąt");
    
        }else {
            printf (" Nie można zrobic trójkątu");
        }
    }else if (b > a && b > c) {
        if (b < a + c) {
            printf ("Można zrobić trójkąt");

        }else {
            printf (" Nie można zrobić trójkata");
        }
    }else {
        if (c < b + a)  {
            printf ("Można utworzyć trójkąt");
        }else { 
            printf("Nie można utworzyć trójkątu");
        }
    }
}