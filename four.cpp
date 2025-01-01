#include <iostream>
using namespace std;

int main(){
    /*int n;
    cout<< "Enter a number: \n";
    cin >> n;
    int i=1;
    while (i<=n)
    {
        cout<< i << " ";
        i++;
    }*/
    int n;
    cout<< "Enter a number n :" << endl;
    cin>>n;
    int sum = 0;
    int i=1;
    while(i<=n){
        sum = sum+i;
        i++;
    }
    cout<< "The sum of numbers upto n is "<< sum<<endl;
}