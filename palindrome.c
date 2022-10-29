#include<iostream>
using namespace std;

int main(){
    int n,j,i ;
    cin>>n;

    for( i=1 ; i<=n ; i++ ){
        for( j= 1 ; j<=n-i ; j++){
           cout<<" ";    
        }
        j=i;
        for( ; j>=1 ; j-- ){
            cout<<j;
        }
        j=2;
        for(;j<=i;j++){
            cout<<j;
        }
        
        cout<<endl;
    }
    return 0;
}

