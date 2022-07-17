//Problem solution in C++.
string convert(string s, int numRows)
{
    if(numRows == 1)
    {
        return s;
    }
    
    vector<vector<char>> v(numRows, vector<char>());
    
    int row = 0;
    int step = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        v[row].push_back(s[i]);
        
        if(row == 0)
        {
            step = 1;
        }
        else if(row == numRows - 1)
        {
            step = -1;
        }
        
        row += step;
    }
    
    string result;
    
    for(int i = 0; i < numRows; i++)
    {
        result.append(v[i].begin(), v[i].end());
    }
    
    return result;
}