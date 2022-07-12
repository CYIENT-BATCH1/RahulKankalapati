15. Find empty strings in an array of strings (Array of strings will be given as input to program) and print the position of array where
 empty string is present. And replace the empty string array element as “CYIENT”.
Program:
#include <stdio.h>
int main()
{
    char *arr[]={"rahul","mallesh","anil","raju","   ","shabaz"};
    int n=sizeof arr/sizeof(arr[0]);
    int pos=1;
    printf("%d",n);
    int i,j,k,count=0;
    for(i=0;i<5;i++){
        printf("\n");
        if(arr[i]=="   "){
            pos=pos+4;
            arr[i]="cyient";
        }
    printf("%s ",*(arr+i));
    }
    printf("\n");
     printf("pos=%d\n",pos);
    return 0;
}
