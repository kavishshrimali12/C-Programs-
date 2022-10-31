#include<iostream>
using namespace std;

void reverse(char name[] , int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    cout<<"the reversed string is "<<name;
}

int getlength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0' ; i++){
        count ++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    int len = getlength(name);
    cout<<"the length of string is"<<len<<endl;

    reverse(name,len);
    
}

