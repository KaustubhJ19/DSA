//https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3&leftPanelTab=0
void reverseArray(vector<int> &arr , int m)
{
	int i=m+1;
    int j=arr.size()-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
