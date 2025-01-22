//sum of the elements matches
#include<stdio.h>
int main(){
    int num[5];
    int sum, number;
    for(int i = 0; i < 5; i++){
        scanf("%d",&num[i]);
    }
    printf("Target sum = ");
    scanf("%d", &number);

    for(int a = 0; a < 5 ; a++){
        for(int b = 1; b < 5 ; b++){
            if(num[a]+num[b]== number){
                printf("(%d,%d)\n", num[a], num[b]);
            }
        }
    }
    return 0;
}
