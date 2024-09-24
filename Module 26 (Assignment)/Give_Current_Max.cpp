#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};


class compire
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks == b.marks && a.roll > b.roll) 
            return true;
        else
            return false;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<Student, vector<Student>, compire> pr;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student st(name, roll, marks);
        pr.push(st);
    }

    int oparetion;
    cin >> oparetion;

    for (int i = 0; i < oparetion; i++)
    {
        int op;
        cin >> op;

        if (op == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student st(name, roll, marks);
            pr.push(st);
            cout << pr.top().name << " " << pr.top().roll << " " << pr.top().marks << endl;
        }
        else if (op == 1)
        {
            if (!pr.empty())
            {
                cout << pr.top().name << " " << pr.top().roll << " " << pr.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (op == 2)
        {
            if (!pr.empty())
            {
                pr.pop();
            }
            if (!pr.empty())
            {
                cout << pr.top().name << " " << pr.top().roll << " " << pr.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
