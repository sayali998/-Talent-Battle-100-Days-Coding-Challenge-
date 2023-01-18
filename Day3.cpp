/* Get an input character from the user and give the ASCII value of the given input as the output.

Input: b

Output: 98

Input: B

Output: 66
*/


#include<iostream>
using namespace std;
int main()
{
char s;

cout << " Enter a character:";
cin >> s ;

cout << " ASCII value of " << s << " is " << int(s);
return 0;
}

