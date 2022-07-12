//Consider the phone number of a person as user input and find the sum of its digits.


/*#include<stdio.h>
int main(){
	long int r,i=0,sum=0;
	printf("Enter the values:");
	scanf("%d",&r);
	while(i<=0){
		sum=sum+r%10;
		r=r/10;
		
	}
	printf("%d",r);

	return 0;
}*/
#include<stdio.h>
int main()
{
   int r,temp,rnum=0,rem;
   printf("enter the value");
   scanf("%d",&r);
   temp=r;
   start:
      rem=num%10;
      rnum=rnum+rem;
      r=r/10;
      if(r>0)
      goto start;
      printf("sum of the numbers  %d",rnum);
}