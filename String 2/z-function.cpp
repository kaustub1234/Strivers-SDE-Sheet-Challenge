vector<int> search(string s, string pattern) {
    // Write Your Code Here
    string str = pattern+"#"+s;
    int i=0;
    vector<int> z, res;
    while(i<str.size())
    {
        while(i<=pattern.size())
        {
            z.push_back(0);
            i++;
        }
        int l, r;
        l = r = 0;
        if (str[l] == str[i])
        {
            r = i;
            while(r<str.size() && str[l] == str[r])
            {
                l++;
                r++;
            }
        }
        z.push_back(l);
        i++;
    }

    for(int i=0; i<str.size(); i++)
    {
        if (z[i] == pattern.size())
        res.push_back(i-pattern.size());
    }
    return res;
}