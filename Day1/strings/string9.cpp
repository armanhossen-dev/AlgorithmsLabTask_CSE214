    #include<iostream>
#include<string>

using namespace std;
int main(){
    string word;
    cin >> word;
    
    int word_len = 0;
    for(int i = 0; word[i] != '\0'; i++){
        word_len++;
    }
    //cout<< word_len << endl;
    //There are 26 characters in the English alphabet.
                            //  a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
    int alp[27]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char alp_ch[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    //if i input any uppper case then  i have to convet every char i select to lowercase then if found then count how many
    int i,j;
    for(i = 0; i< word_len; i++){
        for(j = 0; j<26;j++){
            if(word[i] == alp_ch[j]){
                //cout<< word[i] << "found"<<endl;
                alp[j+1] = alp[j+1]+1; //cout<<alp[j+1] <<'\n' ;            
            }
        }
    }
    int k, h;
    //int how_many_unique_char= 0;
    for(int h = 0; h < 27; h++){
        if(alp[h] > 0){
            k=h-1;
            cout << alp_ch[k] <<':'<< alp[h] <<'\n';
            //how_many_unique_char++;
        }
    }

    //unique char koi ta, toto size er array then print  
    //make new array of size "how_many_unique_char"  then assign value also another array to store the char for the value, then if found in the word then print in serial
/*
armanhossenripon
a:2 
e:1
h:1
i:1
m:1
n:3
o:2
p:1
r:2
s:2

* '2111132122'
*/
    return 0;
}