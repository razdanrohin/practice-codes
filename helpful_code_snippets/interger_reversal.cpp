class Solution {
public:
    int reverse(int x) {
        //initialized result integer
        int rev = 0;
        
        //looping on all the digits of the number
        while (x != 0) {
            
            //pop operation for all digits, since they need to be fetched from the number
            //in order to perform the reverse operation
            int pop = x % 10;
            x /= 10;
            //---------------------------------------------------------------------------
            
            //main concept starts here
            
            // conditions to prevent overflow
            
            // INTMAX gives the maximum possible 32bit integer
            //temp=rev⋅10+pop.
            /*
                Now here rev = (temp - pop)/10 may cause overflow
                the reversed integer should obviously be less than INTMAX
                
                temp > INTMAX if ------> (rev = INTMAX*10)/10 + pop is the overflow condition
                this overflow condition has to be considered and implemented with the code
            
            */
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            //------------------------------------------------------------------
            
            //push operation
            // I1: rev = pop
            // here the units digit gets shifted one place right and added to new pop
            // I2: pop = pop*10 + new(pop)
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
