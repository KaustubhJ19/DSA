//https://leetcode.com/problems/valid-palindrome/
class Solution {
public:
    char toLowerCase(char a){
    if((a>='a' && a<='z')||(a>='0' && a<='9')){
        return a;
    }
    else {
        char temp=a-'A'+'a';
        return temp;
    }
}
    bool isValid(char ch){
        if((ch>='0' && ch<='9')||(ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
            return 1;
        }
            return 0;
        
    }
    bool checkPalindrome(string a){
        int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
    }
    bool isPalindrome(string s) {
       string temp="";
        for(int i=0;i<s.length();i++){
            if(isValid(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.length();i++){
            temp[i]=toLowerCase(temp[i]);
        }
        
        return checkPalindrome(temp);
    }
};
