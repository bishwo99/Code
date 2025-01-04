class Solution {
public:
    int smallestEvenMultiple(int n) {
        int s;
       for(int i = n; i <= 2000; i++){
          if(i%2 == 0 && i%n == 0)
          {
            s = i;
            break;
          }
       }
       return s;
       
    }
};
