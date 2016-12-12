/*
	Problem Solved During SciENSA's Training Sessions
	Name : Anton and Digits
	Problem Link : http://codeforces.com/problemset/problem/734/B
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long k2,k3,k5,k6,ct=0;
    cin>>k2>>k3>>k5>>k6;
    unsigned long a=min(k2,min(k5,k6));
    ct+=a*256;
    if(k2>a)
        ct+=min((k2-a),k3)*32;
    cout<<ct<<endl;
    return 0;
}