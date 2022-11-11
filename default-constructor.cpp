#include<iostream>
#include<string.h>

using namespace std ;

class Person {
    private:
        string name;
        int age ;
        string gender ;
    public :
        Person(){
            name =  " Noureddine  ";
            age = 18 ; 
            gender =  " male  ";  
        }// default constructor initilized with non parameter inside the function !!!!!
        Person(string name_ , int age_ , string gender_ ){
            name = name_ ; 
            age = age_ ; 
            gender = gender_ ; 
        }// paramterized constructor initialized with parameters !!!!!!
        Person(Person &obj1){
            name = obj1.name ; 
            age = obj1.age ; 
            gender = obj1.gender ; 
        }// copy constructor initialized with same refrence from obj1 !!!!!!

        void getData(){
            cout << " Name" << name << endl;
            cout << " Age " << age<< endl ; 
            cout << " Gender " << gender<< endl ; 
        }
};

int main (){
    Person obj , obj1(" ali" , 22 , "male") , obj2(obj1);
    obj.getData();
    obj1.getData();
    obj2.getData();

   
    return 0;
}