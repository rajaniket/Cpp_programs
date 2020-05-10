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


int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    int ab_count[2]={0}; // it will store no of a and b 
    int current_length=0; // it will note maximum length 
    int i=0; // i-> left , j->right
    for(int j=0;j<s.length();j++){
    ab_count[s[j]-'a']++;  // counting a and b
    if(min(ab_count[0],ab_count[1])<=k) // if minimum from both count is < = k then current_length increases otherwise shift i to forward
     current_length++;
    else{
        ab_count[s[i]-'a']--;  // eliminating the count of i location for the sake of k
        i++;
    }
    }
    cout<<current_length<<endl;
}
