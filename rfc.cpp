#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>

char AP[11], AM[11], N[11], rfc[15], D[2], M[2], A[4];

main()
{
printf("\n\n\tIngresa el apellido paterno: ");
gets(AP);
printf("\n\n\tIngresa el apellido materno: ");
gets(AM);
printf("\n\n\tIngresa el nombre: ");
gets(N);
printf("\n\n\tIngresa tu dia de nacimiento: ");
gets(D);
printf("\n\n\tIngresa tu Mes de nacimiento: ");
gets(M);
printf("\n\n\tIngresa tu Año de nacimiento: ");
gets(A);

strupr(AP);
strupr(AM);
strupr(N);

rfc[0] = AP[0];
rfc[1] = AP[1];
rfc[2] = AM[0];
rfc[3] = N[0];
rfc[4] = A[2];
rfc[5] = A[3];
rfc[6] = M[0];
rfc[7] = M[1];
rfc[8] = D[0];
rfc[9] = D[1];


printf("\n\n\tSu nombre es: %s %s %s ",N,AP,AM);
printf("\n\n\tfecha de nacimiento: %s ",A);
printf("\n\n\t\tSu RFC es: %s",rfc);

getch();
} 
