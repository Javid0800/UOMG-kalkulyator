#include <iostream>
using namespace std;

int main()
{
    double b1,b2,b3,b4,b5,b6,k1,k2,k3,k4,k5,k6,cavab_suret,cavab_mexrec,cavab;
    cout<<"Ümumi Bal və Kreditı: ";
    cin>>b1>>k1;
    cout<<"Ümumi Bal və Kreditı: ";
    cin>>b2>>k2;
    cout<<"Ümumi Bal və Kreditı: ";
    cin>>b3>>k3;
    cout<<"Ümumi Bal və Kreditı: ";
    cin>>b4>>k4;
    cout<<"Ümumi Bal və Kreditı: ";
    cin>>b5>>k5;
    cout<<"Ümumi Bal və Kreditı: ";
    cin>>b6>>k6;
    
    cavab_suret = b1*k1+b2*k2+b3*k3+b4*k4+b5*k5+b6*k6;
    cavab_mexrec = k1+k2+k3+k4+k5+k6;
    cavab = cavab_suret / cavab_mexrec;
    
    cout<<cavab;
    return 0;
}
