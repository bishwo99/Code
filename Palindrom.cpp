class Solution {
public:
    bool isPalindrome(int x) {
        int n=x,ans=0;
        while(n!=0)
        {
          
            int tmp = n%10;
             if((ans > INT_MAX/10) || (ans<INT_MIN/10) )
                return 0;
            ans = (ans*10)+tmp;
            n=n/10;

        }
       
        
      
            if(x == ans && x>=0) return 1;
            else return 0;
            
        
        
    }
};
