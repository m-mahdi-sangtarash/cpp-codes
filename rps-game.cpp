#include <iostream>
#include <stdlib.h>

using namespace::std;

int main()
{
    int n = 1;
    int i;
    int e_check = 0;
    int sys_s = 0;
    int user_s = 0;
    int sys_n;
    string sys_e ;
    string user_e;
    string game_e[3] = {"rock", "paper", "scissors"};

    while (n == 1)
    {
        
        cout << "please enter your eleman (rock, paper, scissors): ";
        cin >> user_e ;
        cout << endl;
        for (i = 0; i == 2; i++) {

            if (user_e == game_e[i])
            {
                e_check = 1;
                break;
            }
        }
            
        e_check = 1;
        if (e_check == 0)
        {
            cout << "please enter coorect eleman!" << endl;
            continue;
        }
        else
            sys_n = rand() % (2 - 0) + 0;
            sys_e = game_e[sys_n];
            cout << "system: " << sys_e << endl;

            if (sys_e == user_e)
            {
                cout << "----------------------------------\n|                                |\n|         you  " << user_s << "-" << sys_s << "  system       |\n|                                |\n----------------------------------\n";
                
            }
            else if (sys_e == "rock" && user_e == "paper")
            {
                user_s += 1;
                cout << "----------------------------------\n|                                |\n|         you  " << user_s << "-" << sys_s << "  system       |\n|                                |\n----------------------------------\n";
                
            }
            else if (sys_e == "paper" && user_e == "scissors")
            {
                user_s += 1;
                cout << "----------------------------------\n|                                |\n|         you  " << user_s << "-" << sys_s << "  system       |\n|                                |\n----------------------------------\n";
                
            }
            else if (sys_e == "scissors" && user_e == "rock")
            {
                user_s += 1;
                cout << "----------------------------------\n|                                |\n|         you  " << user_s << "-" << sys_s << "  system       |\n|                                |\n----------------------------------\n";
            }
            else if (sys_e == "rock" && user_e == "scissors")
            {
                sys_s += 1;
                cout << "----------------------------------\n|                                |\n|         you  " << user_s << "-" << sys_s << "  system       |\n|                                |\n----------------------------------\n";
                
            }
            else if (sys_e == "paper" && user_e == "rock")
            {
                sys_s += 1;
                cout << "----------------------------------\n|                                |\n|         you  " << user_s << "-" << sys_s << "  system       |\n|                                |\n----------------------------------\n";
                
            }
            else if (sys_e == "scissors" && user_e == "paper")
            {
                sys_s += 1;
                cout << "----------------------------------\n|                                |\n|         you  " << user_s << "-" << sys_s << "  system       |\n|                                |\n----------------------------------\n";
                
            }

            if (user_s == 5 || sys_s == 5)
            {
                if (user_s > sys_s)
                {
                    cout << "--- you win!---";
                    break;
                }
                else
                {
                    cout << "---system win!---";
                    break;
                }
            }
    }

}

