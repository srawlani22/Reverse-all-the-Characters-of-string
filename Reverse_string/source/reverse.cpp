#include <iostream>// included the standard library
#include <string>// included string to capture the string input
using namespace std;

// refrences are GeeksforGeeks and stack overflow.com

void reverse(string& example1);// defined the function reverse globally

int main(){

    string example=" My name is Sparsh!";// considerd an example of a string that would be reversed

    reverse(example);// called the reverse function and and then passed the string into it.

    cout << "The reversed string is: " << example << endl;// finally the reversed string is displayed
}


// function: reverse
// reverses the string in an order that is from backwards to forwards
// Input: an string that would be taken with reference and would be reversed according to its length
// Output: the reverse string of the present string
void reverse(string& example1){// passed an string with reference
    
    string rev= "";// an empty string that would be later filled by the another string, which would basically be the reverse string

    for(int i=example1.length(); i>=0; i--){// a for loop assigns an integer equal to the length of the string and keeps decrementing it inorder to reach 0 in terms of length and then start reversing.
        rev += example1[i];// now as the for loop keeps looping around the length, each character in the string is reversed until the length count reaches 0.

    }

    example1=rev; // the reverse string is then overloaded with the empty string that we created earlier in this function. 
}