#include <bits/stdc++.h>
using namespace std;
int T,m,c1,c2;
int main() {
	scanf("%d",&T);
	while(T--) {
		int ans1=0,ans2=0;
		scanf("%d%d%d",&m,&c1,&c2);
		for(int i=1,f1,f2;i<=m;i++) {
			scanf("%d%d",&f1,&f2);
			int tp1=min(1ll*c1,(1ll*c1*f1)/(1000000000));
			int tp2=min(1ll*c2,(1ll*c2*f2)/(1000000000));
			ans1+=tp1,ans2+=tp2;
			c1-=tp1,c2-=tp2;
		} 
		if(ans1<ans2) printf("Coffee\n");
		else printf("Zag\n");
	}
} 