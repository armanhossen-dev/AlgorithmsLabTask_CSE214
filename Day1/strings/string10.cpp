#include <iostream>
#include <string>
using namespace std;
int main()
{
    int len = 0;
    string word;
    getline(cin, word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        len++;
    }
    for (int i = 0; word[i] != '\0'; i++)
    {   
        for (int j = i; j < len; j++)
        {
            cout << word[i] << ' ';
        }
    }

    return 0;
}