#include <bits/stdc++.h>
using namespace std;

bitset<4> misbits;

int main(){
    cin>>misbits;
	misbits.flip();
	cout<<misbits.any()<<endl;
	return 0;
}
