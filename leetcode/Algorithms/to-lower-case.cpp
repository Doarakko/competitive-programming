class Solution
{
  public:
    string toLowerCase(string str)
    {
        string s = "";
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                s += (char)(str[i] - 'A' + 97);
            }
            else
            {
                s += str[i];
            }
        }
        return s;
    }
};