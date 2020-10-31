#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,k;
	float p=1.0,gm,c,a;
    printf("Enter the number of digit whose GM is to be calculated:");
	scanf("%d",&n);
	k=n;
       printf("Enter the numbers whose GM is to be calculated:");
	for(i=1;i<=n;i++)
 
	{
		scanf("%f",&a);
		  p=p*a;
		c=p;
	}
	gm=pow(c,(1.0/k));
	printf("The GM of Given Numbers is:%f",gm);
    return 0;
  }
