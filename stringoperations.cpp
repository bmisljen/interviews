#include <string.h>
#include "tests.h"

using namespace std;

const char * reverse(char str [])
{
    char * head = str;
    char * tail = str;
    
    // find the end of the string 
    for (; *tail != '\0'; ++tail);
    
    for(--tail; head < tail; ++head, --tail)
    {
        // swap the first and last caharacters of the string 
        // until we meet in the middle 
        char tmp;
        tmp = *head;
        *head = *tail;
        *tail = tmp;
    }
    return str;
}

void reverseString (char str [])
{
    char * head = str;
    char * tail = str;
    
    cout<<"The original string is: "<<str<<endl;
    cout<<"The reversed string is: "<<reverse(str)<<endl;
}

void isAnagram (char str [])
{
    //save a copy of the original string as it will be reversed 
    size_t len = strlen(str);
    char origstr[len];
    strcpy(origstr, str);
    
    if (strcmp(origstr, reverse(str)) == 0)
    {
        // original string is the same as the new string 
        cout<<"the string "<<origstr<<" is an anagram"<<endl;
    }
    else 
    {
        cout<<"the string "<<origstr<<" is not an anagram"<<endl;
    }
}

void stringprintchars(char str [])
{
    char * head = str;
    
    // find the end of the string 
    for (; *head != '\0'; ++head)
    {
        cout<<*head<<"  ";
    }
}