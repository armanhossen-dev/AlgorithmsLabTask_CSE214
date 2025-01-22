//rotate an array
#include<stdio.h>
int main(){
    int num[5];
    for(int i = 0; i < 5 ;i++){
        scanf("%d",&num[i]);
    }
    printf("rotate by : ");
    int r;
    scanf("%d",&r);
    for(int i = 0; i < 5 ;i++){
        if(i > (r-1)){
            printf("%d ", num[i]);
            //if(i != 4){
             //   printf(", ");
            //}
        }
    }
    for(int k = 0; k < r ; k++){
        printf("%d ",num[k]);
    }
    printf("\n");
    return 0;
}
