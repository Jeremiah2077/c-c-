#include <stdio.h>

int main(){
    int i,next,n1=1,n2=1;
    for(i=0;i<20;i++){
        printf("%d ",n1);
        next=n1+n2;
        n1=n2;
        n2=next;
    }
    return 0;
}
