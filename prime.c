#include<stdio.h>
int main()
{
int n,i,cnt,a;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
  a=1,cnt=0;
  for(a=1;a<=i;a++)
  {
   if(i%a==0)
     cnt=cnt+1;
  }
  if(cnt==2){
     printf("%d",i);
     break;
     }
}
}
return 0;
}
  
