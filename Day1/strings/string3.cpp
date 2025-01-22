//count vowels and consonants
// vowels = a , e, i , o, u

#include<stdio.h>
#include<string.h>
int main(){
    int count_v, count_c;
    count_c = count_v = 0;

    char word[20];
    scanf("%s",&word);

    int length = 0;
    for(int i = 0; word[i] != '\0'; i++){
        length++;
    }

    for(int i = 0; i < length; i++){
        switch (word[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            count_v++;
            break;        
        default:
            count_c++;
            break;
        }
    }

    printf("Vowels: %d\n", count_v);
    printf("Consonants: %d\n", count_c);


    return 0;
}