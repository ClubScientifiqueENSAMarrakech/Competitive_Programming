/*
	Problem Solved During SciENSA's Training Sessions
	Name : Grasshopper And the String
	Problem Link : http://codeforces.com/problemset/problem/733/A
*/

#include <bits/stdc++.h>

using namespace std;
int main() {
	string s;
	cin>>s;
	int ct=1,mt=1;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
		{
		  ct=max(ct,mt);
		  mt=1;
		}
		else mt++;
	}
	ct=max(ct,mt);
	cout<<ct<<endl;
	return 0;
}