// Author: Eric Hansson
// Date: 2023 May
// File: main.cpp
// Purpose: 

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
    cout << "Welcome to the GPA Calculator!" << endl;
    cout << "" << endl;

    // Input for what way to calculate GPA
    char input;
    cout << "Press 1 to read in a file, or Press 2 to manually put in the grade." << endl;
    cin >> input;

    if(input == '1'){
        // Do calculations by a file
        // Declares the varibale for file name
        string fileName;
        cout << "Please enter the name of the file: " << endl;
        cin >> fileName;

        // If file name is not right, give error message
        if(!fileName){
            cout << "Could not find the file! Try again." << endl;
            return 1;
        }



    }

    else{
        // get every credit and grade in manually
        cout << "Enter as the example: " << endl;
        cout << "Math A 3.0";
        while(cin){
                        
        }
    }

    return 0;
}

