//https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=0
string replaceSpaces(string &str){
	string tmp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            tmp.push_back('@');
            tmp.push_back('4');
            tmp.push_back('0');
        }
        else{
            tmp.push_back(str[i]);
        }
    }
    return tmp;
}
