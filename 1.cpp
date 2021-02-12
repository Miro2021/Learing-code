#include <stdio.h>
int main (){
int n,i,k,some;
long long sum;
scanf ("%d %d",&n,&some);
 for (i=1;i<=n;i=i+1){
    scanf ("%lld",&k);
    sum=(sum*k)%some;
}
printf ("%lld\n",sum);
}
