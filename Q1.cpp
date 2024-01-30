#include<iostream>
using namespace std;
int square(int n)
{
    int a = n*n;
    return a;
}
int main()
{
    int n;
    cout<<"ENter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<square(i)<<endl;
    }
}