#include <stdio.h>

int increaseddigitsum(int n){
    int sum=0,remainder;
      while(n!=0){
          remainder=n%10;
          sum=(sum+1)+remainder;
          n=n/10;
      }
      printf("%d\n",sum);
}
int main() {
increaseddigitsum(5673);

}
