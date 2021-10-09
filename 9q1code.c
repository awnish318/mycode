#include <stdio.h>
int noofdigit(int n){
      int count=0;
    // scanf("%d\n",&n);

    while(n!=0){
        
        n=n/10;
        count++;
     }

    printf("%d\n",count);
    return 0;
}
int reverse(int n){
    int num=0,z;

    while(n!=0){
        z=n%10;
        n=n/10;

        num=num*10+z;
    }
    printf("%d\n",num);

}
int main() {
    noofdigit(12345);
    reverse(34567);
    
    
}
