//example
//scoping examle
#include<iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int x{1}; // glbal variable

int main() {
cout << "global x in main is " << x << endl;

int x{5}; //local variable to main

cout << "local x in main's outer scope is " << x << endl;

{//bloack starts a new scope
 int x {7};//hides both x in main's inner scope and global x

 cout << " local x in main's inner scope is " << x << endl;
}

cout << "local x in  main's outer scope is " << x << endl;

useLocal();// uselocal has local x
useStaticLocal();// useStaticLocal has static local x
useGlobal();// useGlobal uses global x
useLocal();// useLocal reinitializes its local x
useStaticLocal();// static local x retains its prior value
useGlobal();// glbal x also retains its prior value

cout << "\nlocal x in main is " << x << endl;
}

// useLocal reinitializes local cariable x during each call
void useLocal(){
    int x{25};//initializes each time useLocal is called
    cout << "\nx in useLocal is "<< x << "on entering useLocal" <<endl;
    ++x;
    cout << "local x is " << x << " on existing useLocal" << endl;
}


//useStaticLocal intializes ststic local variable x only the
//first time the funciton is called; vaue of x is saved
//between calls to this function
void  useStaticLocal(){
    static int x{50};// initialized first time useStaticLocal is Called

    cout << "\nlocal static x is " << x << " on entering useStaticLocal" 
    << endl;
    x++;
    cout << "static local x is " << x << " on exiting useStaticLocal" 
    << endl;
}

//useGlobal modiefies global variable x during each call
void useGlobal(){
    cout <<"\nglobal x is " << x << " on entering useGlobal" << endl;
    x *= 10;
    cout << "global x is  " << x << " on exiting useGlobal" << endl;
}