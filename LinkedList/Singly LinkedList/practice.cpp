#include<iostream>
#include<string>

using namespace std;

struct Book{
    string book_name;
};

int main(){
    struct Book obj;

    obj.book_name = "Introduction to C++";

    cout<<obj.book_name<<endl;

    int a[] = {1,2,3};

    int i = a[0]++;  //displayed and increased
    int j = ++a[0];  //increased and displayed

    cout<<i<<endl;
    cout<<j<<endl;


    return 0;
}