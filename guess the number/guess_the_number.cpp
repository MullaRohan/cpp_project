// Date: 13-12-2024 at 21:29 BST
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/* author @MullaRohan */
int main()
{
    cout << "Robot: What's your name?\nYou: ";
    string s;
    cin >> s;
    cout << "Robot: Hello " << s << " this is a fun game built with c++" << nl << nl;
    while (true)
    {

        srand(time(0));
        int random = rand() % 101;
        int maxTray = 10;
        bool flag = true;
        cout << "Robot: I'm thinking a number can you say what is that?\nhint: it is between (1-100)" << nl;
        for (int i = 1; i <= maxTray; i++)
        {
            int number;
            cout << "Enter number: ";
            cin >> number;
            if (random > number)
                cout << "Too smaller" << nl;
            else if (random < number)
                cout << "Too greater" << nl;
            else
            {
                cout << "Congrats You Found that" << nl;
                cout << "The number was: " << random << nl;
                cout << "You tried: " << i << " times" << nl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "Sorry you didnt get the number better luck next time." << nl;
        cout << "\nWanna Play again?\n1)YES\n2)NO" << nl;
        int chs;
        cin >> chs;
        if (chs == 1)
            continue;
        else if (chs == 2)
            break;
        else
            cout << "Invalid choice" << nl;
    }
    return 0;
}
