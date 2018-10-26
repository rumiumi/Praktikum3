#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cout<<"MASUKAN BILANGAN 1: ";
    cin>> A;
    cout<<"MASUKAN BILANGAN 2: ";
    cin>> B;
    cout<<"MASUKAN BILANGAN 3: ";
    cin>> C;

    if (A<B){
      if (B<C)
            cout<< "Bilangan Terbesar Adalah:" << A << ","<< B <<","<< C << endl;
    else
        if (A<C)
            cout << "Bilangan Terbesar Adalah: " << A << ' '<< C << ' '<< B << endl;
        else cout << " Bilangan Terbesar Adalah: " << C << ' '<< A << ' '<< B << endl;
    }else {
    if (A<C)
        cout << " Bilangan Terbesar Adalah: " << B << ' '<< A << ' ' << C << endl;
    else
        if (B<C)

        cout<< "Bilangan terbesar Adalah: " << B << ' ' << C << ' ' << A << endl;
    else
        cout << " Bilangan Terbesar Adalah: " << C << ' '<< B << ' '<< A << endl;
    }


}
