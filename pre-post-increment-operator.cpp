#include<iostream>

using namespace std ;


class A {
    private :
        int weight ;
    public :
        A (int x){
            weight = x ; 
        }

       


        void printValue(){
            cout << " weight is :  " << weight<< endl ;
        }
    
    void operator++(){ // pre increment operator 
        ++weight ; 
    }
    void operator--(){
        --weight;
    }

};

int main (){
   
    A person4(88); // pre increment overloading 
    ++person4;
    A person3(88);
    --person3;

    person4.printValue();
    person3.printValue();


    
    return 0;
}