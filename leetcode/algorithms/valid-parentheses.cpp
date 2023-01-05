class Solution
{
  public:
    bool isValid(string s)
    {
        stack<char> v;
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case '(':
            case '[':
            case '{':
                v.push(s[i]);
                break;
            case ']':
                if (v.size() == 0 || v.top() != '[')
                {
                    return false;
                }
                else
                {
                    v.pop();
                }
                break;
            case '}':
                if (v.size() == 0 || v.top() != '{')
                {
                    return false;
                }
                else
                {
                    v.pop();
                }
                break;
            case ')':
                if (v.size() == 0 || v.top() != '(')
                {
                    return false;
                }
                else
                {
                    v.pop();
                }
                break;
            }
        }
        if (v.size() == 0)
        {
            return true;
        }
        return false;
    }
};