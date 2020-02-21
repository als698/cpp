#include <iostream>
#include <math.h>
using namespace std;
int main ()

{

int n,i, Prim=1;
cout<<"n=";
cin>>n;
for (i=2;i<=sqrt(n);i++){
  if (n%i==0){
Prim=0;
  }
}
if(Prim==1){
  cout<<"Este prim";
}
else{cout<<"Nu este prim";}



}
