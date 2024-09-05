#include "functions.h"

// function to find if an integer exists. return index if found, -1 if not found
int findIndex(int arr[], int size, int num){
  for (int i = 0; i < size; i++){
    if (arr[i] == num){
      return i;
    }
  }
  return -1;
}

// function that modifies the value of an integer in an array by index, alerts user if index is not present
void modifyVal(int arr[], int size, int num, int index){
  if (index >= 0 && index < size){
    int oldVal = arr[index];
    arr[index] = num;
    cout << "Old Value: " << oldVal << ", New Value: " << num << endl;
  }
  else
    cout << "Index is out of bounds." << endl;
}

// function that adds a new integer to the end of an array
void addVal(int arr[], int &size, int num){ 
  if (size < 150){
    arr[size++] = num;
    cout << num << " has been added to array." << endl;
  }
  else
    cout << "Array is full." << endl;
}

// function that either replaces an index with 0 or removes it
void replaceOrRemove(int arr[], int& size, int index, bool remove) {
    if (index >= 0 && index < size) {
        if (remove) {
            // Shift elements left
            for (int i = index; i < size - 1; ++i) {
                arr[i] = arr[i + 1];
                
            }
            cout << index << " has been removed from array." << endl;
            --size;
        } 
        else{
            arr[index] = 0; 
            cout << index << " has been replaced with 0." << endl;
        }
    } 
    else 
        cout << "Index out of bounds." << endl;
}
