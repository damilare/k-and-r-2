/* Write a function reverse(s) that reverses the character s.
 * Use it to write a program that reverses its input at a time
 */
#include <stdio.h>
#define MAXLINE 80


int get_line(char s[]);
int reverse_line(char to[], char from[], int len);

int main(void)
{
    int len;
    char line[MAXLINE];
    char reversed_line[MAXLINE];
    while((len = get_line(line))>0){
        reverse_line(line, reversed_line, len);
        printf("%s", line);
    }
}

int get_line(char s[]){
    int i, c;
    for(i=0; i<MAXLINE && ((c=getchar())!= EOF); ++i)
    {
        s[i] = c;
    }
    return i;
}

int reverse_line(char from[], char to[], int len)
{
    int i = 0;
    while(i > 0 ){
        for(i)
    }
}
