#include <iostream>
using namespace std;
int main(){
float a, b, c, Atriangolo, Aquadrato, Arettangolo, Atrapezio;
cin >> a >> b >> c;
Atriangolo=(a*b)/2;
Aquadrato=a*a;
Arettangolo=a*b;
Atrapezio=((a+b)*c)/2;
cout << Atriangolo << "\n" << Aquadrato << "\n" << Arettangolo << "\n" << Atrapezio;
return 0;
}
