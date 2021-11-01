#include <stdio.h>
int main() {
    char opt;
    int n1,n2;

    float res;
    scanf("%c\n",&opt);
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);

    if(opt=='+'){
    res=n1+n2;
    printf("%d+%d is%f\n",n1,n2,res);
    }
     else if(opt=='-'){
    res=n1-n2;
    printf("%d-%d is%f\n",n1,n2,res);
    }
     else if(opt=='*'){
    res=n1*n2;
    printf("%d*%d is%f\n",n1,n2,res);
    }
   else  if(opt=='/'){
    res=n1/n2;
    printf("%d/%d is%f\n",n1,n2,res);
    }
    else {
        printf("wrong input\n");
    }

}
