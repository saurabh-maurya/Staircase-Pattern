#include <iostream>

using namespace std;

int main()
{
    int n,t=0,k;
    cout<<"No. Of Staircase : ";
    cin>>n;
    while(n)
    {
        k=n-1;
        t=t+1;
        for(int i=0;i<k;i++)
            cout<<" ";
        for(int j=0;j<t;j++)
            cout<<"#";
        cout<<endl;
        n=n-1;
    }
    return 0;
}
