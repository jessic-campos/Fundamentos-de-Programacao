#include<stdio.h>

int main(){
    
    int cpd, mov, total = 0;
    
    scanf("%d", &cpd);
    
    while(total <= (cpd*2)){
        
        scanf("%d", &mov);
        
        if(mov > 0){
            total += mov;
        //printf("total %d\n", total);
        }
        
        else if(mov < 0){
            total -= - mov;
        //printf("total %d\n", total);
        }
        
        if(total == 0)printf("vazio\n");
        else if(total < cpd)printf("ainda cabe\n");
        else if(total >= cpd && total < (cpd*2))printf("lotado\n");
        else if(total >= (cpd*2)){
            printf("hora de partir\n");
            break;
        }
        
    }
    
    
    return 0;
    
}