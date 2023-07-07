class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
        // we used this as parameter name was same as the property used above
    }
    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }
    void simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, denominator); // here also this is optional
        for (int i = 1; i <= j; i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }
    Fraction operator+(Fraction const &f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        // numerator = num;   // implicitly numerator of this
        // denominator = lcm; // implicitly denominator of this
        Fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }
};