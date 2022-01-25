/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct diagonal{
    int a[10];
    int n;
};
typedef struct diagonal dg;
void set(dg*p,int i,int j,int x){
    if(i==j){
        p->a[i-1]=x;
    }
    
}
int get(dg*p,int i,int j){
    if(i==j){
        return p->a[i-1];
    }
    else{
        return 0;
    }
}
void display(dg p){
    int i,j;
    for(int i=0;i<p.n;i++){
        for(int j=0;j<p.n;j++){
            if(i==j){
                printf("%d ",p.a[i]);
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}

int main()
{
    dg p;
    set(&p,1,1,3);
     set(&p,2,2,5);
      set(&p,3,3,6);
      set(&p,4,4,8);
       set(&p,5,5,3);
    
    // get(&p,1,1);   
    printf("%d",get(&p,1,1));
    display(p);
     

    return 0;
}
