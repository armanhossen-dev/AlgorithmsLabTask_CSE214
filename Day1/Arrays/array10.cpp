#include<stdio.h>
int main(){
    const int size = 5;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }
    int combination=0;
    for(int a = 0; a<size; a++){
        for(int b = 1 ; b < size; b++){
            int num = arr[a]-arr[b];
            printf("%d.num = %d - %d= %d\n",combination, arr[a],arr[b],num);
            combination++;
        }
    }
    return 0;
}