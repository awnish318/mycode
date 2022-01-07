#include <stdio.h>
// using namespace std;

int main() {
    int t;
    printf("enter no of test case\n");
    scanf("%d",&t);
    // cin>>t;
    
    for(int i=0;i<t;i++){
        int a,b,gcd,minmultiple;
        // cin>>a>>b;
        printf("enter a and b\n");
        scanf("%d%d",&a,&b);
        for(int j=1;j<=a&&j<=b;j++){
            if(a%j==0&&b%j==0){
                gcd=j;
            }
       
        }
         printf("%d",gcd); 
    

        
         minmultiple= (a<b) ? a:b ;
        while(1){
         if(minmultiple%a==0&&minmultiple%b==0){
         printf("%d",minmultiple);  
         break;
         }
         minmultiple++;
        }
        // cout<<gcd<<endl;
        // printf("%d\n",minmultiple);
        
    }
    }
        
	// your code goes here
	

