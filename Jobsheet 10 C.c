#include <stdio.h>
int main (){
int NIM [2][3][4];
int i, j,k;
for (i = 0; i< 2; i++){
for (j = 0; j <3; j++){
for (k= 0 ; k <4 ; k++)
{
printf ("NIM [%d][%d][%d] = ",i,j,k) ;
scanf("%i%j%k",&NIM[i][j][k]) ;
	 }
	 printf ("\n") ;
}
}
}
