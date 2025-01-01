#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: "<< endl;
    cin>>n;
    int num =2;
    while(num<n){
        
        if(n%num==0){
            cout<< "not prime\n";

        }
        else{
            cout<< "prime"<<endl;
        }
        num++;
        
        }
    
}