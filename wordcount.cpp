#include<iostream>
#include<stdio.h>
 
using namespace std;

int main()
{
char sentence[100];
int i,count=1;
cout<<"Enter The Sentence :";
gets(sentence);
for(i=0;sentence[i]!='\0';++i)
{
if(sentence[i]==' ')
count++;
}
cout<<"\nThe no. of words in the given sentence =  "<<count;
 
return 0;
}
