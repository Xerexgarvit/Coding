#include<iostream>

using namespace std;

int main(){
    int x;
    float y;
    cin>>x>>y;
    if(x%5==0 && x<=y-0.5){
        y=y-x-0.5;
        cout<<y;
    }
    else{
        cout<<y;
    }
    return 0;
}