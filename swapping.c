#include <stdio.h>

void accept (int *p,int *q){
    scanf("%d%d",p,q);
}

void swap(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;
    
}
void display(int a,int b){
    printf(" values is %d %d",a,b);
}

int main() {
 int a,b,s;
 accept(&a,&b);
 
  swap(&a,&b);

  display(a,b);

}

