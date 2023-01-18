/* Write a program to identify if the character is a vowel or consonant. */


/* Take an input character from the user and check whether the given input is a vowel or consonant.

Input         
A


Output
Vowel

Input
m

Output
Consonant

Input
3

Output
Invalid Input*/

#include <iostream>
using namespace std;
int main()
{
char c;

cout<<"Enter an character:=";
cin>>c;

if(c =='a'||c =='e'||c =='i'||c =='o'||c =='u' ||c =='A' ||c =='E' ||c =='I' ||c =='O' ||c =='U' ) 
{
	cout<<"It is vowel";
}

else if(!(c<='a' && c>='z')|| (c>'A' && c<='Z')) 
{
	cout<<"It is consonent";
} 

else
{
	cout <<"Invalid Input";
}

return 0;
}
