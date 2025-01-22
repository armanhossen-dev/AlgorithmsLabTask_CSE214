// 1 2 3 4 5 
// find the missing number between 1 to 5
#include<stdio.h>
int main(){
    int n[5]={1,2,3,4,5};
    int num[5];
    for(int i = 0; i < 5; i++){
        scanf("%d",&num[i]);
    }
    for(int k = 0; k< 5 ;k++){
        for(int i = 0; i < 5;  i++){
            if(num[k]==n[i]){
                    //found
                    n[i] = 6;
            }
        }
    }
    for(int M = 0; M < 5; M++){
        if(n[M]!=6){
            printf("%d\n",n[M]);
        }
    }
    return 0;
}
