#include<stdio.h>
#include<stdlib.h>
#define MAX_STR_LEN 101
int str_cmp(char s1[],char s2[])
{
    int i=0;
    while(s1[i]==s2[i]&&s1[i]!='\0')
        i++;
    if(s1[i]=='\0'&&s2[i]=='\0')
        return 0;
    else
        return s1[i]-s2[i];
}

int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while( (gets(str1) != NULL) && (gets(str2) != NULL) )
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
/**************************************************************
	Problem: 1138
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

