// check for duplicate elements
#include<stdio.h>
int main(){
    int num[5];
    int count = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d",&num[i]);
    }
    for(int a = 0; a < 5 ; a++){
        for(int b = 1; b < 5 ; b++){
            if(num[a] == num[b]){
                count++;
            }
        }
    }
    if(count != 0){
        printf("Yes, duplicate exists\n");
    }else{
        printf("No, duplicate does'nt exists\n");
    }
    return 0;
}
