//https://leetcode.com/problems/permutation-in-string/
class Solution {
public:
    bool checkEqual(int count1[26],int count2[26]){
        for(int i=0;i<26;i++){
            if(count1[i]!=count2[i])
                return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        int window=s1.length();
        for(int i=0;i<window;i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        int count2[26]={0};
        int i=0;
        while(i<window && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        
        if(checkEqual(count1,count2)){
            return 1;
        }
        
    while(i<s2.length()){
                char newChar=s2[i];
                int index=newChar-'a';
                count2[index]++;
                
                
                char oldChar=s2[i-window];
                index=oldChar-'a';
                count2[index]--;
                i++;
                if(checkEqual(count1,count2)){
                   return 1;
               }
            }
        
        return 0;
    }
};
