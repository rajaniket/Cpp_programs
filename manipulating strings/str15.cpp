/*
Sanket has a string consisting of only 'a' and 'b' as the characters. Sanket describes perfectness of a string as the maximum length substring of equal characters. Sanket is given a number k which denotes the maximum number of characters he can change. Find the maximum perfectness he can generate by changing no more than k characters.
Input Format
The first line contains an integer denoting the value of K. The next line contains a string having only ‘a’ and ‘b’ as the characters.
Constraints
2 ≤ N ≤ 10^6
Output Format
A single integer denoting the maximum perfectness achievable.
Sample Input
2
abba
Sample Output
4
Explanation
We can swap the a's to b using the 2 swaps and obtain the string "bbbb". This would have all the b's and hence the answer 4.
Alternatively, we can also swap the b's to make "aaaa". The final answer remains the same for both cases.
*/


#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int k;
  	cin>>k;
    string str;
    cin>>str;
    int left=0, ans=0;
    int count[2] = {0};
    for (int i=0;i < str.length();i++) {
        char c =str[i];
        count[c-'a']++;
        if(min(count[0], count[1]) > k) {
            count[str[left]-'a']--;
            left++;
        } else {
            ans++;
        }
    }
    cout<<ans;
    }
