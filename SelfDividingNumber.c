#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    bool flag = false;
    for(int i=n;i<=m;i++)
    {
        int a=i,ld=0;
        while(a)
        {
            ld=a%10;
            if(ld==0){
                flag=false;
                break;
            }
            if(i%ld!=0){
                 flag=false;
                break;
            }
            if(i%ld==0) flag = true;
            a/=10;
        }
        if(flag==true) printf("%d ",i);
    }
}
