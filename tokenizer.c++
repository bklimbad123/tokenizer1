#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;


bool isSeparator(char ch)
{
    string value=",?{}()[]";
    for(int i=0;i<value.length();i++)
    {
        if(ch==value[i])
        {
            return true;
        }
    return false;
    }
}

bool isOperator(char ch)
{
    string value="+-*/<>=!";
    for(int i=0; i<.value.length();i++)
    {
        if(ch==value[i])
        {
            return true;
        }
    }
    return false;
}

bool iskeyword(string s)
{
    string keyword[]={"auto","break","case","char","const","default","do","double","else","continue","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedof","union","unsigned","void","volatile","while"}
    for(int i=0;i<(sizeof(keyword)/sizeof(string));i++)
        if(s==keyword[i])
            return true;
    return false;
}

bool isIdentifier(string s)
{
    bool valid=true;

    if(iskeyword(s))
        valid=false;
    if(valid)
        if((s[0]>='0')&&(s[0]<='9'))
            valid=false;
    if(valid)
        for(int i=0;i<s.length();i++)
            if(((s[i]>='a') && (s[i]<='z')) || ((s[i]>='A') && (s[i]<='Z')) || ((s[i]>='0') && (s[i]<='9')) || (s[i]=='_'))
                continue;
                else{
                    valid=false;
                    break;
                }
    return valid;
}

bool isNumber(string s)
{
    bool valid=true;
    for(itn i=0;i<s.length();i++)
    
}

void parse(string s)
{
    vector <string> tokens;
    string token="";
    for(int i=0;i<s.length();i++)
    {
        if(isSeparator(s[i]))
        {
            if(token!="")
                tokens.push_back(token);
            
            token="";
        }
        else if(isOperator(s[i]))
        {
            if(token!="")
            {
                tokens.push_back(token);
                token="";
            }
            token.push_back(s[i]);
            tokens.push_back(token)
            token="";
        }
        else
            token.push_back(s[i]);
    }
    if(token!="")
    {
        tokens.push_back(token);
        token="";
    }
    //print output

}
int main()
{
    ifstream file;
    string line;
    file open("program.c");
    while (file)
    {
        getline(cin,line);
        parse(line);
    }
}file.close();
return 0;
