
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j;
    int k=0;
    scanf("%d", &n);
    int m=n;
    for (i=(2*n)-1; i>0 ;i--){
        for (j=1;j<=(2*n)-1;j++){
            if(i-n>=0){
                if(j<=((2*n)-i) || j>(i)){
                    //if(n-j+1 >=1){
                    printf("%d ", abs(n-j)+1);}
                    
                else{printf("%d ", m);}  
                }   /*else{
                    printf("%d ",i-j+n);}}*/    
            else if(i-n<0) 
            {
                if(j<=i || j>=(2*n)-i){
                    printf("%d ",abs(n-j)+1);
                }
                else{
                    printf("%d ", abs(m)+2);
                }
            }       
               
        }
        k++;
        if(i-n>=0){m--;}
        else{m++;}
        printf("\n");
    }
    return 0;
}
