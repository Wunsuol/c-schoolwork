#include <stdio.h>
#define MAXS 20

void f( char *p );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    f(s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void f( char *p )
{
    char a;
    int i,j,t=0;
    while(p[i]!='\0'){
        i++;
    }
    j=i-1;
    for(;t<=j;j--,t++){
        a=p[t];
        p[t]=p[j];
        p[j]=a;
    }
}
void ReadString( char *s )
{
    int i,k;
    k=0;
    while((s[k]=getchar())!='\n'){
        k++;
    }
    s[k]='\0';
}