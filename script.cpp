/*Xander Siruno-Nebel
C++/Data Structures, Galbraith
Sept 13, 2022

Palindrome - determines whether or not an input is a palindrome
 */

#include <iostream>
#include <cstring>
#include <regex>
#include <cctype>

using namespace std;

int main(){
  char input[80];

  cout << "Enter a word: ";
  cin.get(input, 80);

  int length = strlen(input);

  char forwards[length] = {"\0"};
//iterates through input, replacing all uppercase or irrelevant characters, assigning to new value
  int x = 0;
  for(int i=0; i < length; i++){
    if((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')){
      forwards[x] = tolower(input[i]);
      x++;
    }
  }

  char backwards[length] = {"\0"};
//same as above for(), just backwards
  int j = 0;
  for(int i=length; i >= 0; i--){
    if((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')){
      backwards[j] = tolower(input[i]);
      j++;
    }
  }

//compares the 2 char arrs
  bool isPalindrome = true;
  for(int i=0; i < length; i++){
    if(forwards[i] != backwards[i]){
      isPalindrome = false;
    }
  }

  if(isPalindrome){
    cout << "palindrome!";
  }else{
    cout << "not a palindrome.";
  }

  return 0;
}
