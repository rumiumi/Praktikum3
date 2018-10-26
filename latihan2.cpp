#include<iostream>

using namespace std;

int main() {
    int A, B, C;

    cout << "Masukkan bilangan A: ";
    cin >> A;

    cout << "Masukkan bilangan B: ";
    cin >> B;

    cout << "Masukkan bilangan C: ";
    cin >> C;

    if (A < B)  {
        if (B < C)
            if (A < C)
                cout << A << ", " << B << ", " << C;
            else
                cout << C << ", " << B << ", " << A;
        else
            cout << C << ", " << A << ", " << B;
    } else {
        if (A < C)
            if (B < C)
                cout << B << ", " << A << ", " << C;
            else
                cout << A << ", " << C << ", " << B;
        else
            cout << C << ", " << A << ", " << B;
    }

}
