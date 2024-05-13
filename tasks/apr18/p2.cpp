#include<iostream>
using namespace std;

/*

Write a C++ program that defines a function called isPalindrome which takes a string parameter and returns true if the string is a palindrome 
(reads the same forwards and backwards), and false otherwise. 
In the main() function, ask the user for a string and display whether it is a palindrome or not using the isPalindrome function.


*/

bool isPalindrome(string str, int i, int j) { 
    bool pal = true; 
    while(i < j) { 
        if (str[i++] != str[j--]) {
            pal = false; 
            break;
        }
    } 
    return pal; 
}

int main(){
    string str; 
    getline(cin, str);
    for(int start=0; start<str.length() - 1; start++) { 
        for(int end=start+1; end<str.length(); end++) {             
            bool pal = isPalindrome(str, start, end);    
        }
        // if (pal) {
        //         cout
        //     }
    }
}
