#include <iostream>

using namespace std;

int main ()
{

        int n, inv=0, a;
        cout<<"n=";
        cin>>n;
        a=n;
        while (n!=0) {
                inv=inv*10+n%10;
                n=n/10;
        }
        if (inv==a) {
                cout<<"Este palindrom"<<endl;
        }
        else{cout<<"Nu estepalindrom"<<endl;}







}
