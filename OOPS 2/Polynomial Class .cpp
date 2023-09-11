#include <algorithm>
#include <iostream>
using namespace std;

class Polynomial {
    public:
    int capacity;
    int *degCoeff;
    
    //Overwriting Default Construction
    Polynomial(){
        this -> degCoeff = new int[6];
        this -> capacity = 5;
        for(int i=0; i<=5; i++){
            degCoeff[i]=0;
        }
    }

    //Parameterized Constructor
    Polynomial(int capacity){
        this->degCoeff = new int[capacity+1];
        this -> capacity = capacity;
         for(int i=0; i<=capacity; i++){
            degCoeff[i]=0;
        }
    }

//Copy Constructor
    Polynomial(Polynomial const &p2){
        int *newdeg= new int[p2.capacity+1];
        int newcapacity = p2.capacity;
        for(int i=0; i<=p2.capacity; i++){
            newdeg[i] = p2.degCoeff[i];
        }
        this -> degCoeff = newdeg;
        this -> capacity = newcapacity;
    }

// setCoefficient -
    void setCoefficient(int deg, int coef){
        if(this->capacity < deg){
            int newcapacity = deg;
            int *newdeg = new int[newcapacity+1];
            for(int i=0; i<=newcapacity; i++){
                newdeg[i]=0;
            }
            for(int i=0; i<=capacity; i++){
                newdeg[i]=this -> degCoeff[i];
            }
            newdeg[deg]=coef;
            delete [] degCoeff;
            degCoeff = newdeg;
            capacity = newcapacity;
        }
        else{
            this -> degCoeff[deg] = coef;
        }
    }

    //Overload "+" operator (P3 = P1 + P2) :
    Polynomial operator+(Polynomial const &p2){
        int newcap = max(this -> capacity, p2.capacity);
        Polynomial p3(newcap);
        for(int i=0; i<=newcap; i++){
            if(i<=this -> capacity && i<= p2.capacity){
                p3.degCoeff[i] = this->degCoeff[i] + p2.degCoeff[i];
            }
            else if(i<=this->capacity){
                p3.degCoeff[i] = this->degCoeff[i];
            }
            else{
                p3.degCoeff[i]= p2.degCoeff[i];
            }
        }
        return p3;
    }

    //Overload "-" operator (P3 = p1 - p2) :
    Polynomial operator-(Polynomial const &p2){
        int newcap = max(this -> capacity, p2.capacity);
        Polynomial p3(newcap);
        for(int i=0; i<=newcap; i++){
            if(i<=this -> capacity && i<= p2.capacity){
                p3.degCoeff[i] = this->degCoeff[i] - p2.degCoeff[i];
            }
            else if(i<=this->capacity){
                p3.degCoeff[i] = this->degCoeff[i];
            }
            else{
                p3.degCoeff[i]= 0-p2.degCoeff[i];
            }
        }
        return p3;
    }

    //Overload * operator (P3 = P1 * P2) :
    Polynomial operator*(Polynomial const &p2){
        int newcap = this->capacity + p2.capacity;
        Polynomial p3(newcap);
        for(int i=0; i<=this->capacity; i++){
            for(int j=0; j<=p2.capacity; j++){
                p3.degCoeff[i+j] += this->degCoeff[i]*p2.degCoeff[j];
            }
        }
        return p3;
    }

    //Overload "=" operator (Copy assignment operator) -
    void operator=(Polynomial const &p2){
        int *newdeg= new int[p2.capacity+1];
        int newcapacity = p2.capacity;
        for(int i=0; i<=p2.capacity; i++){
            newdeg[i] = p2.degCoeff[i];
        }
        this -> degCoeff = newdeg;
        this -> capacity = newcapacity;
    }

    //print() -
    void print(){
        for(int i=0; i<=this->capacity; i++){
            if(this->degCoeff[i]!=0){
                cout << this->degCoeff[i] << 'x' << i << " ";
            }
        }
        cout << endl;
    }

};