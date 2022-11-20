class Solution {
public:
    int calculate(string s) {
        int n=s.size();
        int sum=0;
        int op=1;
        stack<int>st;
        
        for(int i=0;i<n;i++){
                if(s[i]>='0'&&s[i]<='9'){
                    int num=0;
                    while(s.size()>i&&s[i]>='0'&&s[i]<='9'){
                        num=num*10+(s[i]-'0');
                        i++;
                    }
                    sum+=num*op;
                    i--;
                }else if(s[i]=='+'){
                    op=1;
                }else if(s[i]=='-'){
                    op=-1;
                }else if(s[i]=='('){
                    st.push(sum);
                    st.push(op);
                    sum=0;
                    op=1;
                }else if(s[i]==')'){
                    sum=st.top()*sum;
                    st.pop();
                    sum+=st.top();
                    st.pop();
                }
        }
        return sum;
    }
};