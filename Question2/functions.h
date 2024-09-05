#include <iostream>
using namespace std;


int findIndex(int arr[], int size, int num);

void modifyVal(int arr[], int size, int num, int index);

void addVal(int arr[], int &size, int num);

void replaceOrRemove(int arr[], int& size, int index, bool remove = true);
