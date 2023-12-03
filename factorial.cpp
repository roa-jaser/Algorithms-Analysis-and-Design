#include <iostream>
#include <chrono>
using namespace std;

 unsigned long long factorial_Recursive( long long n){
 if (n < 0) 
 return 0;
 if (n == 0 || n == 1) 
 return 1;
 else 
 return n * factorial_Recursive(n - 1);
}


 unsigned long long factorial_Iterative(long long n){
 if (n < 0) 
 return 0;
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) { fact *= i;}
    return fact;
}

int main() {
    chrono::time_point<chrono::system_clock> start_1, end_1 , start_2, end_2;
    int num;
    cout << "Enter a number: ";
    cin >> num;


     //Iterative 
     start_1 = chrono::system_clock::now();
     unsigned long long Iterativee = factorial_Iterative(num);
     end_1 = chrono::system_clock::now();
     chrono::duration<double> totaltime_1 = end_1 - start_1;


    cout << endl<<"Factorial of " << num<< " in Iterative methods  is: " <<Iterativee<< endl;
    cout << "Execution time: " <<  totaltime_1.count() << " seconds" << endl;


    //Recursive 
    start_2 =chrono::system_clock::now();
    unsigned long long Recursivee =  factorial_Recursive(num);
    end_2 =chrono::system_clock::now();
    chrono::duration<double> totaltime_2 = end_2 - start_2;


    cout << endl<<"Factorial of " << num<< " in Recursive methods  is: " <<Recursivee<< endl;
    cout << "Execution time: " << totaltime_2.count() << " seconds" << endl;


    return 0;
}
