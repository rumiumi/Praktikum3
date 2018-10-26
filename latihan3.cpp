#include<iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Panjang sisi A: ";
    cin >> a;

    cout << "Panjang sisi B: ";
    cin >> b;

    cout << "Panjang sisi C: ";
    cin >> c;

    if (a==b && a==c){
        cout << "Segitiga tersebut adalah segitiga sama sisi.";
    } else {
        if (a==b || a==c) {
        cout << "Segitiga tersebut adalah segitiga sama kaki.";
        } else {
        cout << "Segitiga tersebut adalah segitiga sembarang.";
        }
    }
}
