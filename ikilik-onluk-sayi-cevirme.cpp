// Arda Mavi - ardamavi.com

#include <iostream>

using namespace std;

// Fonksiyon prototipleri :
void onlukToİkilik();
void ikilikToOnluk();

int main(){
    
    seçiş :
    
    cout << "0 - Onluk sayı sistemini ikilik sayı sistemine çevirmek." << endl;
    cout << "1 - İkilik sayı sistemini onluk sayı sistemine çevirmek." << endl;
    cout << "2 - Çıkış" << endl;
    
    char seçim;
    cin >> seçim;
    
    switch (seçim) {
        case '0':
            onlukToİkilik();
            break;
        case '1':
            ikilikToOnluk();
            break;
        case '2':
            cout << "Program Bitti" << endl;
            break;
        default:
            cout << "! Hatalı Giriş !" << endl;
            goto seçiş;
            break;
    }
    
    return 0;
}

void onlukToİkilik(){
    
    long girilen;
    
    cout << "Onluk sayıyı giriniz : ";
    cin >> girilen;
    
    // Çeviri :
    
    int n = 0, ikili[100];
    
    while (girilen > 0) {
        
        if (girilen%2 == 0)
            ikili[n] = 0;
        else
            ikili[n] = 1;
        
        girilen /= 2;
        n++;
    }
    
    cout << "İkilik Değeri : ";
    
    for (n = n-1; 0 <= n; n--) {
        cout << ikili[n];
    }
    
    cout << endl << endl;
    
    main();
}

void ikilikToOnluk(){
    
    long girilen;
    
    sayıGir :
    
    cout << "İkilik sayıyı giriniz : ";
    cin >> girilen;
    
    // Çeviri :
    long onluk = 0, sayı, s = 1;
    while (girilen > 0)
    {
        sayı = girilen % 10;
        onluk = onluk + sayı * s;
        s = s * 2;
        girilen = girilen / 10;
    }
    
    cout << "Onluk Değeri : " << onluk << endl << endl;
    
    main();
}

