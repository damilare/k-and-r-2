/* Write a program to print all input lines that are longer than 80 
 * characters */

#include <stdio.h>
#define MAXLINE 90

int get_line(char s[], int limit);

int main(void){
    
    int c;
    char line[MAXLINE];
    int len;

    while(len = get_line(line, MAXLINE)){
        if (len > 80)
            printf("%s", line);
        }
    }

int get_line(char s[], int limit)
{
    int i, c;
    for(i=0; i<MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    return i;
    
}
