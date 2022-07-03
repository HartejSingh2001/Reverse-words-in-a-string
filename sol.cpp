class Solution {
public:
    string reverseWords(string s) {
        int i;
        string ans="";
        int start=0,end=s.size()-1;
        s=s+" ";// writing this very imp
        stack<string>st;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ' && ans.size()==0) continue;// skip starting space
            if(s[i]==' ')
            {
                st.push(ans);
                ans="";
            }
            else{
                ans=ans+s[i];
            }
        }
        ans="";
        while(st.size()!=1)
        {
            ans=ans+st.top()+" ";
            st.pop();
        }
        ans=ans+st.top();
        st.pop();
       return ans; 
    }
};
