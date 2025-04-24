#include <iostream>
using namespace std;

int main(){
    float A, B, C;
    
    //Input pajang setiap sisi
    cout<<"Masukan panjang sisi A : ";
    cin>>A;
    cout<<"Masukan panjang sisi B : ";
    cin>>B;
    cout<<"Masukan panjang sisi C : ";
    cin>>C;
    
    //Pernyataan
    if (A+B>C && A+C>B && C+B>A) {
        cout<<"SEGI TIGA";
    }
    else {
        cout<<"BUKAN SEGI TIGA";
    }
}