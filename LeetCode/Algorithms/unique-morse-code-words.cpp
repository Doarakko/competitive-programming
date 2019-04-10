class Solution
{
  public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        vector<string> v = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

        set<string> st;
        for (int i = 0; i < words.size(); i++)
        {
            string s = "";
            for (int j = 0; j < words[i].length(); j++)
            {
                //cout << words[i][j] << " " << words[i][j]-'0'-49 << endl;
                s += v[words[i][j] - '0' - 49];
            }
            st.insert(s);
        }
        return st.size();
    }
};