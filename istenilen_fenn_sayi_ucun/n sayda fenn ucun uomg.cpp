#include <iostream>
using namespace std;

int main()
{
    int n;
    double cavab, cavab_suret=0, cavab_mexrec=0;
    
    cout<<"Dərslərin sayını daxil edin: ";
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        double bal, kredit;
        cout<<i<<". Ümumi Bal ve Krediti: ";
        cin>>bal>>kredit;
        cavab_suret+=bal*kredit;
        cavab_mexrec+=kredit;
    }
    
    cavab=cavab_suret/cavab_mexrec;
    cout<<"Ortalama: "<<cavab;
    
    return 0;
}
