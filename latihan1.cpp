#include<iostream>

using namespace std;

int main() {
    int i=0;
    int max=0;
    int n, a;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    for (i;i<n;i++)[
        cout << "Masukkan bilangan ke-" << i+1 << ": ";
        cin >> a;

        if (a > max)
            max = a;
    ]

    cout << "Bilangan terbesar adalah " << max << endl;

}
