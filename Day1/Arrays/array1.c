//1 find the second largest element
//input 10,20,30,40,50
//output 40
#include<stdio.h>
int main(){
    int n[5];
    for(int a = 0; a<5; a++){
        scanf("%d",&n[a]);
    }
    int temp;
    for(int ll = 1; ll <= 5 ; ll ++){
            int i = 0;
            int j = 1;
            for(int k = 1; k <= 5; k++){
                    if(n[i]<n[j]){
                    temp = n[j];
                    n[j]=n[i];
                    n[i]=temp;
                    }
                i++;
                j++;
            }
    }
/*
    for(int a = 0; a<5; a++){
        printf("%d ",n[a]);
    }
*/
    printf("%d\n", n[1]);
    return 0;
}
