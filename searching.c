#include<stdio.h>

int main (){
    int n ,i ;
    int key;
    int arr[100];

    printf("enter the size of the array  ");
    scanf("%d", &n);

    printf("enter the key");
    scanf("%d" , &key);
     
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i] == key){
            printf("the index of key is found");
            break ;
        }
        else{
            printf("the index of key is not found ");
            break;

        }
    }

    return 0;
    
}

