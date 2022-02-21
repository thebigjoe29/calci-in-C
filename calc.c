
#include <stdio.h>
float add(float fno,float sno);
float subtract(float fno,float sno);
float divide(float fno,float sno);
float multiply(float fno,float sno);

int main(){
    float fno;
    char op;
    float sno;
    float result;
    printf("enter the first number: ");
    scanf("%fl",&fno);
    printf("enter the operator: ");
    scanf(" %c",&op);
    printf("enter the second number: ");
    scanf("%fl",&sno);
    if(op == '+'){
        result=add(fno,sno);
        printf("%f",result);
    }
    else if(op=='-'){
        result=subtract(fno,sno);
        printf("%f",result);
    }
    else if(op== '/'){
        result=divide(fno,sno);
        printf("%f",result);
    }
    else if(op== '*'){
        result=multiply(fno,sno);
        printf("%f",result);
    }
    else{
        printf("invalid operator");
    }
    return 0;
}
float add(float fno,float sno){
   return fno+sno;
}
float subtract(float fno,float sno){
    return fno-sno;
}
float divide(float fno,float sno){
    return fno/sno;
}
float multiply(float fno,float sno){
    return fno*sno;
}

