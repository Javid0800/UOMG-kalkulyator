#include <iostream>
using namespace std;

int main() {
    double eded1, eded2;
    char hesap;

    cout<<"1. Ededi yazin: ";
    cin>>eded1;
    cout<<"2. Ededi yazin: ";
    cin>>eded2;
    cout<<"hesap (+, -, *, /): ";
    cin>>hesap;

    switch(hesap)
    {
        case '+':
            cout<<"Cavab: "<<eded1+eded2;
            break;
        case '-':
            cout<<"Cavab: "<<eded1-eded2;
            break;
        case '*':
            cout<<"Cavab: "<<eded1*eded2;
            break;
        case '/':
            if(eded2!=0)
                cout<<"Cavab: "<<eded1/eded2;
            else
                cout << "Xeta: Sifira bolunme yoxdur!";
            break;
        default:
            cout << "Xeta!";
    }
    return 0;
}
