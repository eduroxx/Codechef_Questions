#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	 int X,Y;
	 cin>>X>>Y;
	 if(X>Y)
	 {
	     cout<<"LOSS"<<endl;
	 }
	 else
	 {
	     if(X==Y)
	     {
	         cout<<"NEUtral"<<endl;
	     }
	     else
	     {
	         cout<<"Profit"<<endl;
	     }
	 }
	 }
	}
