#include<stdio.h>
#include<string.h>
int main(){
    char inputSTR[50];
    fgets(inputSTR, sizeof(inputSTR), stdin);
    inputSTR[strcspn(inputSTR, "\n")] = '\0'; //remove \n

    int len , c=0 ;
    
    for(len = 0; inputSTR[len]!='\0'; len++)

    //find how many spaces
    for(int i = 0; i < len; i++){
        if(inputSTR[i]== ' '){
            c++;
        }
    }





    
    
    
    



    return 0;
}