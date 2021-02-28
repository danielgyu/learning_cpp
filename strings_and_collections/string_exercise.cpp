/*
 * =====================================================================================
 *
 *       Filename:  string_exercise.cpp
 *
 *    Description: strign exercise 
 *
 *        Version:  1.0
 *        Created:  2021/03/01 00시 55분 13초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kungyu (KG), kglee@desilo.io
 *   Organization:  dev
 *
 * =====================================================================================
 */

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main() {

    bool running = true;

    while (running) {
        string s1;
        string s2;

        cout << "Enter first string";
        cin >> s1;
        cout << "Enter second string";
        cin >> s2;

        if (s1.length() > s2.length()) {
            cout << "First string is longer" << std::endl;
        } else if (s2.length() > s1.length()) {
            cout << "Second string is longer" << std::endl;
        } else {
            cout << "Congrats! Same Length" << std::endl;
            running = false;
            return 0;
        }
        cout << "Wrong length, try again";
        cout << '\n';
    }

}
