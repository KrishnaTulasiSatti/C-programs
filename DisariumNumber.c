#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=0,a=n,ld=0;
    while(a)
    {
        ld=a%10;
        c++;
        a/=10;
        printf("%d\n",c);
        
    }
    int ld1=0,num=0,b=n;
    while(b)
    {
        ld1=b%10;
      int r=pow(ld1,c);
        num+=r;
        printf("%d\n",num);
        
        c--;
        b/=10;
    }
   if(num==n) printf("True");
   else printf("False");
    
}
