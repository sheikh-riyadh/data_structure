#include <bits/stdc++.h>
using namespace std;

class CustomCompaire
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks > b.marks)
            return true;
        else
            return false;
    }
};

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

int main()
{

    priority_queue<Student, vector<Student>, CustomCompaire> pq;

    int n;
    cin >> n;

    while (!pq.empty())
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;

        Student obj(name, roll, marks);
        pq.push(obj);
    }

    return 0;
}