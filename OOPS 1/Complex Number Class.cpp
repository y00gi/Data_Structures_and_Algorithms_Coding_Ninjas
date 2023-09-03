/**********
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 ************/


class ComplexNumbers {
    // Complete this class
    int real;
    int imaginary;

    public:

    ComplexNumbers(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void print()
    {
        cout << this->real << ' ' << '+' << " i" << this->imaginary;
    }

    void plus(ComplexNumbers c1)
    {
        int real = this->real + c1.real;
        int imaginary = this->imaginary + c1.imaginary;

        this->real = real;
        this->imaginary = imaginary;
    }

    void multiply(ComplexNumbers c1)
    {
        int real = (this->real * c1.real) - (this->imaginary * c1.imaginary);
        int imaginary = (this->real * c1.imaginary) + (this->imaginary * c1.real);

        this->real = real;
        this->imaginary = imaginary;
    }
    
};