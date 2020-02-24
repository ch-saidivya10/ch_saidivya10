#include<stdio.h>
int main()
{
int n,i,cnt,a,sum;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
  a=1,cnt=0;
  sum=i;
  for(a=1;a<=i;a++)
  {
   if(i%a==0)
     cnt=cnt+1;
  }
  if(cnt==2){
     printf("%d %d",i,sum);
     break;
     }
}
}
return 0;
}
  
  
