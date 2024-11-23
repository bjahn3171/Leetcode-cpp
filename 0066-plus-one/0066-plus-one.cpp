class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carry = 1;
        for(int i = digits.size()-1; i >= 0; i--) {
            if(digits[i] == 9 && carry == 1) {
                digits[i] = 0;
                carry = 1;
            } else {
                digits[i] += carry;
                carry = 0;
            }
            
        }
    
        if(digits[0] == 0)  digits.insert(digits.begin(), 1);
        return digits;
    }
};