#include<iostream>

using namespace std ;


class A {
    private :
        int weight ;
    public :
        A (int x){
            weight = x ; 
        }

        A (){

        }


        void printValue(){
            cout << " weight is :  " << weight<< endl ;
        }
    A operator+(A w){ // operator overloading 
        A temp ;
        temp.weight = weight + w.weight ; 
        return temp ; 
    }
    void operator++(){ // pre increment operator 
        ++weight ; 
    }

};

int main (){
    A person1(55) ; 
    A person2(21) ; 
    A person; 
    A person4(88); // pre increment overloading 
    ++person4;
    person4.printValue();
    person = person1 + person2 ; 
    person.printValue();

    
    return 0;
}