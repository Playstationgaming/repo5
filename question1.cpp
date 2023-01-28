#include<iostream>
using namespace std;
int main(){
 int a,b,c,d,e;
 cin>>a>>b>>c>>d>>e;
    int sum=a+b+c+d+e;
    int bin=0;
    int pro=1;
    while(sum>0){
int par;
par=sum%2;
bin+=par*pro;
pro*=10;
sum/=2;
    }
    cout<<bin;
return 0;
}