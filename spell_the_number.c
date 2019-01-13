#include<string.h>
char word[1000];
char* convert(int num,char* str)
{
    word[0]='\0';
    char* ones[]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
    char* tens[]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
    if(num>19){
        strcat(word,tens[num/10]);
        strcat(word,ones[num%10]);}
    else
        strcat(word,ones[num]);
    if(num)
        strcat(word,str);
    return word;
}

void intToWord(int num)
{
    if(num==0)
        printf("zero");
    char str[10000]="";
    strcat(str,convert(((num/100000)%100),"lakhs "));
    strcat(str,convert(((num/1000)%100),"thousand "));
    strcat(str,convert(((num/100)%10),"hundred "));                   
    strcat(str,convert((num%100),""));
    int i=0;
    while(str[i]!=0)
        i++;
    str[i-1]='\0';
    printf("%s",str);
}


