#include <iostream>
using namespace std;
main (){
int NIM [2][3][4];
int i, j,k;
for (i = 0; i< 2; i++){
for (j = 0; j <3; j++){
for (k= 0 ; k <4 ; k++)
{
cout<< "NIM [" <<i<<"][" << j << "][" << k <<"]= " ;
cin >> NIM[i][j][k];
}
cout<<endl;
}
}
}
