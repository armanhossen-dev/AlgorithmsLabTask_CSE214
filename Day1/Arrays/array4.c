//count frequency of Elements
#include<stdio.h>
int main(){
    int a[10];
    for(int in = 0 ; in < 10; in++){
        scanf("%d",&a[in]);
    }
    //for(int i = 0; i< 10; i++){
    //printf("%d ",a[i]);
    //}
    //           0,1,2,3,4,5,6,7,8,9,10
    int b[11] = {0,0,0,0,0,0,0,0,0,0,0};
    //printf("\n");
    //for(int i = 0; i< 11; i++){
    //printf("%d ",b[i]);
    //}
    for(int i = 0; i<10; i++){
        ///b[a[i]=b[a[i]+1;
        b[a[i]]= b[a[i]]+1;
    }

    //printf("\n");
    //for(int i = 0; i< 11; i++){
    //printf("%d ",b[i]);
    //}

    for(int h = 0; h < 11; h++){
        if(b[h] > 0){
            printf("%d : %d times\n", h, b[h]);
        }
    }
    return 0;
}


