//https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        sort(str.begin(),str.end());
        char s=str[0];
        int f=INT_MIN;
        int a=1;
        for(int i=0;i<str.length()-1;i++){
            
            if(str[i+1]==str[i]){
                a++;
            }
            if(a>f){
                f=a;
                s=str[i];
            }
            if(str[i+1]!=str[i]){
                a=1;
            }
        }
          return s;
    }
  

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
