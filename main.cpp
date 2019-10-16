#include <iostream>
#include <type_traits>

using namespace std;
//Template tipo auto:
template <typename T,typename U>
auto suma(T a,U b){
    return a + b;
}

//Template tipo T con typedef:
/*
typedef int T;
template <typename T>
T suma(T a,T b){
    return a + b;
}
*/


int main() {
    auto n1=0;
    auto n2=0;
    string p1;
    string p2;

    cout<<"Ingrese numero 1: ";cin>>n1;
    cout<<"Ingrese numero 1: ";cin>>n2;

    cout<<"Ingrese palabra1: ";cin>>p1;
    cout<<"Ingrese palabra2: ";cin>>p2;

    cout<<"Suma: "<<suma(n1,n2);cout<<endl;
    cout<<"Concadenacion :"<<suma(p1,p2);cout<<endl;

    return 0;
}