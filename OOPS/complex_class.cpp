class ComplexNumbers {
    // Complete this class 
private:   
    int real;
    int imaginary;
public:    
    ComplexNumbers (int real,int imaginary)
    {
        this-> real =real;
        this-> imaginary= imaginary;
    }
    void print()
    {
 		cout<< real << " + " <<"i"<<imaginary;
    }
    void plus(ComplexNumbers c2)
    {
        int r=real + c2.real ;
        int i=imaginary + c2.imaginary ;
        real = r;
        imaginary = i;
    }
    void multiply(ComplexNumbers c2)
    {
        int r=real*c2.real - imaginary*c2.imaginary ;
        int i=real*c2.imaginary + imaginary*c2.real;
        real = r;
        imaginary = i;
    }    
};