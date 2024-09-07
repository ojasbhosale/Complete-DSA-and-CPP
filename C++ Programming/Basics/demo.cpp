#include<bits/stdc++.h>
using namespace std;

    // functions
        // functions are set of code which performs something for you.
        // functions are used to modularise code.
        // functions are used to increase readability.
        // functions are used to use some code multiple times.
        // functions are declared outside main function.
        // function types :
            // void -> which does not return anything.
            // return
            // parameterised
            // non parameterised


        // void printMyName() {
        //     cout << "hey Ojas!" << endl;
        // } // -> non-parameterised - void function

        // void printName(string name) {
        //     cout << "hey " << name << "!";
        // } // -> parameterised - void function

        // int sum(int a, int b) {
        //     int c = a + b;
        //     return c;
        // } // return function






int main() {
    // 1) input - output

        // int x, y;
        // cout << "enter two values : " <<endl;
        // cin >> x >> y;
        // cout << "Value of x : " << x << " and y : " << y;
        // return 0;

    // 2) data types

        //int
        // int x = 7;
        // //long
        // long y =243;
        // long long r = 500000;

        // float, double


        //string and getline
            // string s;
            // cin >> s;
            // cout<< s;

            // string str;
            // getline(cin, str);
            // cout << str;

        //char
            // char mh = 'f';
            // char ch;
            // cin >> ch;
            // cout << ch;

    // 3) if - else 
        // int age;
        // cout << "enter the age ";
        // cin >> age;

        // if (age >= 18) {
        //     cout << "Adult";
        // }
        // else {
        //     cout << "Below 18 ";
        // }

    // 4) arrays
        // 1D array:
        // int arr[5];

        // cout << "enter array of length 5 : "<< "\n";
        // for (int i = 0; i<=4; i++) {
        //     cin >> arr[i];
        // }

        // cout << "Your array : "<<"\n";
        // for (int i = 0; i<=4; i++) {
        //     cout <<  arr[i] << " ";
        // }
        // array elements are stored in consecutive memory address but we connot be sure abaut 1 element (0th index element) address.

        // 2D array
        // int arr[3][5];
        // arr[1][3] = 78;
        // cout << arr[1][3];

    // 5) strings
        // string s = "Ojas";
        // cout << s[0];
        // int len = s.size();
        // s[len-1] = 'z';
        // cout << s[len-1];

    // 6) for loop 
        // for (int i = 0; i < 5; i++) {
        //     cout << "OJ" << endl;
        // }

        // int j;
        // for (j = 0; j < 30; j+=5) {
        //     cout << "Ojas" << j << endl;
        // }

    // 7) while loop 
        // int i = 3;
        // while (i <= 3) {
        //     cout << "Ojas" << i << endl;
        //     i = i + 1;
        // }
        // do - while loop 
        // do{
        //     cout << "Ojas" << i << endl;
        //     i++;
        // } while (i < 5);

    // 8) functions
        // functions are set of code which performs something for you.
        // functions are used to modularise code.
        // functions are used to increase readability.
        // functions are used to use some code multiple times.
        // functions are declared outside main function.

        // printMyName(); 
        // string name;
        // cin >> name;
        // printName(name);  

        // int num1, num2;
        // cin >> num1 >> num2;
        // int res = sum(num1, num2);
        // cout << "sum is : " << res;


    return 0;
}