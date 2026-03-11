#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1, b1, c1;
    int a2, b2, c2;
    cout<<"Enter coefficients of first equation (a1 b1 c1): ";
    cin>>a1>>b1>>c1;
    cout<<"Enter coefficients of second equation (a2 b2 c2): ";
    cin>>a2>>b2>>c2;

    float D = a1*b2 - a2*b1;
    float Dx = c2*b1 - c1*b2;
    float Dy = -a1*c2 + a2*c1;

    float x = Dx / D;
    float y = Dy / D;
    cout<<"The solution is: "<<endl;
    cout<<"x = "<<x<<endl;  
    cout<<"y = "<<y<<endl;


    return 0;
    
}