#include <iostream>
using namespace std;
int main ()
{
int x[8],i;
cout<<"masukkan NIM terakhir Anda"<<endl;
for(i=0;i<=8;i++)
{
cout<<"Masukkan nim "<<i+1<<" : ";
cin>>x[i];
}
cout<<endl;
for(i=0;i<=8;i++)
{
cout<<"nim ke- "<<i+1<<" = "<<x[i]<<endl;
} cout<<endl;
return 0;
}
