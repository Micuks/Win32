#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5,mod=998244353;
int n,a[N],ans;
long long ksm(int a,int mi) {
	long long tp=1;
	while(mi) {
		if(mi&1) tp=(1ll*tp*(1ll*a))%mod;
		a=(1ll*a*a)%mod;
		mi>>=1;
	}
	return tp;
}
signed main() {
	scanf("%lld",&n);
	long long cheng=ksm(2,n-1);
//	cout<<cheng<<endl;
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	ans=(a[1]*ksm(2,n-1))%mod;
	for(int i=2;i<=n;i++) {
		ans=(ans+(ksm(2,n-i)*a[i])%mod*((((i-1)*ksm(2,i-2)%mod+ksm(2,i-1))%mod)%mod))%mod;
	}
	cout<<ans<<endl;
	
} 