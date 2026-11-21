#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number whose table you want to print: ";
    cin>>n; 
    int a = 4;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<endl;
        a=a+3;
    }
}