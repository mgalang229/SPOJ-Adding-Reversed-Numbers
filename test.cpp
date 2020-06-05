#include <bits/stdc++.h>

using namespace std;

void decode(){
	int x, y;
	cin >> x >> y;
	int rv=0, rm=0;
	while(x!=0){
		rm=x%10;
		rv=rv*10+rm;
		x/=10;
	}
	int rv2=0;
	rm=0;
	while(y!=0){
		rm=y%10;
		rv2=rv2*10+rm;
		y/=10;
	}
	int s=rv+rv2;
	int ans=0;
	rm=0;
	while(s!=0){
		rm=s%10;
		ans=ans*10+rm;
		s/=10;
	}
	cout << ans << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		decode();
	return 0;
}
