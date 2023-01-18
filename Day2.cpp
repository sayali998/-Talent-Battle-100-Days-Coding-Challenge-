/*Write a program to identify if the character is an alphabet or not.

Input : A

Output:  Alphabet

Input: 7

Output: Not an alphabet
*/

/*int main
char alpha;

cout<< "Enter an alphabet:";
cin>>'c';*/


#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter a character\n";
    cin >> c;
  
    if((c >= 'a'&& c <= 'z') || (c >= 'A' && c <= 'Z')) {
        cout << c << " is an Alphabet.";
    } else {
        cout << c << " is not an Alphabet.";
    }
  
    return 0;
}
