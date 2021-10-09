#include <stdio.h>
// using namespace std;
int sumofdigit(int n){
    int sum=0,sum2=0,remainder1,remainder2;
    while(n!=0){
         remainder1=n%10;

         sum=sum+remainder1;
         n=n/10;

    }
    printf("%d\n",sum);

    while(sum!=0){
        remainder2=sum%10;

        sum2=sum2+remainder2;
        sum=sum/10;


    }
    printf("%d\n",sum2);

}


int main() {
    sumofdigit(23478);

    return 0;
}

