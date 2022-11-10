class Solution {
public:
    string removeDuplicates(string s) {
//         string res;
//         for(int i=0;i<s.size();i++){
//            if(res.back()==s[i]){
//               res.pop_back();}
//             else{
//              res+=s[i];}
         
//         }
//         return res;
        
//         second method--
        
        stack<char>st;
        for(int i=0;i<s.size();i++){
           if(st.empty() || s[i]!=st.top()){
               st.push(s[i]);
           }else{
             st.pop();
           }
        }
        string res;
        while(!st.empty()){
            res=st.top()+res;
        st.pop();
        }
        
        return res;
    }
};