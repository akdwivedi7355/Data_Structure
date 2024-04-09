class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long long ans = 0;
        while(i<s.length()&& s[i]==' '){ 
            i++;
        }
        bool flag = false;
        if(s[i]=='+'){
            i++;
        }
        else if(s[i]=='-'){
            flag = true;
            i++;
        }
        while(i<s.length()){
            char ch = s[i];
            if(ch>='0' && ch<='9'){
                if (ans > LLONG_MAX / 10 || (ans == LLONG_MAX / 10 && (ch - '0') > LLONG_MAX % 10)) {
                    return (flag) ? INT_MIN : INT_MAX;
                } 
                ans = ans*10+(ch-'0');
            }
            else{
                break;
            }
            i++;
        }
        if (flag) {
            ans = -ans;
            if (ans < INT_MIN) {
                return INT_MIN;   
            }
        } 
        else {
            if (ans > INT_MAX) {
                return INT_MAX;
            }
        }
        return ans;
    }
};