class student
{
public:
    int rollno;

private:
    int age;

public:
    student()
    {
        cout << "constructor called" << endl;
    }

    student(int r)
    {
        cout << " constructor 2 called" << endl;
        rollno = r;
    }
    student(int r, int n)
    {
        cout << " constructor 3 called" << endl;
    }
    void display()
    {
        cout << age << " " << rollno << endl;
    }
};
