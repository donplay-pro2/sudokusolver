#include<stdio.h>
#include<math.h>
int main()
{int n,i,sum=0,num[100],var[100];
float varsum,avg,stddev;
printf("Enter the number of element whose std is to be calculated:\n");
scanf("%d",&n);
printf("Enter the %d elements whose std is to be calculated:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
sum=sum+num[i];
}
avg=sum/n;
for(i=0;i<n;i++)
{var[i]=num[i]-avg;
varsum=varsum+var[i]*var[i];
}
stddev=sqrt(varsum/n);
printf("The standard Deviation of the number is:%f\n",stddev);
return 0;
}
