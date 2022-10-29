#include<iostream>
using namespace std;

int btod(int n){
    int x=1;
    int ans = 0;
    int y ;
    while(n>0){
        y=n%10;
        ans += x*y;
        x*=2;
        n=n/10; 
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int decimal = btod(n);

    cout<<decimal<<endl;

    return 0;
}

