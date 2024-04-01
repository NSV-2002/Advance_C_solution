#include<stdio.h>
void main()
{
    char sen[50];
    int vowels = 0,consonants = 0,words =1,i;
    printf("\n enter the sentence :");
    gets(sen);
    for(i=0;sen[i]!='\0';i++)
    {
       if(sen[i] == " " && sen[i]!= "")
       {
        words = words+1;
       }
        else if(sen[i]=='a'||sen[i]=='A'||sen[i]=='e'||sen[i]=='E'||sen[i]=='i'||sen[i]=='I'||sen[i]=='o'||sen[i]=='O'|| sen[i]=='u'||sen[i]=='U')
       {
       vowels = vowels+1;
       } 
       else if(sen[i]>='a' && sen[i]<='z' || sen[i]>='A' && sen[i]<='Z')
       {
       consonants=consonants+1;
       }
    }
      printf("\n Number of vowels=%d",vowels);
      printf("\n Number of consonant=%d",consonants);
      printf("\n Number of vowels=%d",words);
   
}
