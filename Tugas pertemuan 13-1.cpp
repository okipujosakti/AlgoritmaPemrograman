#include <iostream>
using namespace std;  
 
int main() 
 
{ 
  int i; 
  for (i = 1; i <= 10; i++) { 
  if (i == 5) { //tambahan
      continue; //tambahan
    } //tambahan
    cout<<i<<" + "<<i<<" = "<<(i+i)<<endl; 
  } 
   return 0;  
} 
