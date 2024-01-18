#include <stdio.h>

int main(){
    
    float p1, p2, p3, t;
    float notaf;
    
    scanf("%f %f %f %f",&p1, &p2, &p3, &t);

    if(p2 <= p1 && p2 <= p3) p2 = p1;
    else if(p3 <= p2 && p3 <= p2)p3 = p1;

    notaf  = (p2 + p3 + t) / 3;
    
    if(notaf >= 7)printf("Aprovado com %0.1f\n", notaf);
    else printf("Final com %0.1f\n", notaf);
   
    return 0;
}
