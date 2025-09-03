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
void cputpart(double frac) {
    char ccc[32];
    int counter = 0;

    cputc('.');  // separador decimal

    // imprime 6 casas decimais
    for (int i = 0; i < 6; i++) {
        frac *= 10.0;
        int digit = (int)frac;   // parte inteira
        frac -= digit;           // remove a parte inteira
        ccc[counter++] = (char)(digit + '0');
    }
    ccc[counter] = 0;

    cputs(ccc);
}
void cputlong(long i){
     char ccc[4096]="";
     long maxs=1000000000000000000L;
     long n=i;
     long a=0;
     long remain=0;
     
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
     cputs(ccc);
}
void cputdouble(double i){
     long a=(int)i;
     double par=i-((float)a);
     cputlong(a);
     cputpart(par);

}
int main(){
    char *ccc="hello world.....\n";
    printf("\033c\033[43;30m\nputinteger;\n");
    cputdouble(3.1415927f);

    return 0;
}