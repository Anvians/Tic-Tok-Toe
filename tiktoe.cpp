#include <iostream>
#include <stdlib.h>
using namespace std;
char A[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
class playerone
{
public:
    int i, j;
    double o;
    double x;

    void tictac()
    {

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    void userOne()
    {

        double o;
        int n;
        cout << "Please enter player with X::";
        cin >> n;
        system("CLS");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (n == 1)
                {

                    A[0][0] = 'x';
                    cout << A[i][j] << " ";
                }

                else if (n == 2)
                {
                    A[0][1] = 'x';
                    cout << A[i][j] << " ";
                }
                else if (n == 3)
                {
                    A[0][2] = 'x';
                    cout << A[i][j] << " ";
                }
                else if (n == 4)
                {
                    A[1][0] = 'x';
                    cout << A[i][j] << " ";
                }
                else if (n == 5)
                {
                    A[1][1] = 'x';
                    cout << A[i][j] << " ";
                }
                else if (n == 6)
                {
                    A[1][2] = 'x';
                    cout << A[i][j] << " ";
                }
                else if (n == 7)
                {
                    A[2][0] = 'x';
                    cout << A[i][j] << " ";
                }
                else if (n == 8)
                {
                    A[2][1] = 'x';
                    cout << A[i][j] << " ";
                }
                else if (n == 9)
                {
                    A[2][2] = 'x';
                    cout << A[i][j] << " ";
                }
            }
            cout << endl;
        }
    }

    void userTwo()
    {

        int n;
        cout << "Please enter player with O::";
        cin >> n;
        system("CLS");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (n == 1)
                {
                    A[0][0] = 'o';
                    cout << A[i][j] << " ";
                }

                else if (n == 2)
                {
                    A[0][1] = 'o';
                    cout << A[i][j] << " ";
                }
                else if (n == 3)
                {
                    A[0][2] = 'o';
                    cout << A[i][j] << " ";
                }
                else if (n == 4)
                {
                    A[1][0] = 'o';
                    cout << A[i][j] << " ";
                }
                else if (n == 5)
                {
                    A[1][1] = 'o';
                    cout << A[i][j] << " ";
                }
                else if (n == 6)
                {
                    A[1][2] = 'o';
                    cout << A[i][j] << " ";
                }
                else if (n == 7)
                {
                    A[2][0] = 'o';
                    cout << A[i][j] << " ";
                }
                else if (n == 8)
                {
                    A[2][1] = 'o';
                    cout << A[i][j] << " ";
                }
                else if (n == 9)
                {
                    A[2][2] = 'o';
                    cout << A[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
    bool gameover()
    {

        for (int i = 0; i < 3; i++)
        {
            if (A[i][0] == A[i][1] && A[i][0] == A[i][2] || A[0][i] == A[1][i] && A[0][i] == A[2][i])
                return false;

            if (A[0][0] == A[1][1] && A[0][0] == A[2][2] || A[0][2] == A[1][1] && A[0][2] == A[2][0])
                return false;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (A[i][j] != 'X' && A[i][j] != 'O')
                    return true;
            }

            bool draw = true;

            return false;
        }
    }
};
int main()
{
    playerone p;
    p.tictac();
    while (p.gameover())
    {
        p.userOne();
        p.userTwo();
        p.gameover();
    }

    return 0;
}