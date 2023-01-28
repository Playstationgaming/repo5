#include<iostream>
using namespace std;
int main(){
    int n=9;
    cout<<"enter input ";
    cin>>n;
    int c=0;
   
    while(n>0){
        int par=n%2;
        if(par==0){
            c++;

        }
       
       n/=2;
    }
    cout<<c<<endl;
return 0;
}