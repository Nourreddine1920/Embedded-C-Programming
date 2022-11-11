#include<iostream>

using namespace std ;

class rectangle {
    public :
    int height ;
    int width ;
    
};

class cube : public rectangle{
    public :
    int weight ; 
    int setArea(){
        return weight * height * width ;
        }
    void printValue(){
        cout << " the area of this house :  " << setArea() << endl ; 
    }
};

int main (){
   cube c ; 
   c.height = 10 ; 
   c.width = 20 ; 
   c.height = 30 ; 
   c.setArea() ; 
    c.printValue() ; 


   
    return 0;
}