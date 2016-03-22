/*
 Copyright (c) 2016 Boris Misljencevic

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
*/

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

char *reverseNew(char str [])
{
    char * head = str;
    char * tail = str;
    char * dest = new char[strlen(str)];
    
    for (; *tail != '\0'; ++tail);
    
    int i = 0;
    
    while(head < tail) {
        --tail;
        dest[i++] = *tail;
    }
    return dest;
}

void reverseString (char str [])
{
    size_t len = strlen(str);
    char origstr[len];
    strcpy(origstr, str);
    cout<<"The original string is: "<<str<<endl;
    cout<<"The reversed string is: "<<reverse(str)<<endl;
    cout<<"The copied reversed string is: "<<reverseNew(origstr)<<endl;
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

char firstUnique(char str[])
{
    map<char, int> mapOfChars;
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (mapOfChars.count(str[i])) {
            //char is accounted for 
            mapOfChars.at(str[i])++;
        }
        else 
        {
            // char isn't accounted for 
            mapOfChars.insert(make_pair(str[i], 1));
        }
    }
    for (map<char,int>::iterator it=mapOfChars.begin(); it != mapOfChars.end(); ++it)
    {
        if (it->second == 1)
            return it->first;
    }
    return 'A'; 
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