class Solution{
    public:
    int count = 0;
    void printNos(int N){
            if(count == N)
    return;
    cout<<count+1 << " ";
    count++;
    printNos(N);
    
    }

    
};
