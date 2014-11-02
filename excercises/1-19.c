/* Write a function reverse(s) that reverses the character s.
 * Use it to write a program that reverses its input at a time
 */
#include <stdio.h>
#define MAXLINE 80

char rev[MAXLINE];
int get_line(char s[]);
int reverse_line(char s[], int len);

int main(void)
{
    int len;
    char line[MAXLINE];
    extern char rev[MAXLINE];
    while((len = get_line(line))>0){
        reverse_line(line, len);
        printf("%s", rev);
    }
}

int get_line(char s[]){
    int i, c;
    for(i=0; i<MAXLINE && ((c=getchar())!= EOF); ++i)
    {
        if(c != '\n' || c != '\t')
            s[i] = c;
    }
    s[i + 1] = '\0';
    return i;
}

int reverse_line(char line[], int len)
{
    int i;
    int j = 0;
    extern char rev[MAXLINE];
    for(i=len; i >= 0; --i){
        rev[j] = line[i];
        ++j;
    }
}
