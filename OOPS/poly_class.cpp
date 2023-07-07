class Polynomial
{
    int *degcoeff;
    int capacity;

public:
    Polynomial()
    {
        degcoeff = new int[5];
        int capacity = 5;
        for (int i = 0; i < capacity; i++)
        {
            degcoeff[i] = 0;
        }
    }
    Polynomial(Polynomial const &p)
    {
        this->degcoeff = new int[p.capacity];
        for (int i = 0; i < capacity; i++)
        {
            this->degcoeff[i] = p.degcoeff[i];
        }
        this->capacity = p.capacity;
    }
    void setCoefficient(int degree, int coeff)
    {
        if (degree < 0)
            return;
        if (degree >= capacity)
        {
            int *newpoly = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newpoly[i] = degcoeff[i];
            }
            delete[] degcoeff;
            degcoeff = newpoly;
            capacity *= 2;
        }
        degcoeff[degree] = coeff;
    }
    Polynomial operator=(Polynomial const &p)
    {
        this->degcoeff = new int[p.capacity];
        for (int i = 0; i < capacity; i++)
        {
            this->degcoeff[i] = p.degcoeff[i];
        }
        this->capacity = p.capacity;
    }

    void print()
    {
        for (int i = 0; i < capacity; i++)
        {
            if (degcoeff[i] != 0)
            {
                // cout << degcoeff[i] << "x" << i << " " << endl;
            }
        }
    }
};