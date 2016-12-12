/*
	Problem Solved During SciENSA's Training Sessions
	Name : Oddities
	Problem Link : https://open.kattis.com/problems/oddities
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(abs(x)%2==0)
            cout<<x<<" is even"<<endl;
        else
            cout<<x<<" is odd"<<endl;
    }
    return 0;
}
