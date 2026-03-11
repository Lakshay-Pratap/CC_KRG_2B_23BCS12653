#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a, int b, int max=0)
{
    // return (a*b)/gcd(a,b);
    // max=a>b?a:b;

    if(max%a==0 && max%b==0)
        return max;
    return lcm(a,b,max+1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"GCD: "<<gcd(a,b)<<endl;
    int max=a>b?a:b;
    cout<<"LCM: "<<lcm(a,b,max)<<endl;
    return 0;
    
}