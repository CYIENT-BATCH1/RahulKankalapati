5. Write a program in C to sort an array using Pointer. The sample output must be as below
//taking 5 variables in array i/p:25,45,89,15,82 o/p:15,25,45,82,89.



#include<stdio.h>

int main(){
int arr[]={25,45,89,15,82};
int n=sizeof arr/sizeof (arr[0]);
int i,j;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if((*(arr+i))>(*(arr+j))){
            *(arr+i)^=(*(arr+j))^=(*(arr+i))^=(*(arr+j));
        }
    }
}

for(i=0;i<n;i++){

    printf("%d",(*(arr+i)));
}
}


