#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int n1;
class tic_toc
{
public:
string a[5][5];
    int n, r, count1;
    int next, t, com, choice1, esle, score1, score2, size;
    string name1, name2;
    tic_toc(int x)
    {
        next = 1;
        n = 7;
        r = 7;
        t = 1;
        size = x;
        name1 = "Player 1";
        name2 = "Player 2";
        for (int i = 1; i < size + 1; i++)
        {
            for (int j = 1; j < size + 1; j++)
            {
                a[i][j] = "[ ]";
            }
        }
    }
    tic_toc operator=(tic_toc &a){
        system("cls");
        cout<<"\n\n\n";
    for (int i = 1; i < size + 1; i++)
    {
        cout<<"\t\t\t\t\t";
        for (int j = 1; j < size + 1; j++)
        {
            if (t == 1)
            {
                if (i == r && j == n)
                    a.a[i][j] = "[O]";
            }
            if (t == 2)
            {
                if (i == r && j == n)
                    a.a[i][j] = "[X]";
            }
            if (i == r && j == n)
            {
                cout << a.a[i][j] << " ";
            }
            else
            {
                cout << a.a[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << name1 << " win times  : " << score1 << "      " << name2 << " win times : " << score2 << endl;
        return a;
    }
    void input();
    void result();
    void computer_play();
    void interesting();
    void check();
    int win();
};
class tic_toc4 : public tic_toc{
public:
    tic_toc4(int x) : tic_toc(x) {}
    void result4();
    void interesting4();
    int win4();
    void check4();
    void input4();
};

void tic_toc4 ::result4()
{
    string s = "[ ]";
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i][j + 2] && a[i][j + 2] == a[i][j + 3] && a[i][1] != s)
            {
                if (a[i][1] == "[X]")
                {
                    cout << "--------" << name2 << " Win--------" << endl;
                    score2++;
                    next = 0;
                }
                else if (a[i][1] == "[O]")
                {
                    cout << "--------" << name1 << " Win--------" << endl;
                    next = 0;
                    score1++;
                }
            }
        }
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            if (a[j][i] == a[j + 1][i] && a[j + 1][i] == a[j + 2][i] && a[j + 2][i] == a[j + 3][i] && a[1][i] != s)
            {
                if (a[1][i] == "[X]")
                {
                    cout << "--------" << name2 << " Win--------" << endl;
                    next = 0;
                    score2++;
                }
                else if (a[1][i] == "[O]")
                {
                    cout << "--------" << name1 << " Win--------" << endl;
                    next = 0;
                    score1++;
                }
            }
        }
    }
    if (a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[3][3] == a[4][4] && a[1][1] != s)
    {
        if (a[1][1] == "[X]")
        {
            cout << "--------" << name2 << " Win--------" << endl;
            next = 0;
            score2++;
        }
        else if (a[1][1] == "[O]")
        {
            cout << "--------" << name1 << " Win--------" << endl;
            next = 0;
            score1++;
        }
    }
    else if (a[1][4] == a[2][3] && a[2][3] == a[3][2] && a[3][2] == a[4][1] && a[1][4] != s)
    {
        if (a[1][4] == "[X]")
        {
            cout << "--------" << name2 << " Win--------" << endl;
            next = 0;
            score2++;
        }
        else if (a[1][4] == "[O]")
        {
            cout << "--------" << name2 << " Win--------" << endl;
            next = 0;
            score1++;
        }
    }
    //}
}
void tic_toc4 ::interesting4()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i][j + 2] && a[i][j] != "[ ]" && a[i][j + 3] == "[ ]")
            {
                r = i;
                n = j + 3;
                esle = 0;
                break;
            }
            else if (a[i][j] == a[i][j + 2] && a[i][j + 2] == a[i][j + 3] && a[i][j] != "[ ]" && a[i][j + 1] == "[ ]")
            {
                r = i;
                n = j + 1;
                esle = 0;
                break;
            }
            else if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i][j + 3] && a[i][j] != "[ ]" && a[i][j + 2] == "[ ]")
            {
                r = i;
                n = j + 2;
                esle = 0;
                break;
            }
            else if (a[i][j + 1] == a[i][j + 2] && a[i][j + 2] == a[i][j + 3] && a[i][j + 1] != "[ ]" && a[i][j] == "[ ]")
            {
                r = i;
                n = j;
                esle = 0;
                break;
            }
        }
    }
    for (int j = 1; j < 5; j++)
    {
        for (int i = 1; i < 2; i++)
        {
            if (a[i][j] == a[i + 1][j] && a[i + 1][j] == a[i + 3][j] && a[i][j] != "[ ]" && a[i + 2][j] == "[ ]")
            {
                r = i + 2;
                n = j;
                esle = 0;
                break;
            }
            else if (a[i][j] == a[i + 2][j] && a[i][j] == a[i + 3][j] && a[i][j] != "[ ]" && a[i + 1][j] == "[ ]")
            {
                r = i + 1;
                n = j;
                esle = 0;
                break;
            }
            else if (a[i][j] == a[i + 2][j] && a[i][j] == a[i + 1][j] && a[i][j] != "[ ]" && a[i + 3][j] == "[ ]")
            {
                r = i + 1;
                n = j;
                esle = 0;
                break;
            }
            else if (a[i + 1][j] == a[i + 2][j] && a[i + 1][j] == a[i + 3][j] && a[i + 1][j] != "[ ]" && a[i][j] == "[ ]")
            {
                r = i;
                n = j;
                esle = 0;
                break;
            }
        }
    }
    if (a[1][1] == a[2][2] && a[1][1] == a[4][4] && a[1][1] != "[ ]" && a[3][3] == "[ ]")
    {
        r = 3;
        n = 3;
        esle = 0;
    }
    else if (a[1][1] == a[3][3] && a[1][1] == a[4][4] && a[1][1] != "[ ]" && a[2][2] == "[ ]")
    {
        r = 2;
        n = 2;
        esle = 0;
    }
    else if (a[3][3] == a[2][2] && a[4][4] == a[2][2] && a[2][2] != "[ ]" && a[1][1] == "[ ]")
    {
        r = 1;
        n = 1;
        esle = 0;
    }
    else if (a[3][3] == a[2][2] && a[1][1] == a[2][2] && a[2][2] != "[ ]" && a[4][4] == "[ ]")
    {
        r = 4;
        n = 4;
        esle = 0;
    }
    else if (a[1][4] == a[2][3] && a[2][3] != "[ ]" && a[2][3] == a[3][2] && a[4][1] == "[ ]")
    {
        r = 4;
        n = 1;
        esle = 0;
    }
    else if (a[1][4] == a[4][1] && a[1][4] != "[ ]" && a[1][4] == a[3][2] && a[2][3] == "[ ]")
    {
        r = 2;
        n = 3;
        esle = 0;
    }
    else if (a[1][4] == a[4][1] && a[1][4] != "[ ]" && a[1][4] == a[2][3] && a[3][2] == "[ ]")
    {
        r = 3;
        n = 2;
        esle = 0;
    }
    else if (a[4][1] == a[2][3] && a[2][3] == a[3][2] && a[4][1] != "[ ]" && a[1][4] == "[ ]")
    {
        r = 1;
        n = 4;
        esle = 0;
    }

}
int tic_toc4 ::win4()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i][j + 2] && a[i][j] == "[X]" && a[i][j + 3] == "[ ]")
            {
                r = i;
                n = j + 3;
                esle = 0;
                break;
            }
            else if (a[i][j] == a[i][j + 2] && a[i][j + 2] == a[i][j + 3] && a[i][j] == "[X]" && a[i][j + 1] == "[ ]")
            {
                r = i;
                n = j + 1;
                esle = 0;
                break;
            }
            else if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i][j + 3] && a[i][j] == "[X]" && a[i][j + 2] == "[ ]")
            {
                r = i;
                n = j + 2;
                esle = 0;
                break;
            }
            else if (a[i][j + 1] == a[i][j + 2] && a[i][j + 2] == a[i][j + 3] && a[i][j + 1] == "[X]" && a[i][j] == "[ ]")
            {
                r = i;
                n = j;
                esle = 0;
                break;
            }
        }
    }
    for (int j = 1; j < 5; j++)
    {
        for (int i = 1; i < 2; i++)
        {
            if (a[i][j] == a[i + 1][j] && a[i + 1][j] == a[i + 3][j] && a[i][j] == "[X]" && a[i + 2][j] == "[ ]")
            {
                r = i + 2;
                n = j;
                esle = 0;
                break;
            }
            else if (a[i][j] == a[i + 2][j] && a[i][j] == a[i + 3][j] && a[i][j] == "[X]" && a[i + 1][j] == "[ ]")
            {
                r = i + 1;
                n = j;
                esle = 0;
                break;
            }
            else if (a[i][j] == a[i + 2][j] && a[i][j] == a[i + 1][j] && a[i][j] == "[X]" && a[i + 3][j] == "[ ]")
            {
                r = i + 1;
                n = j;
                esle = 0;
                break;
            }
            else if (a[i + 1][j] == a[i + 2][j] && a[i + 1][j] == a[i + 3][j] && a[i + 1][j] == "[X]" && a[i][j] == "[ ]")
            {
                r = i;
                n = j;
                esle = 0;
                break;
            }
        }
    }
    if (a[1][1] == a[2][2] && a[1][1] == a[4][4] && a[1][1] == "[X]" && a[3][3] == "[ ]")
    {
        r = 3;
        n = 3;
        esle = 0;
    }
    else if (a[1][1] == a[3][3] && a[1][1] == a[4][4] && a[1][1] == "[X]" && a[2][2] == "[ ]")
    {
        r = 2;
        n = 2;
        esle = 0;
    }
    else if (a[3][3] == a[2][2] && a[4][4] == a[2][2] && a[2][2] == "[X]" && a[1][1] == "[ ]")
    {
        r = 1;
        n = 1;
        esle = 0;
    }
    else if (a[3][3] == a[2][2] && a[1][1] == a[2][2] && a[2][2] == "[X]" && a[4][4] == "[ ]")
    {
        r = 4;
        n = 4;
        esle = 0;
    }
    else if (a[1][4] == a[2][3] && a[2][3] == "[X]" && a[2][3] == a[3][2] && a[4][1] == "[ ]")
    {
        r = 4;
        n = 1;
        esle = 0;
    }
    else if (a[1][4] == a[4][1] && a[1][4] == "[X]" && a[1][4] == a[3][2] && a[2][3] == "[ ]")
    {
        r = 2;
        n = 3;
        esle = 0;
    }
    else if (a[1][4] == a[4][1] && a[1][4] == "[X]" && a[1][4] == a[2][3] && a[3][2] == "[ ]")
    {
        r = 3;
        n = 2;
        esle = 0;
    }
    else if (a[4][1] == a[2][3] && a[2][3] == a[3][2] && a[4][1] == "[X]" && a[1][4] == "[ ]")
    {
        r = 1;
        n = 4;
        esle = 0;
    }
    return esle;
}
void tic_toc ::result()
{
    string s = "[ ]";
    if (size == 3)
    {
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 2; j++)
            {
                if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i][j + 2] && a[i][1] != s)
                {
                    if (a[i][1] == "[X]")
                    {
                        cout << "--------" << name2 << " Win--------" << endl;
                        score2++;
                        next = 0;
                    }
                    else if (a[i][1] == "[O]")
                    {
                        cout << "--------" << name1 << " Win--------" << endl;
                        next = 0;
                        score1++;
                    }
                }
            }
        }
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 2; j++)
            {
                if (a[j][i] == a[j + 1][i] && a[j + 1][i] == a[j + 2][i] && a[1][i] != s)
                {
                    if (a[1][i] == "[X]")
                    {
                        cout << "--------" << name2 << " Win--------" << endl;
                        next = 0;
                        score2++;
                    }
                    else if (a[1][i] == "[O]")
                    {
                        cout << "--------" << name1 << " Win--------" << endl;
                        next = 0;
                        score1++;
                    }
                }
            }
        }
        if (a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1] != s)
        {
            if (a[1][1] == "[X]")
            {
                cout << "--------" << name2 << " Win--------" << endl;
                next = 0;
                score2++;
            }
            else if (a[1][1] == "[O]")
            {

                cout << "--------" << name1 << " Win--------" << endl;
                next = 0;
                score1++;
            }
        }
        else if (a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[1][3] != s)
        {
            if (a[1][3] == "[X]")
            {
                cout << "--------" << name2 << " Win--------" << endl;
                next = 0;
                score2++;
            }
            else if (a[1][3] == "[O]")
            {
                cout << "--------" << name1 << " Win--------" << endl;
                next = 0;
                score1++;
            }
        }
    }
}
void tic_toc ::interesting()
{
    if (size == 3)
    {
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 2; j++)
            {
                if (a[i][j] == a[i][j + 1] && a[i][j] != "[ ]" && a[i][j + 2] == "[ ]")
                {
                    r = i;
                    n = j + 2;
                    esle = 0;
                    break;
                }
                else if (a[i][j] == a[i][j + 2] && a[i][j] != "[ ]" && a[i][j + 1] == "[ ]")
                {
                    r = i;
                    n = j + 1;
                    esle = 0;
                    break;
                }
                else if (a[i][j + 1] == a[i][j + 2] && a[i][j + 1] != "[ ]" && a[i][j] == "[ ]")
                {
                    r = i;
                    n = j;
                    esle = 0;
                    break;
                }
            }
        }
        for (int j = 1; j < 4; j++)
        {
            for (int i = 1; i < 2; i++)
            {
                if (a[i][j] == a[i + 1][j] && a[i][j] != "[ ]" && a[i + 2][j] == "[ ]")
                {
                    r = i + 2;
                    n = j;
                    esle = 0;
                    break;
                }
                else if (a[i][j] == a[i + 2][j] && a[i][j] != "[ ]" && a[i + 1][j] == "[ ]")
                {
                    r = i + 1;
                    n = j;
                    esle = 0;
                    break;
                }
                else if (a[i + 1][j] == a[i + 2][j] && a[i + 1][j] != "[ ]" && a[i][j] == "[ ]")
                {
                    r = i;
                    n = j;
                    esle = 0;
                    break;
                }
            }
        }
        if (a[1][1] == a[2][2] && a[1][1] != "[ ]" && a[3][3] == "[ ]")
        {
            r = 3;
            n = 3;
            esle = 0;
        }
        else if (a[1][1] == a[3][3] && a[1][1] != "[ ]" && a[2][2] == "[ ]")
        {
            r = 2;
            n = 2;
            esle = 0;
        }
        else if (a[3][3] == a[2][2] && a[2][2] != "[ ]" && a[1][1] == "[ ]")
        {
            r = 1;
            n = 1;
            esle = 0;
        }
        else if (a[1][3] == a[2][2] && a[2][2] != "[ ]" && a[3][1] == "[ ]")
        {
            r = 3;
            n = 1;
            esle = 0;
        }
        else if (a[1][3] == a[3][1] && a[1][3] != "[ ]" && a[2][2] == "[ ]")
        {
            r = 2;
            n = 2;
            esle = 0;
        }
        else if (a[3][1] == a[2][2] && a[3][1] != "[ ]" && a[1][3] == "[ ]")
        {
            r = 1;
            n = 3;
            esle = 0;
        }
    }
    
}
int tic_toc ::win()
{
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 2; j++)
            {
                if (a[i][j] == a[i][j + 1] && a[i][j] == "[X]" && a[i][j + 2] == "[ ]")
                {
                    r = i;
                    n = j + 2;
                    esle = 0;
                    break;
                }
                else if (a[i][j] == a[i][j + 2] && a[i][j] == "[X]" && a[i][j + 1] == "[ ]")
                {
                    r = i;
                    n = j + 1;
                    esle = 0;
                    break;
                }
                else if (a[i][j + 1] == a[i][j + 2] && a[i][j + 1] == "[X]" && a[i][j] == "[ ]")
                {
                    r = i;
                    n = j;
                    esle = 0;
                    break;
                }
            }
        }
        for (int j = 1; j < 4; j++)
        {
            for (int i = 1; i < 2; i++)
            {
                if (a[i][j] == a[i + 1][j] && a[i][j] == "[X]" && a[i + 2][j] == "[ ]")
                {
                    r = i + 2;
                    n = j;
                    esle = 0;
                    break;
                }
                else if (a[i][j] == a[i + 2][j] && a[i][j] == "[X]" && a[i + 1][j] == "[ ]")
                {
                    r = i + 1;
                    n = j;
                    esle = 0;
                    break;
                }
                else if (a[i + 1][j] == a[i + 2][j] && a[i + 1][j] == "[X]" && a[i][j] == "[ ]")
                {
                    r = i;
                    n = j;
                    esle = 0;
                    break;
                }
            }
        }
        if (a[1][1] == a[2][2] && a[1][1] == "[X]" && a[3][3] == "[ ]")
        {
            r = 3;
            n = 3;
            esle = 0;
        }
        else if (a[1][1] == a[3][3] && a[1][1] == "[X]" && a[2][2] == "[ ]")
        {
            r = 2;
            n = 2;
            esle = 0;
        }
        else if (a[3][3] == a[2][2] && a[2][2] == "[X]" && a[1][1] == "[ ]")
        {
            r = 1;
            n = 1;
            esle = 0;
        }
        else if (a[1][3] == a[2][2] && a[2][2] == "[X]" && a[3][1] == "[ ]")
        {
            r = 3;
            n = 1;
            esle = 0;
        }
        else if (a[1][3] == a[3][1] && a[1][3] == "[X]" && a[2][2] == "[ ]")
        {
            r = 2;
            n = 2;
            esle = 0;
        }
        else if (a[3][1] == a[2][2] && a[3][1] == "[X]" && a[1][3] == "[ ]")
        {
            r = 1;
            n = 3;
            esle = 0;
        }
    return esle;
}
void tic_toc4 ::input4()
{
    if (t == 1)
    {
        cout << "First person Turn : ";
        cin >> n;
        if (n < 5)
        {
            r = 1;
        }
        if (n > 4 && n < 9)
        {
            r = 2;
            n -= 4;
        }
        if (n > 8 && n < 13)
        {
            r = 3;
            n -= 8;
        }
        if (n > 12 && n < 17)
        {
            r = 4;
            n -= 12;
        }
    }
    if (t == 2)
    {
        if (com == 2)
        {
            cout << "Second person Turn : ";
            cin >> n;
            if (n < 5)
            {
                r = 1;
            }
            if (n > 4 && n < 9)
            {
                r = 2;
                n -= 4;
            }
            if (n > 8 && n < 13)
            {
                r = 3;
                n -= 8;
            }
            if (n > 12 && n < 17)
            {
                r = 4;
                n -= 12;
            }
        }
        if (com == 1)
        {
            esle = 1;
            if (win4())
                interesting4();
            if (esle == 1)
            {
                n = rand() % 17;
                if (n < 5)
                {
                    r = 1;
                }
                if (n > 4 && n < 9)
                {
                    r = 2;
                    n -= 4;
                }
                if (n > 8 && n < 13)
                {
                    r = 3;
                    n -= 8;
                }
                if (n > 12 && n < 17)
                {
                    r = 4;
                    n -= 12;
                }
            }
        }
    }
    //}
}
void tic_toc ::input()
{
    if (size == 3)
    {
        if (t == 1)
        {
            cout << "First person Turn : ";
            cin >> n;
            if (n < 4)
            {
                r = 1;
            }
            if (n > 3 && n < 7)
            {
                r = 2;
                n -= 3;
            }

            if (n > 6 && n < 10)
            {
                r = 3;
                n -= 6;
            }
        }
        if (t == 2)
        {
            if (com == 2)
            {
                cout << "Second person Turn : ";
                cin >> n;
                if (n < 4)
                {
                    r = 1;
                }
                if (n > 3 && n < 7)
                {
                    r = 2;
                    n -= 3;
                }

                if (n > 6 && n < 10)
                {
                    r = 3;
                    n -= 6;
                }
            }
            if (com == 1)
            {
                if (choice1 == 1)
                {
                    esle = 1;
                    if (win())
                        interesting();
                    if (esle == 1)
                    {
                        n = rand() % 10;
                        if (n < 4)
                        {
                            r = 1;
                        }
                        if (n > 3 && n < 7)
                        {
                            r = 2;
                            n -= 3;
                        }

                        if (n > 6 && n < 10)
                        {
                            r = 3;
                            n -= 6;
                        }
                    }
                }
                if (choice1 == 2)
                {
                    esle = 1;
                    computer_play();
                }
            }
        }
    }
}
void tic_toc ::computer_play()
{
    if (a[2][2] == "[ ]")
    {
        r = 2;
        n = 2;
    }
    else
    {
        esle = 1;
        if (win())
            interesting();
        if (esle == 0)
        {
            goto label3;
        }
        else
        {
        label1:
            int k1 = rand() % 10;
            if (k1 == 1 || k1 == 3 || k1 == 7 || k1 == 9)
            {
                if (k1 < 4)
                {
                    r = 1;
                    n = k1;
                    goto label3;
                }
                else if (k1 > 6)
                {
                    r = 3;
                    n = k1 - 6;
                    goto label3;
                }
                else if (a[r][n] != "[ ]")
                {
                    n = rand() % 10;
                    if (n < 4)
                    {
                        r = 1;
                        goto label3;
                    }
                    else if (n > 3 && n < 7)
                    {
                        r = 2;
                        n -= 3;
                        goto label3;
                    }

                    else if (n > 6 && n < 10)
                    {
                        r = 3;
                        n -= 6;
                        goto label3;
                    }
                }
            }
            else if (count1 == 4)
            {
                n = rand() % 10;
                if (n < 4)
                {
                    r = 1;
                    goto label3;
                }
                else if (n > 3 && n < 7)
                {
                    r = 2;
                    n -= 3;
                    goto label3;
                }

                else if (n > 6 && n < 10)
                {
                    r = 3;
                    n -= 6;
                    goto label3;
                }
            }
            else if (count1 >= 4 && n1 > 0)
            {
                n = rand() % 10;
                if (n < 4)
                {
                    r = 1;
                    goto label3;
                }
                else if (n > 3 && n < 7)
                {
                    r = 2;
                    n -= 3;
                    goto label3;
                }

                else if (n > 6 && n < 10)
                {
                    r = 3;
                    n -= 6;
                    goto label3;
                }
            }
            else
            {
                count1++;
                goto label1;
            }
        }
    }
label3:
    check();
}
void tic_toc ::check()
{
    if (a[r][n] == "[X]" || a[r][n] == "[O]")
    {
        cout << "Input is repeated So Again ";
        input();
        check();
    }
    else if (a[r][n] != "[ ]")
    {
        cout << "Input is Invalid So Again ";
        input();
        check();
    }
}
void tic_toc4 ::check4()
{
    if (a[r][n] == "[X]" || a[r][n] == "[O]")
    {
        cout << "Input is repeated So Again ";
        input4();
        check4();
    }
    else if (a[r][n] != "[ ]")
    {
        cout << "Input is Invalid So Again ";
        input4();
        check4();
    }
}
void Welcome()
{
    system("cls");
    cout << "               *********************\n";
    cout << "               | YOUR    WELCOME   |\n";
    cout << "               *********************" << endl;
}
void Thank_you()
{
    cout << "               *********************\n";
    cout << "               |      THANK YOU    |\n";
    cout << "               *********************" << endl;
}
int main()
{
come2:
    Welcome();
    int size1;
    cout << "Enter Dimensional (3 or 4): ";
    cin >> size1;
    int n = 3;
    if (size1 == 4)
        n1 = 16;
    else
        n1 = 9;
    cout << "If you want take player name then Enter 1 Else Enter 2\nEnter choice : ";
    int name;
    cin >> name;
come1:
    int one = 0;
come:
    tic_toc4 t1(size1);
    if (one == 0)
    {
        if (n == 3)
        {
            cout << "For two player : Enter-2\nFor One player : Enter-1\nEnter Choice :-";
            cin >> t1.com;
        }
        if (name == 1)
        {
            if (t1.com == 2)
            {
                cout << "Enter name of player 1 : ";
                cin >> t1.name1;
                cout << "Enter name of player 2 : ";
                cin >> t1.name2;
            }
            if (t1.com == 1)
            {
                cout << "Enter name of player 1 : ";
                cin >> t1.name1;
                t1.name2 = "Computer";
            }
            name = 2;
        }
        if (t1.com == 1 && size1 == 3)
        {
            cout << "Choose the level : \nFor Level 1. Enter 1\nFor Level 2. Enter 2.\nEnter Choice : ";
            cin >> t1.choice1;
        }
        t1.score1 = 0;
        t1.score2 = 0;
        one = 1;
    }
    t1 = t1;
    while (n1--)
    {
        if (size1 == 3)
        {
            t1.input();
            t1.check();
            t1 = t1;
            t1.result();
        }
        if (size1 == 4)
        {
            t1.input4();
            t1.check4();
            t1 = t1;
            t1.result4();
        }
        if (t1.t == 1)
            t1.t = 2;
        else
        {
            t1.t = 1;
        }
        int a = t1.score1;
        int b = t1.score2;
        if (t1.next == 0 || n1 == 0)
        {
            cout << endl;
            if (t1.t == 1)
                t1.t = 2;
            else
            {
                t1.t = 1;
            }
            t1 = t1;
            if(size1==3)
            t1.result();
            if(size1==4)
            t1.result4();
            if (t1.score1 > a)
                t1.score1--;
            if (t1.score2 > b)
                t1.score2--;
            if (n1 == 0 && t1.next != 0)
                cout << "-----Game draw------" << endl;
            cout << "Enter 1. : To play again" << endl;
            if (t1.com == 1 && size1 == 3)
                cout << "Enter 2. : To change level" << endl;
            cout << "Enter 3. : To start game with Starting \nEnter 0 : For exit" << endl;
            if (size1 == 3)
                n1 = 9;
            else
                n1 = 16;
        cho:
            cout << "Enter choice : ";
            cin >> n;
            if (n == 1)
                goto come;
            else if (n == 2)
                goto come1;
            else if (n == 3)
                goto come2;
            else if (n == 0)
            {
                Thank_you();
                exit(0);
            }
            else
            {
                cout << "Unavailable Choice Choose again " << endl;
                goto cho;
            }
        }
    }
    return 0;
}