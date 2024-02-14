//how the compiler differentiates among overloaded functions
//Name mangling to enable type-safe linkage

//function square for int values
int square(int x){
    return x * x;
}

//function square for double values
double square(double y){
    return y * y;
}

//fucntion that recieves arguments types
//int, float, chr, and int&
void nothing1(int a, float b,  char c, int &d) { }

//funciton that recieves arguments of types
// char, int, float& and double&
int nothing2(char a, int b, float& c, double&) { 
    return 0;
}

int main(){}
