void main (){
    int a,b,c;

    printf ("Podaj długości odcinków:");
    scanf("%d, %d, %d", &a, &b, &c);

    if (a > b && a > c) {
        if ((b*b) + (c*c) == a*a) {
            printf ("Można zrobić trójkąt");
    
        }else {
            printf (" Nie można zrobic trójkątu");
        }
    }else if (b > a && b > c) {
        if ((a*a) + (c*c) == b*b) {
            printf ("Można zrobić trójkąt");

        }else {
            printf (" Nie można zrobić trójkata");
        }
    }else{
        if ((a*a) + (b*b) == c*c)  {
            printf ("Można utworzyć trójkąt");
        }else { 
            printf("Nie można utworzyć trójkątu");
        }
    }
}