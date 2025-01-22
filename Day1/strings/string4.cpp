//Find duplicate characters
#include<stdio.h>
#include<string.h>
int main(){
    char word[20], str[20];
    scanf("%s", &word);
    strcpy(str,word);
    //printf("str = %s\n",str);
    
    int i , len = 0;
    for(i = 0; word[i] != '\0'; i++){
        len++;
    }

    //printf("len = %d\n", len);
    for(int k = 0;k<len; k++){
        int paisi = 1;
        for(int j = k+1; j<len; j++){
            if(word[k] == word[j]){
                paisi++; 
                //printf("Paisi %c\n",word[k]);
                if(paisi == 2){
                    printf("%c ", word[k]);
                break;
                }
            }   
        }
    }






    return 0;
}