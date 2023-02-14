// vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <cstdlib>




using namespace std;


unsigned menu(vector<string> options);

int main()
{
    // I created a vector and initialized it 
    vector<string> lunch;
    lunch.push_back("Potato");
    lunch.push_back("Veggies");
    lunch.push_back("Beef");
    lunch.push_back("Milk");

    //Call menu and set choice to the menu 
    unsigned choice = menu(lunch); 
    cout << "user's choice : " << choice << endl;       //print choice

    /*
    vector <int> v0 = { 11, 22, 33, 44, 54 };
    vector <string> v1(35, "hello");

    //pus_back
    v0.push_back(67);

    v1[1] = "world";

    for (size_t i = 1; i < v1.size(); i += 2) {
        v1[i] = "world";
    }

    //resize v1

    //print the vector x 3
    for (unsigned i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    //iterator
    for (auto it = v1.begin(); it != v1.end(); ++it) {
        cout << *it << "";
    }
    cout << endl;

    //range based for loop
    for (auto s : v1) {
        cout << s << " ";
    }
    cout << endl;
    */


    return 0;
}


// ask user a valid option
unsigned menu(vector<string> options) {

    //Display a message
    cout << "Here is today's menu : \n";

    //Display the menu
    for (size_t i = 0; i < options.size(); ++i) {
        cout << i << ". " << options[i] << endl;
    }

    //ask user for a choice
    int choice;
    cout << "enter your choice: ";
    cin >> choice;

    while (!(cin.good() && 0 <= choice && choice <= options.size())) {

        cout << "invalid choice. \n";
        cout << "enter your choice: ";

        //avoid error state
        if (!cin.good()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }


        cin >> choice;
    }

    return choice;      //return the choice made by the user

}


