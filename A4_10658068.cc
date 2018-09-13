#include <iostream>

using namespace std;

int gcd(int v,int j){

if(j==0)
return v;
else
    return gcd(j,v%j);

}

int main()
{
      int v,j;
    cout<<"Input first number :";
    cin>>v;
    cout<<"Input second number :";
    cin>>j;

    cout<<gcd(v,j);

    return 0;

}
