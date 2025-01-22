#include<stdio.h>
#include<string.h>
int main(){
    char word[20], rev[20];
    scanf("%s",&word);
    
    int length_of_word=0;
    for(int i = 0; word[i] != '\0'; i++){
        length_of_word++;
    }
    
    for(int j = (length_of_word-1), i = 0; i<length_of_word;i++, j--){
        rev[i] = word[j];
    }
    rev[length_of_word] = '\0';
    //printf("rev = %s\nword = %s\n", rev, word);
    printf("%s\n",rev);
    return 0;
}