#include <bits/stdc++.h>
using namespace std;

int main(){
	auto p = make_pair(1, 3.14);
	cout<<"("<<get<0>(p)<<", "<<get<1>(p)<<")\n";
	cout<<"("<<get<int>(p)<<", "<<get<double>(p)<<")\n";
	cout<<"("<<get<double>(p)<<", "<<get<int>(p)<<")\n";
}
