/*
	Problem Solved During SciENSA's Training Sessions
	Name : Speedlimit
	Problem Link : https://open.kattis.com/problems/speedlimit
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==-1) break;
        else
        {
            int a=0,b=0,c=0,ct=0;
            for(int i=0; i<n; i++)
            {
                cin>>a>>b;
                ct+=(a*(b-c));
                c=b;
            }
            cout<<ct<<" miles"<<endl;
        }
    }
    return 0;
}
