#include <iostream>
using namespace std;

int main()
{
	int umur;
	cout<<"Masukan umur : ";
	cin>>umur;
	
	if (umur<=18)
	{
		if (umur<=10) {
		cout<<"Anak-anak"<<endl;
	} else {
		cout<<"Remaja"<<endl;
		}
		}else {
			cout<<"Dewasa"<<endl;
		}	
return 0;
}

