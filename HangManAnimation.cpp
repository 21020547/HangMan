#pragma once
#include <bits/stdc++.h>
using namespace std;
void printImage(int Wrong_Guess_Count) {
    const string image[8] {
        "   ------------- \n"
        "   |             \n"
        "   |             \n"
        "   |             \n"
        "   |             \n"
        "   |             \n"
        "------- \n",

        "   ------------- \n"
        "   |           | \n"
        "   |             \n"
        "   |             \n"
        "   |             \n"
        "   |             \n"
        "------- \n",

        "   ------------- \n"
        "   |           | \n"
        "   |           o \n"
        "   |             \n"
        "   |             \n"
        "   |             \n"
        "------- \n",

        "   ------------- \n"
        "   |           | \n"
        "   |           o \n"
        "   |           | \n"
        "   |             \n"
        "   |             \n"
        "------- \n",

        "   ------------- \n"
        "   |           | \n"
        "   |           o \n"
        "   |          /| \n"
        "   |             \n"
        "   |             \n"
        "------- \n",

        "   -------------  \n"
        "   |           |  \n"
        "   |           o  \n"
        "   |          /|\\ \n"
        "   |              \n"
        "   |              \n"
        "------- \n",

        "   -------------  \n"
        "   |           |  \n"
        "   |           o  \n"
        "   |          /|\\ \n"
        "   |          /   \n"
        "   |              \n"
        "------- \n",

        "   -------------  \n"
        "   |           |  \n"
        "   |           o  \n"
        "   |          /|\\ \n"
        "   |          / \\ \n"
        "   |              \n"
        "------- \n"
    };
    system("cls");
    cout << image[Wrong_Guess_Count] << endl ;
}
void Death() {
    string s[3] 
    {
        "   -------------  \n"
        "   |           \\  \n"
        "   |            o  \n"
        "   |           /|\\ \n"
        "   |           / \\ \n"
        "   |                \n"
        "------- \n"
        ,

        "   -------------  \n"
        "   |           |  \n"
        "   |           o  \n"
        "   |          /|\\ \n"
        "   |          / \\ \n"
        "   |              \n"
        "------- \n"
        ,

        "   -------------  \n"
        "   |           /  \n"
        "   |          o  \n"
        "   |         /|\\ \n"
        "   |         / \\ \n"
        "   |              \n"
        "------- \n"
        
    };
    bool check = true;
    int count = 0, i = 1;
    while (count <= 50) {
        if (check == true) 
        {
            cout << s[i] << endl ;
            this_thread::sleep_for(chrono::milliseconds(300));
            system("cls") ;
            if (i == 2)
            {
                check = false ;
                count++ ;
                continue;
            }
            i++ ;
            count ++ ;
        }
        else 
        {
            cout << s[i] << endl ;
            this_thread::sleep_for(chrono::milliseconds(300));
            system("cls");
            if (i == 0)
            {
                check = true ;
                count++ ;
                continue;
            }
            i-- ;
            count ++ ;
        }
    }
}