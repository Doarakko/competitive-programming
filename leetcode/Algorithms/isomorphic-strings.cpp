class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char> mp;
        for (int i = 0; i < s.length(); i++)
        {
            if (!mp[s[i]])
            {
                for (int j = 0; j < i; j++)
                {
                    //cout << j << " " << mp[j] << endl;
                    if (mp[s[j]] == t[i])
                    {
                        return false;
                    }
                }
                mp[s[i]] = t[i];
            }
            else if (mp[s[i]] != t[i])
            {
                return false;
            }
        }
        return true;
    }
};