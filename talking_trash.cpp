#include <iostream>
using namespace std;
int main()
{
// Unsafe memory
    int numbers[5] = {1, 5, 10, 20, 30};
    cout << numbers[5] << endl;
//arrays are undafe memory because you can acsess data points that dont exists
//this calls a point from the variable that doesnt exist causing an undefined
//output which means we do not know what that output will be
//Garbage in Garbage out
    int test_score;
    cout << "Enter your test score ";
    cin >> test_score;
    cout << "You test score was " << test_score  << endl;
// Garbage in garbage out means that when a bad number in entered in a bad
// output is given in this example if the user inputs an impossible test
// score but their are no paramaters to check it so it will output garbage this
// means that the simple fix for garbage in garbage out is adding parameters to
// the user input
    return 0;
}
