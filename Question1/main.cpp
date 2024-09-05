//Ashli Johnson
//CS303
//Assignment 1: Q1
//September 3, 2024

#include <iostream>
#include <fstream>
#include <string>
#include "functions.h"
using namespace std;



int main() { 

  //declare variables
  int arr[150];
  int size = 0;
  
  //open file
  ifstream infile;
  infile.open("A1input.txt");

  //check if file exists
  if (!infile){
    cout << "File not found" << endl;
    return 0;
  }
  
  //read file
  while (!infile.eof()){
    infile >> arr[size];
    size++;
  }


// while loop for user input
  char userChoice = 'y';
  while (userChoice == 'y'){
    cout << "Please select an option:" << endl;
    cout << "1. Find index of an integer" << endl;
    cout << "2. Modify value of an integer" << endl;
    cout << "3. Add a new integer" << endl;
    cout << "4. Replace or remove an integer" << endl;

    //get user input
    int choice;
    cout << "Enter choice: ";
    cin >> choice;
    cout << endl;

    //switch statement for user input
    switch (choice){
      case 1:{
        //find index
        int findNum;
        cout << "Enter an integer to find: ";
        cin >> findNum;
        int index = findIndex(arr, size, findNum);
        if (index != -1)
          cout << "Number " << findNum << " is at index " << index << endl;
        else
          cout << "Number " << findNum << " is not in the array" << endl;
      break;
    }
      case 2:{
        //modify value
        int modifyNum, index;
        cout << "Enter the index of the integer to modify: ";
        cin >> index;
        cout << "Enter a new integer: ";
        cin >> modifyNum;
        modifyVal(arr, size, modifyNum, index);
        break;
      }
      case 3:{
        //add value
        int newVal;
        cout << "Enter a new integer to add: ";
        cin >> newVal;
        addVal(arr, size, newVal);
        break;
      }
      case 4:{
        //replace or remove
        bool replace;
        int index;
        cout << "Enter the index of the integer to replace or remove: ";
        cin >> index;
        cout << "Enter 0 to replace or 1 to remove: ";
        cin >> replace;
        replaceOrRemove(arr, size, index, replace);
        break;
      }
      case 5:{

        break;
      }
  }
    //ask if user wants to continue
    cout << endl;
    cout << "Would you like to make more changes? (y/n): ";
    cin >> userChoice;
    cout << endl;
    if (userChoice == 'n'){
      //exit and print final array
      cout << "Final array: " << endl;
      for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
      }
      cout << endl;
      cout << endl;
      cout << "Exiting..." << endl;
      choice = 'n';
    }
  }

  //close file
  infile.close();
  return 0;
}
