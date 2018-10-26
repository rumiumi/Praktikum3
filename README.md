# Praktikum3

## Latihan 1: Menampilkan Bilangan Terbesar dari Sejumlah Bilangan

**Alur algoritma**
1. Mendeklarasikan variabel `int i=0` `int max=0` dan `int n, a`
2. Membaca input `cin >> n`
3. Membaca input `cin >> a` lalu membandingkan `a > max` proses akan diulangi selama kondisi `i<n` benar
4. Cetak `max`

**Berikut code lengkapnya**
```
#include<iostream>
using namespace std;
int main ()
{
    int i = 0;
    int max=0;
    int n,a;
    cout << "masukan jumlah bilagan :" ;
    cin >> n;

    for (i;i<n;i++) {
        cout << "masukan bilangan ke-" << i+1 << ":" ;
        cin >> a;

        if (max<a)
            max = a;

    }
    cout << "bilangan terbesar adalah: " << max << endl;
}

```

## Latihan 2: Mengurutkan Bilangan dari yang Terkecil ke yang Terbesar

**Alur algoritma**
1. Mendeklarasikan variable `int A,B,C` sebagai varible input
2. Membaca input `cin >> A >> B >> C`
3. Membandikan nilain variable A dengan Variable B jika A lebih kecil dari pada B
4. Bandingkan kembali variabel B dengan variabel C
5. Jika kondisi *true* Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu A,B,C
6. jika kondisi *false* Bandingkan kembali Variabel A dengan variabel C jika A lebih kecil dari C
7. Jika kondisi *true* Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu A,C,B
8. Jika kondisi *false* Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu C,A,B
9. Kemudian jika A lebih kecil dari C.
10. Jika kondisi *true* Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu B,A,C
11. jika kondisi *false* Bandingkan kembali Variabel B dengan variabel C jika B lebih kecil dari C.
12. Jika kondisi *true* Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu B,C,A
13. Jika kondisi *false* Maka cetaklah bilangan secara berurutan dari yang terkecil-terbesar yaitu C,B,A

**Berikut code lengkapnya**
```
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

```

## Latihan 3: Menentukan Jenis Segitiga dari Panjang Sisi-Sisinya

**Alur algoritma**
1. Mendeklarasikan variabel `int a, b, c`
2. Input nilai untuk variabel `cin >> a >> b >> c`
3. Jika nilai `a` sama dengan nilai `b` dan `c` maka tampilkan segitiga sama sisi
4. Jika nilai `a` sama dengan nilai `b` atau nilai `a` sama dengan nilai `c` maka tampilkan segitiga sama kaki
5. Selain itu tampilkan segitiga sembarang

**Berikut code lengkapnya**
```
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
        cout << "Berdasarkan panjang sisi-sisinya, segitiga tersebut merupakan segitiga sama sisi.";
    } else {
        if (a==b || a==c) {
        cout << "Berdasarkan panjang sisi-sisinya, segitiga tersebut merupakan segitiga sama kaki.";
        } else {
        cout << "Berdasarkan panjang sisi-sisinya, segitiga tersebut merupakan segitiga sembarang.";
        }
    }
}

```