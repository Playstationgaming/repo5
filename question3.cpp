#include<iostream>
using namespace std;

    int binary(int n){
        int ans=0 ;
        int pow=1 ;
        while(n>0){
        int y=n%10;
        
        
        ans+=y*pow;
        pow*=2;
        n/=10;
        }
        return ans;
    }
int main(){
    int first,second;
    cin>>first>>second;
    int a=binary(first);
    int b=binary(second);
    
    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }

return 0;
}