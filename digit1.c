#include<stdio.h>
int main()
{
long long int n,m,p=1,d=0;
int cnt;
 scanf("%lld",&n);
 m=n;
 while(n>10)
 {
  n=n/10;
  p=p*10;
  cnt=cnt+1;
 }
 d=m/p;
 printf("%lld, %d",d,cnt+1);
return 0;
}
