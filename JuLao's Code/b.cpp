#include <bits/stdc++.h>
using namespace std;
const int HP[]= {0,900,1000,1500,750},MP[]= {0,100,80,120,50},ATT[]= {0,65,52,41,77};
int T,n,cnt1,cnt2;
char s1[15][10],s2[15][10];
bool flag1[15],flag2[15];
int mian1[15],mian2[15];
int a1[15][15],a2[15][15],h1[15],h2[15],hp1[20],hp2[20],att1[20],att2[20],mp1[20],mp2[20],dun1[20],dun2[20];
int now1[15],now2[15];
int trans(char s) {
	if(s=='G') return 1;
	if(s=='N') return 2;
	if(s=='T') return 3;
	if(s=='M') return 4;
}
void chu1(int id,int i) {
	hp1[i]=HP[id],mp1[i]=0,att1[i]=ATT[id],dun1[i]=0,flag1[i]=0,mian1[i]=0;
}
void chu2(int id,int i) {
	hp2[i]=HP[id],mp2[i]=0,att2[i]=ATT[id],dun2[i]=0,flag2[i]=0,mian2[i]=0;
}
bool ful(int x,int id) {
	if(id==1) {
		if(x==100) {
			return 1;
		}
		return 0;
	}
	if(id==2) {
		if(x==80) {
			return 1;
		}
		return 0;
	}
	if(id==3) {
		if(x==120) {
			return 1;
		}
		return 0;
	}
	if(id==4) {
		if(x==50) {
			return 1;
		}
		return 0;
	}
}
void work1(int i) {
	if(hp1[i]) {
		while(hp2[a1[i][now1[i]]]<=0&&now1[i]<=n) now1[i]++,flag1[i]=0;
		if(now1[i]>n) return;
		mp1[i]+=10;
		if(ful(mp1[i],h1[i])) {
			mp1[i]=0;
			if(h1[i]==1) {
				for(int j=1; j<=n; j++)
					if(hp1[j]>0) hp1[j]=(hp1[j]+10);
				if(mian2[a1[i][now1[i]]]) {
					mian2[a1[i][now1[i]]]--;
					return;
				}
				if(!dun2[a1[i][now1[i]]])
					hp2[a1[i][now1[i]]]-=att1[i];
				else {
					if(dun2[a1[i][now1[i]]]>att1[i]) dun2[a1[i][now1[i]]]-=att1[i];
					else hp2[a1[i][now1[i]]]-=(att1[i]-dun2[a1[i][now1[i]]]),dun2[a1[i][now1[i]]]=0;
				}
				if(hp2[a1[i][now1[i]]]<=0) now1[i]++,cnt2--;
			} else if(h1[i]==2) dun1[i]=min(dun1[i]+120,200);
			else if(h1[i]==3) mian1[i]+=2;
			else if(h1[i]==4) {
				if(mian2[a1[i][now1[i]]]) {
					mian2[a1[i][now1[i]]]--;
					flag1[i]=1;
					return;
				}
				if((!dun2[a1[i][now1[i]]])&&(!flag1[i]))
					hp2[a1[i][now1[i]]]-=att1[i],flag1[i]=1;
				else if((!dun2[a1[i][now1[i]]])&&(flag1[i]))
					hp2[a1[i][now1[i]]]-=att1[i]+50;
				else {
					if(flag1[i]) {
						att1[i]+=50;
						if(dun2[a1[i][now1[i]]]>att1[i]) dun2[a1[i][now1[i]]]-=att1[i];
						else hp2[a1[i][now1[i]]]-=att1[i]-dun2[a1[i][now1[i]]],dun2[a1[i][now1[i]]]=0;
						att1[i]-=50;
					} else {
						if(dun2[a1[i][now1[i]]]>att1[i]) dun2[a1[i][now1[i]]]-=att1[i];
						else hp2[a1[i][now1[i]]]-=att1[i]-dun2[a1[i][now1[i]]],dun2[a1[i][now1[i]]]=0;
						flag1[i]=1;
					}
				}
				if(hp2[a1[i][now1[i]]]<=0) now1[i]++,flag1[i]=0,cnt2--;
			}
		} else {
			if(mian2[a1[i][now1[i]]]) {
				mian2[a1[i][now1[i]]]--;
				return;
			}
			if((!dun2[a1[i][now1[i]]])&&(!flag1[i]))
				hp2[a1[i][now1[i]]]-=att1[i];
			else if((!dun2[a1[i][now1[i]]])&&(flag1[i]))
				hp2[a1[i][now1[i]]]-=att1[i]+50;
			else {
				if(flag1[i]) {
					att1[i]+=50;
					if(dun2[a1[i][now1[i]]]>att1[i]) dun2[a1[i][now1[i]]]-=att1[i];
					else hp2[a1[i][now1[i]]]-=(att1[i]-dun2[a1[i][now1[i]]]),dun2[a1[i][now1[i]]]=0;
					att1[i]-=50;
				} else {
					if(dun2[a1[i][now1[i]]]>att1[i]) dun2[a1[i][now1[i]]]-=att1[i];
					else hp2[a1[i][now1[i]]]-=(att1[i]-dun2[a1[i][now1[i]]]),dun2[a1[i][now1[i]]]=0;
				}
			}
			if(hp2[a1[i][now1[i]]]<=0) now1[i]++,flag1[i]=0,cnt2--;
		}
	}
}
void work2(int i) {
	if(hp2[i]<=0) return;
	mp2[i]+=10;
	while(hp1[a2[i][now2[i]]]<=0&&now2[i]<=n) now2[i]++,flag2[i]=0;
	if(now2[i]>n) return;
	if(ful(mp2[i],h2[i])) {
		mp2[i]=0;
		if(h2[i]==1) {
			for(int j=1; j<=n; j++)
				if(hp2[j]>0) hp2[j]+=10;
			if(mian1[a2[i][now2[i]]]) {
				mian1[a2[i][now2[i]]]--;
				return;
			}

			if(!dun1[a2[i][now2[i]]])
				hp1[a2[i][now2[i]]]-=att2[i];
			else {
				if(dun1[a2[i][now2[i]]]>att2[i]) dun1[a2[i][now2[i]]]-=att2[i];
				else hp1[a2[i][now2[i]]]-=att2[i]-dun1[a2[i][now2[i]]],dun1[a2[i][now2[i]]]=0;
			}
			if(hp1[a2[i][now2[i]]]<=0) now2[i]++,cnt1--;
		}
		if(h2[i]==2) dun2[i]=min(dun2[i]+120,200);
		if(h2[i]==3) mian2[i]+=2;
		if(h2[i]==4) {
			if(mian1[a2[i][now2[i]]]) {
				mian1[a2[i][now2[i]]]--;
				flag2[i]=1;
				return;
			}
			if((!dun1[a2[i][now2[i]]])&&(!flag2[i]))
				hp1[a2[i][now2[i]]]-=att2[i],flag2[i]=1;
			else if((!dun1[a2[i][now2[i]]])&&(flag2[i]))
				hp1[a2[i][now2[i]]]-=att2[i]+50,flag2[i]=1;
			else {
				if(flag2[i]) {
					att2[i]+=50;
					if(dun1[a2[i][now2[i]]]>att2[i]) dun1[a2[i][now2[i]]]-=att2[i];
					else hp1[a2[i][now2[i]]]-=att2[i]-dun1[a2[i][now2[i]]],dun1[a2[i][now2[i]]]=0;
					att2[i]-=50;
				} else {
					if(dun1[a2[i][now2[i]]]>att2[i]) dun1[a2[i][now2[i]]]-=att2[i];
					else hp1[a2[i][now2[i]]]-=att2[i]-dun1[a2[i][now2[i]]],dun1[a2[i][now2[i]]]=0;
					flag2[i]=1;
				}
			}
			if(hp1[a2[i][now2[i]]]<=0) now2[i]++,flag2[i]=0,cnt1--;
		}
	} else {
		if(mian1[a2[i][now2[i]]]) {
			mian1[a2[i][now2[i]]]--;
			return;
		}
		if((!dun1[a2[i][now2[i]]])&&(!flag2[i]))
			hp1[a2[i][now2[i]]]-=att2[i];
		else if((!dun1[a2[i][now2[i]]])&&(flag2[i]))
			hp1[a2[i][now2[i]]]-=att2[i]+50;
		else {
			if(flag2[i]) {
				att2[i]+=50;
				if(dun1[a2[i][now2[i]]]>att2[i]) dun1[a2[i][now2[i]]]-=att2[i];
				else hp1[a2[i][now2[i]]]-=att2[i]-dun1[a2[i][now2[i]]],dun1[a2[i][now2[i]]]=0;
				att2[i]-=50;
			} else {
				if(dun1[a2[i][now2[i]]]>att2[i]) dun1[a2[i][now2[i]]]-=att2[i];
				else hp1[a2[i][now2[i]]]-=att2[i]-dun1[a2[i][now2[i]]],dun1[a2[i][now2[i]]]=0;
			}
		}
		if(hp1[a2[i][now2[i]]]<=0) now2[i]++,flag2[i]=0,cnt1--;
	}
}
signed main() {
	cin>>T;
	while(T--) {
		memset(hp1,0,sizeof hp1);
		memset(hp2,0,sizeof hp2);
		memset(flag1,0,sizeof flag1);
		memset(flag2,0,sizeof flag2);
		memset(mian1,0,sizeof mian1);
		memset(mian2,0,sizeof mian2);
		memset(h1,0,sizeof h1);
		memset(h2,0,sizeof h2);
		memset(att1,0,sizeof att1);
		memset(att2,0,sizeof att2);
		memset(mp1,0,sizeof mp1);
		memset(mp2,0,sizeof mp2);
		memset(dun1,0,sizeof dun1);
		memset(dun2,0,sizeof dun2);
		memset(now1,0,sizeof now1);
		memset(now2,0,sizeof now2);
		scanf("%d",&n);
		memset(a1,0,sizeof a1);
		memset(a2,0,sizeof a2);
		for(int i=1; i<=n; i++) {
			cin>>s1[i];
			now1[i]=1;
			now2[i]=1;
			h1[i]=trans(s1[i][0]);
			chu1(h1[i],i);
			for(int j=1; j<=n; j++) scanf("%d",&a1[i][j]);
		}
		for(int i=1; i<=n; i++) {
			cin>>s2[i];
			h2[i]=trans(s2[i][0]);
			chu2(h2[i],i);
			for(int j=1; j<=n; j++) scanf("%d",&a2[i][j]);
		}
		cnt1=n,cnt2=n;
		while(cnt1&&cnt2) {
			for(int i=1; i<=n; i++)
				if(hp1[i]>0) work1(i);
			for(int i=1; i<=n; i++)
				if(hp2[i]>0) work2(i);
			cnt1=0;
			cnt2=0;
			for(int i=1; i<=n; i++) if(hp1[i]>0) cnt1++;
			for(int i=1; i<=n; i++) if(hp2[i]>0) cnt2++;
		}
		if(cnt1) {
			printf("YES\n");
			for(int i=1; i<=n; i++) {
				if(hp1[i]>0) printf("%d ",hp1[i]);
				else printf("0 ");
			}
		}
		if(cnt2) {
			printf("NO\n");
			for(int i=1; i<=n; i++) {
				if(hp2[i]>0) printf("%d ",hp2[i]);
				else printf("0 ");
			}
		}
		printf("\n");
	}
}
