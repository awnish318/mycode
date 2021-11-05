#include <stdio.h>

void accept (int *p){
    scanf("%d",p);
}
void sum(int a, int b,int *s){
    *s=a+b;
}
void display(int s){
    printf(" sum is %d",s);
}
int main() {
 int a,b,s;
 accept(&a);
 accept(&b);
  sum(a,b,&s);

  display(s);

}
