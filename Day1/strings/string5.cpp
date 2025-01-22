//remove all spaces 
#include<stdio.h>
#include<string.h>

int main(){
    char str[40],Nstr[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // removes the newline

    //printf("str = %s\n", str);
    int len1 = 0;
    while(str[len1] != '\0'){
        len1++;
    }
    
    //find how many spaces
    int co=0;
    for(int i = 0; i < len1; i++){
        if(str[i]==' '){
            co++;
        }
    }
    //printf("%d spacess\n",co);
    int h;
    for(int j = 0, h = 0;h < len1-co;h++ ,j++){
        if(str[j] == ' '){
            j++;
        }
            Nstr[h] = str[j];
    }
    Nstr[len1-co] = '\0';

    printf("Nstr = %s\n", Nstr);
    //printf("str = %s\n", str);


    return 0;
}
