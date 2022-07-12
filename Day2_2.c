/*A message ID is required to send data via CAN communication between ECU’s.
Accept a random 2-digit message ID from the user to send data.
Keep in mind that the given ECU only accepts binary form of the message ID.
Write a program to convert the 2-digit ID to binary form. */
/* #include<stdio.h>
int main(){
	int id,q;
	printf("Enter the id:");
	scanf("%d",&id);
	while(id!=0){
		q=id%2;
		id=id/2;
		printf("%d",q);
	}
}*/
/*
#include<stdio.h>
int main(){
	int n,x,i;
	printf("Enter the value:");
	scanf("%d",&n);
	for(i=7;i>=0;i--){
		x=(n>>i)&1;
		printf("%d",x);
		}
}*/
#include<stdio.h>
int main(){
int a[10],r,i;
printf("Enter the number to convert: ");
scanf("%d",&n);
for(i=0;r>0;i++)
{
a[i]=r%2;
r=r/2;
}
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}