#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int sum = 0, n1, n2, n3;
    char num[105];
    char pinyin[10][5]={"ling","yi","er","san","si","wu","liu",
                        "qi","ba","jiu"};
    while(cin>>num)
    {
        sum = 0;
        int len = strlen(num);
        for(int i=0; i<len; i++)
        {
            int number = num[i] - '0';
            sum += number;
        }

        n1=sum/(10*10);
        if(n1) cout<<pinyin[n1]<<" ";

        n2=(sum/10)%10;
        if(n2!=0||n1!=0)
        cout<<pinyin[n2]<<" ";

        n3=sum%10;
        cout<<pinyin[n3]<<"\n";
    }
    return 0;
}
