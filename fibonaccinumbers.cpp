#include<iostream>
using namespace std;
int main(){
    int n,x=1,y=0,t;
    cin>>n;
    for(int i=0;i<n-1;i++){
        t=x;
        x=x+y;
        y=t;
        
    }
    cout<<x<<endl;
    return 0;
}