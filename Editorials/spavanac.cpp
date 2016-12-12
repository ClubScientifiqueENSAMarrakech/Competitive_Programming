/*
	Problem Solved During SciENSA's Training Sessions
	Name : Spavanac
	Problem Link : https://open.kattis.com/problems/spavanac
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h,m;
    cin>>h>>m;
    if(m>=45)
        cout<<h<<" "<<m-45<<endl;
    else
        cout<<(h+23)%24<<" "<<m+15<<endl;
    return 0;
}