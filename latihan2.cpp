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
            cout << A << ", "<< B <<", "<< C << endl;
    else
        if (A<C)
            cout << A << ", " << C << ", " << B << endl;
        else cout << C << ", " << A << ", " << B << endl;
    }else {
    if (A<C)
        cout << B << ", " << A << ", " << C << endl;
    else
        if (B<C)

        cout << B << ", " << C << ", " << A << endl;
    else
        cout << C << ", " << B << ", " << A << endl;
    }

}
