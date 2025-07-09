// different C++ program to swap two



//1. numbers using 3rd variable
/*
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    int a = 2, b = 3;

    cout << "Before swapping a = " << a << " , b = " << b
         << endl;

    // temporary variable
    int temp;

    // appying swapping algorithm
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a = " << a << " , b = " << b
         << endl;

    return 0;
}
*/



/*

//2.  numbers without using 3rd variable
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    int a = 2, b = 3;

    cout << "Before swapping a = " << a << " , b = " << b
         << endl;

    // applying algorithm
    b = a + b;
    a = b - a;
    b = b - a;

    cout << "After swapping a = " << a << " , b = " << b
         << endl;
    return 0;
}
*/




//3. numbers using swap() built in swap function
// function
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    int a = 5, b = 10;

    cout << "Before swapping a = " << a << " , b = " << b
         << endl;

    // Built-in swap function
    swap(a, b);

    cout << "After swapping a = " << a << " , b = " << b
         << endl;
    return 0;
}



/*
//4. C++ code to swap using XOR
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x = 5, y = 10;
	// Code to swap 'x' and 'y' 
	// to swap two numbers in one
	// line
	x = x ^ y, y = x ^ y, x = x ^ y;
	// printing the swapped variables
	cout << "After Swapping: x = "
		<< x << ", y= " << y;
	return 0;
}
*/

/*
//5. C++ program to illustrate how to swap two variables using
// a function in C++
#include <iostream>
using namespace std;

// function to swap two variables
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// driver code
int main()
{
    int a = 10;
    int b = 22;

    cout << "Before Swapping: " << endl;
    cout << " a: " << a << " b: " << b << endl;

    // calling swap
    swap(&a, &b);

    cout << "After Swapping: " << endl;
    cout << " a: " << a << " b: " << b << endl;

    return 0;
}

*/