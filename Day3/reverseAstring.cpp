#include<stdio.h>
#include<string.h>

int main(){
    char name[30];
    char rev[30];

    scanf("%[^\n]s",name);
    int len  = 0;
    for(int i = 0; name[i] != '\0'; i++){
        len++;    
    }
    for(int i = 0, j = len-1; i < len; i++, j--){
        rev[i] = name[j];    
    }
    printf("%s\n",rev);

    return 0;
}
