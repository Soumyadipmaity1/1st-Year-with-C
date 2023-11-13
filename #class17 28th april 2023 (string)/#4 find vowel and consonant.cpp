// read the sentence and print number of vowel & consonant

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    gets(ch);
    int d=0,e=0;
    

    for(int i=0;i<50;i++)
    {
        if(ch[i]=='\0')
        break;
        if(ch[i]=='u'||ch[i]=='o'||ch[i]=='i'||ch[i]=='e'||ch[i]=='a'||ch[i]=='U'||ch[i]=='O'||ch[i]=='I'||ch[i]=='E'||ch[i]=='A')
        d++;
        else if(ch[i]==' ')
        continue;
        else
        e++;
    }
    printf(" NO OF VOWELS = %d",d);
    printf(" NO OF CONSONANTS = %d",e);
    return 0;
}