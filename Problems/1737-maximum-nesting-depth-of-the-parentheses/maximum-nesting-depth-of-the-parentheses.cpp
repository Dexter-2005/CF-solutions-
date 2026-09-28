class Solution {
public:
    int maxDepth(string s) {
        int temp=0;
        int lastans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') {
                temp++;
            }
            if(s[i]==')'){
                lastans=max(lastans,temp);
                temp--;
            }
        }
        return lastans;
    }
};