#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d){
    int m[]={a,b,c,d};
    int r[]={0,0,0,0};
    for(int i=0;i<4;i++){
        r[i]=rand()%4;
      for(int j=0;j<i;j++){
        if(r[i]==r[j]){
            i--;
        }
        
      }
    }
    a=m[r[0]];
    b=m[r[1]];
    c=m[r[2]];
    d=m[r[3]];
}