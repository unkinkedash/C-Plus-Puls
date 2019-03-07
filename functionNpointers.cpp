/*
 * Passing an addres to a function
 * so that a pointer vaiable in the function
 * points to the addres passed 
 * 
 */

#include<iostream>
using namespace std;

//function signatures
int sum(int *, int);
int* multiply(int*, int);

int main(){
	int variable = 100;
	cout << sum(&variable,100);
	
	int a = 10;
	int* pointer = multiply(&a,100);
	cout << *pointer << " " << a << endl;
	
    return 0;
}

int* multiply(int* a, int b){
    *a = *a * b;
    return a;
}


int sum(int* var, int sum){
    return (*(var) += sum);
    /*
     * same as:
     * *var = *var + sum;
     * return *var;
     */
}
