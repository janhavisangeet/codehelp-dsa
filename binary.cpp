#include<iostream>
#include<math.h>

int main(){
      
      int n;
      cin>>n;

     int i=0, ans=0 ;
     int temp = 0;

      while(n!=0){

        int bit=n&1;

        if(bit==1){
            ans=ans+pow(2,i);
        }
        n=n>>1;
        i++;
      }
cout<<ans<<endl;

}

