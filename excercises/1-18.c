#include <stdio.h>
#define MAXLINE 80

int parse_line(char s[]);

int main(void)
{
    char line[MAXLINE];
    
    while(parse_line(line))
    {
        printf("%s", line);
    }
}

int parse_line(char s[])
{
    int i,c,lc;
    for(i=0; i<1000 && (c=getchar()) != EOF; ++i)
    {
        if(c == '\n' || c == ' '){
            if(lc == ' ' || lc == '\t')
                s[i-1] = c;
        } else {
            s[i] = c;
            lc = c;
        }
    }
}
