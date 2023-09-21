#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
	int X,Y,d;
	cin>>X>>Y;
	if(X>Y)
	d=X-Y;
	cout<<d<<endl;
    }
}
