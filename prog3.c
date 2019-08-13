#include<stdio.h>
#include<conio.h>
int main()
{
    char char;
    scanf("%c",&char);
    if(char=='a'||char=='e'||char=='i'||char=='o'||char=='u'||char=='A'||char=='E'||char=='I'||char=='O'||char=='U')
    {
        printf("Vowel");
    }
    else
    {
    printf("Consonant");
    }
    return 0;
}
