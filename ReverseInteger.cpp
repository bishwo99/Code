class Solution {
public:
    int reverse(int n) {
  int tmp,res=0;
 
   while(n!=0)
   {
       int tmp=n%10; 
       if((res > INT_MAX/10) || (res<INT_MIN/10) )
       return 0;
       res=(res*10)+tmp;  
       
   
       n=n/10;
        
   }
   return res;
    }
};
