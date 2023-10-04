/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order,
starting with word1. If a string is longer than the other, append the additional letters onto the
end of the merged string. Return the merged string.

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r

Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b
word2:    p   q   r   s
merged: a p b q   r   s

Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q
merged: a p b q c   d

*/

#include <iostream>
#include <string>

using namespace std ; 

//Time-Complexity : O(n)   ,  Space-Complexity: O( len(ans) ) 
string mergeAlternately(string word1, string word2)
{

    string ans = "";

    int i = 0, j = 0, k = 0;
    while (i < word1.length() && j < word2.length())
    {
        if (k % 2 == 0)
        {
            ans += word1.at(k / 2);
            i++;
            k++;
        }
        else
        {
            ans += word2.at(k / 2);
            j++;
            k++;
        }
    }

    while (i < word1.length())
    {
        ans += word1.at(i++);
    }

    while (j < word2.length())
    {
        ans += word2.at(j++);
    }

    return ans;
}

int main()
{
    // string word1 = "abcd";
    // string word2 = "pq";

    // string word1 = "ab";
    // string word2 = "pqrs";

    string word1 = "abc";
    string word2 = "pqr";

    cout << "Merged String is: " << mergeAlternately(word1, word2);
}