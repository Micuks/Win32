#include<iostream>
#include<ctime>
#include<string>
#include<sstream>

using namespace std;
#define random(a,b) ((a)+rand()%((b)-(a)+1))

stringstream ss;
int main( int argc, char *argv[] )
{ 

    int seed=time(NULL);
    if(argc > 1)
    {
        ss.clear();
        ss<<argv[1];
        ss>>seed;
    }
    srand(seed);

   /*for(int i=0;i<100;i++)*/ cout<<random(0,10000)<<' '<<random(0,10000)<<' '<<random(0,100)<<endl;

    return 0;
}