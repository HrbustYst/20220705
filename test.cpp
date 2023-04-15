#include<bits/stdc++.h>
using namespace std;
#asdsadasdasdsad
#sdadsadasdsadasdas

typedef unsigned char sstring[maxstrlen +1];
void init(sstring &s)
{
	s[0]=0;
	s[1]='\0';
	
}
void copy(sstring &s,char *a)
{
	s[0]=strlen(a);
	for(int i=1;i<=strlen(a);i++)
	{
		s[i]=a[i-1];
	}
}
void get(sstring &s,sstring t,int x1,int x2)
{
	s[0]=x2;
	for(int i=x1;i<x1+x2;i++)
	{
		s[i-x1+1]=t[i];
		
	}
	
}
void traverse(sstring s)
{
	for(int i=1;i<=(int)s[0];i++)
	cout<<s[i];
}
int main()
{
	sstring s1;sstring s2;
	init(s1);init(s2);
	char a[100];gets(a);
	copy(s2,a);
	int x1;int x2;cin>>x1>>x2;
	get(s1,s2,x1,x2);
	traverse(s1);
	
}
