//Find the leader Elements
//leader element in an array is greater than all the elements to its right ,
#include<stdio.h>
int main(){
    int num[5];
    for(int i = 0; i< 5; i++){
        scanf("%d",&num[i]);
    }
    int temp;
    for(int i = 0; i<5; i++){
        for(int k = i+1; k <5; k++){
            //printf("%d for i\n%d for k\n\n", num[i],num[k]);
            if(num[i] > num[k]){
                printf("%d ",num[i]);
                temp = num[i];
                break;
            }else{
                temp = num[i];
                continue;
            }
        }
    }
    return 0;
}