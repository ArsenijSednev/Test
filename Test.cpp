#include "void.h"
#include <iostream>
using namespace std;
#include <cmath>
#include <fstream>
#include <string>
int main()
{
    int arr[10];
    int max, pos_max;
    Random(10, arr);
    cout << endl;
    maxMassiv(10, arr, max, pos_max);
    cout << endl;
    ofstream OutFile;
    OutFile.open("test_file.txt");
    string str;
    getline(cin, str);
    OutFile << str;
   OutFile.close();
    //Чтение из файла
    ifstream inFile;
    inFile.open("test_file.txt");
    string str1;
    getline(inFile, str1);
    cout << str1;
    
   
    int i = 0;
    while (getline(inFile, str1)) {
        arr[i] = stoi(str1);
        i++;
       
    }
    inFile.close();
}

