class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        string s;
        set<string> st;
        bool plus = false, domain = false;
        
        for(int i = 0; i < emails.size(); i++){
            s.clear();
            plus = false, domain = false;
            for(int j = 0; j < emails[i].length(); j++){
                if(domain){
                    s += emails[i][j];
                }else if(emails[i][j] == '@'){
                    s += emails[i][j];
                    domain = true;
                }else if(plus){
                    continue;
                }else if(emails[i][j] == '.'){
                    continue;
                }else if(emails[i][j] == '+'){
                    plus = true;
                    continue;
                }else{
                    s += emails[i][j];
                }
                // cout << s << endl;
            }
            st.insert(s);
        }
        // auto it = st.begin();
        // for(int i = 0; i < st.size(); i++){
        //     cout << *it << endl;
        //     it++;
        // }
        
        return st.size();
    }
};