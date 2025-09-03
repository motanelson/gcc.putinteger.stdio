#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdarg.h>
void cputc(char c){
    putc(c,stdout);


}
void cputs(char* s){
    int counter=0;
    while(1){
        if(s[counter]==0)break;
        cputc(s[counter]);
        counter++;
    }

}
char hhex(int c){
    int cc=c;
    
    char *s="0123456789ABCDEFGHJKLMNOPQRSTUVWXYZ";
    cc=cc & 0xf;
    return s[cc];
     
}
void hhexlong(long i){
    char c[100]="";
    int counter=0;
    int n=i;
    c[16]=0;
    for(counter=0;counter<16;counter++){
        c[15-counter]=hhex((char)i);
         i=i>>4;
    }
    cputs(c);
}

int main(){
    char *ccc="hello world.....\n";
    printf("\033c\033[43;30m\nputinteger;\n");
    hhexlong(0x123456789012345L);

    return 0;
}