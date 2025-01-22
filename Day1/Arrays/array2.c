//reverse an array
#include<stdio.h>
int main(){
    int nums[5];
    for(int i = 0; i < 5 ; i++){
        scanf("%d",&nums[i]);
    }
    int rev[5];
    for(int k = 0, j = 4; k < 5; k++, j--){
        rev[j]=nums[k];
    }
    for(int r = 0; r < 5 ; r++){
            printf("%d", rev[r]);
        if(r != 4){
            printf(", ");
        }

    }printf("\n");
    return 0;
}
