#include<bits/stdc++.h>
using namespace std;

int main()
{
	pair<int, float> p1;
	cout<<"Value-initialized: "<< p1.first<<", "<<p1.second<<'\n';
	pair<int, double> p2(42, 0.123);
	cout<<"Initialized with two values: "<< p2.first<<", "<<p2.second<<'\n';
	pair<char, int> p3(p2);
	cout<<"Implicitly converted: "<< p3.first<<", "<<p3.second<<'\n';
	return 0;
}
