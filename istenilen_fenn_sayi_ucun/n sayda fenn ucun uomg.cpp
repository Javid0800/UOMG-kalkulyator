#include <iostream>
using namespace std;

int main()
{
    int n;
    double cavab, cavab_suret=0, cavab_mexrec=0;

    cout<<"Derslerin sayini daxil edin: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        double bal, kredit;
        cout<<i<<". Fennin Umumi Bali ve Krediti: ";
        cin>>bal>>kredit;
        cavab_suret+=bal*kredit;
        cavab_mexrec+=kredit;
    }

    cavab=cavab_suret/cavab_mexrec;
    cout<<"Ortalama: "<<cavab;

    return 0;
}
