#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int X,Y;
        cin>>X>>Y;
        if(X>Y)
        cout<<X<<endl;
        else
        cout<<Y<<endl;
    }
}