/*Kishore bought ‘n’ number of lottery tickets. His lucky number is 3 so he
  wants to separate all the tickets that have the number 3 in them.
  Find how many such lucky tickets are found in the ‘n’ number of tickets
 purchased by Kishore.*/
#include<stdio.h>
int main()
{
	int n[10]={1,2,3,4,5,6,3,7,3,8};
	//printf("Enter the n:");
	//scanf("%d",&n);
	int count=0,i=0;
	for(i=0;i<sixeof(n)/sixeof(n[0]);i++){
		if(n[i]==3){
			count++;
			i++;
		}
	}
		printf("%d",count);
}