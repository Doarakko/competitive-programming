class Solution
{
public:
    string reverseVowels(string s)
    {
        vector<int> v;
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case 'a':
            case 'i':
            case 'u':
            case 'e':
            case 'o':
            case 'A':
            case 'I':
            case 'U':
            case 'E':
            case 'O':
                v.push_back(i);
            }
        }

        for (int i = 0; i < (int)(v.size() / 2); i++)
        {
            swap(s[v[i]], s[v[v.size() - 1 - i]]);
        }
        return s;
    }
};
