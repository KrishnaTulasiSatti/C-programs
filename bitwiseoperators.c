#include<stdio.h>
int main(){
	//Bitwise operators(&,|,<<,>>,~)
	//Examples 
	int a=10,b=5;
    int res=a&b;
    // 1 0 1 0
    // 0 1 0 1
    // -------
    // 0 0 0 0
    printf("%d\n",res);
    res=a|b;
    // 1 0 1 0
    // 0 1 0 1
    // -------
    // 1 1 1 1 -->15
    printf("%d\n",res);
    res=a<<1;             //x<<y=2^y*x
     //   1 0 1 0           a<<1=2^1*10
   //   1 0 1 0 0 -->20         =20
    printf("%d\n",res);
    res=a<<2;
       //    1 0 1 0        a<<2=2^2*10
       //  1 0 1 0 0            =40
       //1 0 1 0 0 0 -->40
    printf("%d\n",res);
    res=b>>1;             //x>>y=x/2^y
     //   0 1 0 1           b>>1=5/2^1
    //      0 1 0 -->2          =2
    printf("%d\n",res);
    res=b>>2;
       // 0 1 0 1           b>>2=5/2^2
	   //   0 1 0               =1
	   //     0 1 -->1
    printf("%d\n",res);
    
    float f=b>>1;           //b>>1=5/2
    printf("%f\n",f);       //    =2(not 2.5)
   // Here output f=2.000000
    int c=1;
    res=~c;
    printf("%d\n",res);
    
}
