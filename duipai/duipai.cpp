#include<bits/stdc++.h>
using namespace std;

int main(){
  for(int T=1;T<=100000;++T){
    system("./make_data > 1.in");

    double st = clock();
    system("./my < 1.in > my.out");
    double ed = clock();

    system("./std < 1.in > std.out");
    
    if (system("diff my.out std.out")) {
      printf("WA\n");
      return 0;
    }
    else  printf("AC, test #%d , %.3lfs\n",T,ed - st);
  }
}