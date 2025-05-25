#include <iostream>  
using namespace std; 

int main() 
{ 
  int i = 0; 
  do { 
    i++; 
    if (i == 5) { 
      continue; 
    } 
    cout<<i<<" + "<<i<<" = "<<(i+i)<<endl;
    i++; //tambahan
  } while (i < 10); 
  return 0;  
} 
