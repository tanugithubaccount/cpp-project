#include<iostream>

#include<string>

using namespace std;

int main(int argc, char *argv[])

{

string str="";

static int alphabet[26];

int x;

cout<<"\n\n Command-Line Argument\n";

for(int i=0;i<argc;i++)

{

cout<<"\n "<<argv[i];

str+=argv[i];

}

for(int i=0;i<str.length();i++)

{

if(str[i]>='A' && str[i]<='Z')

{

x=((int)str[i])-65;

alphabet[x]++;

}

else if(str[i]>='a' && str[i]<='z')

{

x=((int)str[i])-97;

alphabet[x]++;

}

}