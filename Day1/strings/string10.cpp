#include <iostream>
#include <string>
using namespace std;
int main()
{
    int len = 0;
    string word, cp;
    getline(cin, word);
    for (len = 0; word[len] != '\0'; len++){}
    



    // cout << i << endl;now i is the char number in word
   
    // abc = 3->6
    // a,b,c,ab,bc,abc
    // abcd = 4->10
    // a,b,c,d,ab,bc,cd,abc,bcd,abcd
    // abcde = 5->15
    // a,b,c,d,e,ab,bc,cd,de,abc,bcd,cde,abcd,bcde,abcde
    

    return 0;
}

/*
step 1:
print 1 char then ','
i= 0 to 2
word[i]=word[0]a,
word[i]=word[1]b,
word[i]=word[2]c

step 2:
print char 2 times
i=0-1,2times done then i= last where, i = 1; i = 1-2 then
word[i]=word[0]=a
word[i]=word[1]=b
cout<<", ";
word[i]=word[1]=b
word[i]=word[2]=c
cout<<", ";
ab, bc

step 3:
i=0-2 //3 char print then coma
word[i]=word[0]=a
word[i]=word[1]=b
word[i]=word[2]=c
abc
if word-len == char number to print then no comma at the end
*/
