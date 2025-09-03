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
void cputinteger(int i){
     char ccc[4096]="";
     int maxs=1000000000;
     int n=i;
     int a=0;
     int remain=0;
     
     int counter=0;
     while(1){
         a=0;
         a=n/maxs;
         remain=n-a*maxs;
         maxs=maxs/10;
         ccc[counter]=(char)a+48;
         counter++; 
         ccc[counter]=(char)0;
         n=remain;
         if (maxs==0)break;
     }
     puts(ccc);
}
int main(){
    char *ccc="hello world.....\n";
    printf("\033c\033[43;30m\nputinteger;\n");
    cputinteger(123456789);

    return 0;
}