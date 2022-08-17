//https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=0
char toLowerCase(char a){
    if(a>='a' && a<='z'){
        return a;
    }
    else {
        a=a-'A'+'a';
        return a;
    }
}
bool checkPalindrome(string s)
{
    
    int i=0;
    int j=s.size()-1;
    while(i<j){
        while(isalnum(s[i])==0){
            i++;
        }
        while(isalnum(s[j])==0){
            j--;
        }
        if(toLowerCase(s[i])!=toLowerCase(s[j])){
            return 0;   
        }
        i++;
        j--;
    }
    return 1;
}
