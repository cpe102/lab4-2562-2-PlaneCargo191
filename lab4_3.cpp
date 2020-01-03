#include<iostream>
using namespace std;

int findDivisor(int x)
{
    int min=2;
    while (x%min!=0)
    {
        min=min+1;
    }
    return min;
}

int main()
{
    cout<<findDivisor(10)<<"\n";
    cout<<findDivisor(97)<<"\n";
    cout<<findDivisor(221)<<"\n";

    return 0;
}