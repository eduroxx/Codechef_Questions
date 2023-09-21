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
	    cout<<X-Y<<endl;
	    else
	    cout<<Y-X<<endl;
	}
}
