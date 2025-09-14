#include <stdio.h>
#include <math.h>
int main(){
    char s[100];
    fgets(s,100,stdin);
    // To get length
    int len=0;
    while(s[len]!='\0'){
        len++;
    }
    len--;
    printf("%d\n",len);
    for(int i=0;i<len;i++){
        int val=s[i];
        if(val>=65 && val<=90){
            printf("%c",32+val);
        };
    }
    return 0;
}