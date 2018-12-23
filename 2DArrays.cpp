/*
* Chijioke Kamanu
* @02840667
* Algorithm
* Step 1: Populate the array with contents of the file
* Step 2: Modify elements of the array as specified
* Step 3: Display new array in standard output
* Step 4: Save contents of new array to output file
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
   
  ifstream myfile;
  ofstream outfile;
  outfile.open("arrayout.txt");
  myfile.open("input2D.txt");
  string numberArray[26][26];

  
  for (int i = 0; i < 26; i++){
    for (int j = 0; j < 26; j++){   
      myfile >> numberArray[i][j];      //Store file contents in array
    }
  }
  
  for (int i = 0; i < 26; i++){
    for (int j = 0; j < 26; j++){
      if (numberArray[i][j] == "2"){
        numberArray[i][j] = "1";        //Change 2s to 1s
      }
    }
  }
  
  for (int i = 0; i < 26; i++){
    for (int j = 0; j < 26; j++){
      if (numberArray[i][j] == "0"){ 
        numberArray[i][j] = "white";            //Change 0s to white and 1s to black
      }
      else if (numberArray[i][j] == "1"){
        numberArray[i][j] = "black";
      }
    }
  }
  
  for (int i = 0; i < 26; i++){
    for (int j = 0; j < 26; j++){
      if (j == 25){
         cout << numberArray[i][j] << endl;
         outfile << numberArray[i][j] << endl;
      }
      else{
      cout << numberArray[i][j] << '\t';           //display array content to standard output
      outfile << numberArray[i][j] << '\t';        //store array content in output file
      }
    }
  }
  
  myfile.close();
  outfile.close();
  return 0;
}
