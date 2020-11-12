#include<iostream>
#include<ctime>
#include<string>
#include<sstream>
#include<string.h>

using namespace std;
#define random(a,b) ((a)+rand()%((b)-(a)+1))

stringstream ss;
const char* str = "qwertyuiopasdfghjklzxcvbnmQWERTYUIPASDFGHJKLZXCVBNM";

int main( int argc, char *argv[] ){ 

  int seed=time(NULL);
  if(argc > 1)
  {
      ss.clear();
      ss<<argv[1];
      ss>>seed;
  }
  srand(seed);
  int n=random(1,100);
  int len=strlen(str);
  cout<<n<<endl;
  while(n--) {
    int nn=random(1,80);
    while (nn--) cout<<str[random(0,len-1)];
    cout<<endl;
  }
    return 0;
}