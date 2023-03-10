#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"birinci sayiyi giriniz"<< endl;
	cin>>x ;
	cout<<"ikinci sayiyi giriniz"<< endl;
	cin>>y ;
	cout<<"ucuncu sayiyi giriniz"<< endl;
	cin>>z ;
	if(x>y && x<z || x>z && x<y)
	{
		cout<<"a,b ve c nin arasinda bir degerdir "<< endl;
	}
	else
	{
		cout<<"a,b ve c nin arasinda bir deger degildir"<< endl;
	}	
}
