#include <iostream> 
#include <sstream> 
#include <cstring> 
#include <algorithm>  
#include <vector>   
#include <cctype>   

using namespace std;

int main()
{

    int i = 0, count = 0,a=0;
    char text[256]; // maximum 256 characters
    
    // create a string vector to hold the words
    vector<string> sV;
    
     //--------Printing my name on screen----------------  
    cout<<"            Welcome to the  program 2.4 written by Your Name"<<endl;
    cout<<"********************************************************************************"<<endl;
    cout<<endl<<endl<<endl;
    //----receiving the variables from input-------------- 
    cout << "Enter text (max. 256 characters): ";    // Enter text input
    cin.getline(text, 256, '\n');              // Input goes into text

    string s(text), word;
    
    cout << "Your text was: " << endl;
    
    for (i=0; i<s.size(); i++){
        if (i == 0) {
            s[i] = toupper(s[i]);
            cout << s[i];
        }
        if (isalpha(s[i])){
            if (s[i-1] =='?' || s[i-1] == '!' || s[i-1] =='.') {
                s[i] = toupper(s[i]);
                cout << s[i];
            }
            else{
                s[i] = tolower(s[i]);
                cout << s[i];
            }
        }
        else if (isdigit(s[i])){
            cout << s[i];
        }
        else if (isspace(s[i])){
            if (s[i-1] != ' ' || s[i+1] != ' ') {
                cout << s[i];
            }
        }
        
        else if (s[i] =='?' || s[i] == '!' || s[i] =='.'){
            if (s[i+1] != ' ' || s[i+1] != ' ') {
                cout << s[i] << " ";
            }
            else {
                cout << s[i];
            }
            count=count+1;
        }
        
    }
     while(s[i] ==' ' || s[i] == '!' || s[i] =='.')
    {
    cout << s[i];
          
            a=a+1;
    }  
    cout << endl;
    
    // put the sentence into a stream
    istringstream instr(s);
    
    // the >> operator separates the stream at a whitespace
    while (instr >> word){
        // optionally store each word in a string vector
        // could use an array, but a vector is easier
        sV.push_back(word);
    }
    
    cout << "Number of characters in text: " << s.length() << endl; // Counting the lenght of text, excluding the null
    cout << "Number of words in text: " <<sV.size() << endl;   // now let's look at the vector
    cout << "Number of sentences in text: " << count << endl;
    system ("pause");
    return 0;
}
