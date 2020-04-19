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
#include "../include/tests.h"

using namespace std;

const string reverse(string str)
{
    // reverse a string and return it
    int head = 0;
    int tail = str.length();
    
    for(--tail; head < tail; ++head, --tail)
    {
        // swap the first and last characters of the string 
        // until we meet in the middle 
        char tmp;
        tmp = str[head];
        str[head] = str[tail];
        str[tail] = tmp;
    }
    return str;
}

void reverseString (string str)
{
    string origStr = str; 
    cout<<"The original string is: "<<str<<endl;
    cout<<"The reversed string is: "<<reverse(str)<<endl;
}

void isAnagram(string str, string strTwo)
{
   // An anagram is when one word contains all the letters of another 
   sort(str.begin(), str.end()); 
   sort(strTwo.begin(), strTwo.end()); 
   
   if (str.compare(strTwo) == 0)
       cout<<" The strings "<<str<<" and "<<strTwo<<" are anagrams "<<endl;
   else
       cout<<" The strings "<<str<<" and "<<strTwo<<" are not anagrams "<<endl;
}

void isPalindrome(string str)
{
    // A palindrome is when a word is spelled the same way when reversed
    string origStr = str.assign(str);
    reverse(str.begin(), str.end());
    if (origStr.compare(str) == 0)
    {
        cout<<" The string "<<str<<" is a palindrome "<<endl;   
    }
    else
    {
        cout<<" The string "<<str<<" is not a palindrome "<<endl;   
    }
}

char firstUnique(string str)
{
    map<char, int> mapOfChars;

    for (int i = 0; i < str.length(); i++)
    {
        if (mapOfChars.count(str[i])>0) {
            //char is accounted for 
            mapOfChars[str[i]]++;
        }
        else 
        {
            // char isn't accounted for 
            mapOfChars.insert(pair<char,int>(str[i], 1));
        }
    }
    
    for (map<char,int>::iterator it=mapOfChars.begin(); it != mapOfChars.end(); it++)
    {
        if (it->second == 1)
            return it->first;
    }
    return '\0'; 
}

void stringprintchars(string str)
{
    // print the characters one by one 
    for (int head=0; head<str.length(); head++)
    {
        cout<<str[head]<<"  ";
    }
}
