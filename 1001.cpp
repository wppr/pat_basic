#include<iostream>

using namespace std;
int main()
{
    int n, num;
    while(cin>>n)
    {
        num = 0;
        while(n!=1)
        {
            if(n%2==0)
                n/=2;
            else
                n = (3*n+1)/2;
            num++;
        }
        cout<<num<<"\n";
    }
    return 0;
}
