#include <stdio.h>
int main(){

    int tk;
    scanf("%d",&tk);
    if(tk>=5000){
        printf("Coxs Bazar jabo\n");
        if(tk>=10000){
            printf("Saint Martin Jabo\n");
        }else{
            printf("Jabo na");
        }
    }else{
        printf("Kothao jabo na\n");
    }

    return 0;
}

