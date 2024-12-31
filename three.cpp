#include<iostream>
using namespace std;

int main(){

    // int a=9;
    // if(a==9){
    //     cout<< "NINEY";
    // }
    // if(a>0){
    //     cout<<"POSITIVE";

    // }
    // else{
    //     cout<< "NEGATIVE";
    // }
    // int a= 2;
    // int b= a+1;

    // if((a=4)==b+1){
    //     cout<<"this";
    // }
    // else{
    //     cout<<a+2;
    // }
    // int a= 24;

    // if (a>20){
    //     cout<< "Love";
    // }
    // else if(a==24){
    //     cout<<"Lovely";
    // }
    // else{
    //     cout<<"Kirti";
    // }
    // cout<< a <<endl;
    char ch;
    cout<< "Enter a character: "<<endl;
    cin>>ch;
    int ascii = ch;
    if (ascii>=65 && ascii<=90){
        cout<< "Upper case\n";
    }
    else if (ascii>=97 && ascii <=122){
        cout<< "Lower case\n";
    }
    else if(ascii>=48 && ascii<=57){
        cout<< "Numeric\n";
    }
    else{
        cout << "Something else\n";
    }
}