/*
 * =====================================================================================
 *
 *       Filename:  strings.cpp
 *
 *    Description: string section from pluralsight 
 *
 *        Version:  1.0
 *        Created:  2021/03/01 00시 36분 10초
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

    string name;
    cout << "who are you? ";
    cin >> name;

    string greeting = "Hello, " + name;
    if (name == "Kungyu") {
        greeting += ", I know you!";
    }
    cout << greeting << std::endl;
    cout << name.length() << std::endl;
    
    string sub;
    sub =  name.substr(1, 2);
    cout << sub << std::endl;

    string find;
    find = greeting.find(' ');
    if (find.length()) {
        cout << "Found" << std::endl;
        cout << find << std::endl;
    }
    return 0;

}
