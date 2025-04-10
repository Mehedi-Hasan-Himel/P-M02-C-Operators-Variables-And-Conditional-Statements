#include <stdio.h>
int main(){

    int tk;
    scanf("%d", &tk);

    if(tk >= 100){
        printf("Burgar khabo\n");
    }else if(tk >= 50){
        printf("Singara khabo na\n");
    }
    else{
        printf("Kichui khabo na");
    }
    return 0;
}