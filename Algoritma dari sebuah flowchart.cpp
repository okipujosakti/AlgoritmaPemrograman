#include <iostream>
using namespace std;

int main(){
   int N, A;
   
   //Input nilai A dan N
   cout<<"Masukan nilai N : ";
   cin>>N;
   cout<<"Masukan nilai A : ";
   cin>>A;
   
   if (A>50) {
       N=N+10;
   }
   else {
       N=N+25;
   }
   
   //Hasil
   cout<<"Nilai N adalah : "<<N<<endl;
}