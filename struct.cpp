#include<iostream>

using namespace std ;

struct student {
    int marks ; 
    string Fullname ;
    int rollno ;
};

int main (){
    student mystudent[3];

    for (int i =0 ; i < 3 ; i++){
        cout << " Student " << i +1 << endl ;
        cout << " Enter the name of the student : "  << endl ;
        cin >> mystudent[i].Fullname ; 
        cout << " Enter the marks of the student : "  << endl ;
        cin >> mystudent[i].marks ;
        cout << " Enter the rollno of the student : "  << endl ;
        cin >> mystudent[i].rollno ;



    }

    return 0;
}