//check if a string is a palindrome
//rev then check if same as before , then palindrome
#include<stdio.h>
#include<string.h>

int main(){
    char word[20];
    scanf("%s",&word);

    int L = 0;
    for(int i = 0; word[i] != '\0'; i++){
        L++;
    }


    char rev[20];
    for(int i = 0, j = (L-1); i < L; i++, j--){
        rev[i] = word[j];
    }
    rev[L] = '\0'; //end of the word
    //printf("rev = %s\nword = %s\n", rev, word);


    if((strcmp(rev,word)) == 0){
        printf("Yes, it's a palindrome\n");
    }else{
        printf("No, it's not a palindrome\n");
    }
    return 0;
}