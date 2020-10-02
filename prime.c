#include<stdio.h>
void main()
{
	int i,j,limit;
	printf("Input the limit upto which number you wanna print the list of prime number!!\t");
	scanf("%d",&limit);
	printf("The list of prime numbers upto %d is printing .......\n",limit);
	for (i=2; i<limit; i++)
    {
    for (j=2; j<=i; j++)  
    {
    	if (i == j)  
      		printf("%d\n",i);
    	else if (i%j == 0)
      		break;
    }
    }
}                    
 
