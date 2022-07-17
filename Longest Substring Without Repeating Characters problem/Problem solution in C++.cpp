//Problem solution in C++.
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> umap;
        int len =0, j=-1, n = s.length();
        for(int i=0;i<n;i++){
            if(umap.find(s[i]) != umap.end()){
                j = max(umap[s[i]], j);
            }
            len = max(i-j, len);
            umap[s[i]]=i;
        }
        return len;
    }
};