#include<iostream>
using namespace std;
int isprime(int n){

     for(int i=2;i<n;i++){
        if(n%i == 0){
            return 1;
        }

        
    }
    return 0;
    
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;

    for 
    for(int i=2;i<n;i++){
        if(isprime(n)==0){
            cout<<"PRIME";
            break;
        }
        else{
            cout<<"NOT PRIME";
            break;
        }
        
    }
    return 0;
}

