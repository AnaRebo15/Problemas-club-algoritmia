#include <bits/stdc++.h>
using namespace std;

int main(){
	pair<int, string> p1, p2;
	p1 = make_pair(10,"test");
	p1 = make_pair(11,"prueba");
	p2.swap(p1);
	cout<<"p1: ("<<p1.first<<", "<<p1.second<<")\n";
	cout<<"p2: ("<<p1.first<<", "<<p2.second<<")\n";
}
