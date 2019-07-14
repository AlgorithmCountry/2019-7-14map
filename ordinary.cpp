#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	freopen("ordinary.in","r",stdin);
	freopen("ordinary.out","w",stdout);
	
	int n = 0;
	cin >> n;
	
	int p = 0,t = 0;
	
	for(int i = 0;i < n;i++)
	{
		int ans = 0;
		cin >> p >> t;
		while(p % 3 != 0) p++;
		for(int i = p;i <= t;i+=3)
		{
			if(i % 5 != 0&&i % 7 != 0)
			{
				ans++;
			}
		}
		cout << ans <<endl;
		ans = 0;
	}
	
	return 0;	
}  
