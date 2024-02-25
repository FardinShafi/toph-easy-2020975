#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x;
    cin>>x;
    for(int i = 1;i<=x;i++){
        if(x/i == round(x/i)){
            cout<<i<<endl;
        }
    }
    return 0;
}