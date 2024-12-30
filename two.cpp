#include <iostream>
using namespace std;
int main(){
    cout<< "Enter a number:" << endl;
    int n;
    cin >> n;
    if (n>0){
        cout<< "number is positive\n";

    }
    else if (n<0){
        cout << "number is negative\n";
    }
    else {
        cout<< "number is zero\n";
    }
}