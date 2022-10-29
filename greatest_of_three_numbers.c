#include<stdio.h>

int main(){
   int a , b , c;
   printf( " enter the three numbers ");
   scanf(" %d %d %d", &a , &b , &c);

   if(a>b){
       if(a>c){
           printf("%d is greatest",a);
       }
       else{
          printf("%d is greatest",c); 
       }
   }
   else if(b>a){
       if(b>c){
           printf("%d is greatest",b);
       }
       else{
          printf("%d is greatest",c); 
       }
   }
   else{
       printf("%d is greatest",c);
   }
   

    return;
}

