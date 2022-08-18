#include<iostream>
using namespace std;
int main()
{
 	int t,h,m,s;

 	cout<<"Enter time (in Seconds) "<<endl;
 	cin>>t;
 	h=t/3600;
 	t=t%3600;
 	m=t/60;
 	t=t%60;
 	s=t;
 	cout<<endl;
 	cout<<"Time in HH:MM:SS is "<<h<<":"<<m<<":"<<s<<endl;
}
