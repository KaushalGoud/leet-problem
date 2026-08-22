class Solution {
public:
    bool checkDivisibility(int n) {
        int mul=1;
        int sum=0;
        int temp=n;
       
        while(temp!=0){
            int digit=(temp%10);
            mul*=digit;
            sum+=digit;
            
            temp/=10;
        }
        return n% (mul+sum)==0;
       
    }
};