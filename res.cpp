#include<iostream>
using namespace std;
int main(){
	freopen("ordinary.in","r",stdin);
	freopen("ordinary.out","w",stdout);
	int T;
	cin>>T;
	int l,r;
	for(int i=1;i<=T;i++){
		cin>>l>>r;
		l--;
		l=l/3-l/15-l/21+l/35/3;
		r=r/3-r/15-r/21+r/35/3;
		cout<<r-l<<endl;
	}
	return 0;
}
