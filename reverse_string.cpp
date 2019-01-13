class Solution {
public:
    string reverseString(string s) {
        
        string r = "";
        // for(int i = 0; i<s.length();i++)
        // {
        //     r = s[i] + r;
        // }
        int i = 0; 
        int j = s.length()-1;
        
        while(i<j)
        {
            swap(s[i++], s[j--]);
        }
        return s;
    }
};


Question - 

Write a function that takes a string as input and returns the string reversed.

Example 1:

Input: "hello"
Output: "olleh"
Example 2:

Input: "A man, a plan, a canal: Panama"
Output: "amanaP :lanac a ,nalp a ,nam A"
