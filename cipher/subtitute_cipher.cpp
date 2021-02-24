#include<iostream>
using namespace std;

// subtitute cipher
int convert_to_num(char c)
{
    string table = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<26; i++)
    {
        if(c == table[i])
        {
            return i;
            break;
        }
    }
    return 0;
}

int convert_to_num_2(char c)
{
    string table = "whovibplcjqxdkryeszaftgnu";
    for(int i=0; i<26; i++)
    {
        if(c == table[i])
        {
            return i;
            break;
        }
    }
    return 0;
}
char convert_to_char(int i,string key)
{
    string table = key;
    return table[i];
}

char convert_to_char_2(int i)
{
    string table = "abcdefghijklmnopqrstuvwxyz";
    return table[i];
}

string encryption(string input, string key)
{
    string output;
    for(int i=0; i<input.length(); i++)
    {
        int x = convert_to_num(input[i]);
        int y = convert_to_char(x,key);
        output += y;
    }
    return output;
}

string decryption (string input, string key)
{
string output;
    for(int i=0; i<input.length(); i++)
    {
        int x = convert_to_num_2(input[i]);
        int y = convert_to_char_2(x);
        output += y;
    }
    return output;
}

int main()
{
    string input;
    cout << "please enter your plain text: ";
    cin >> input;

    string key;
    cout << "please enter a 26 characters key: ";
    cin >> key;

    cout << "your cipher text is: "<<encryption(input,key)<< endl;

    cout << "please enter your cipher text: ";
    string text;
    cin >> text;

    cout << "your plain text is: "<<decryption(text,key)<<endl;
    return 0;
}