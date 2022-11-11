#include<iostream>

using namespace std ;

class home {
    int height = 0;
    int width = 0;
    public :
        void setData(int x , int y ){
        height = x ; 
        width = y ; 
        }
        int setArea(){
        return height * width ; 
        }
};

int main (){
    home myhome ; 
    myhome.setData(21 , 54) ; 
    myhome.setArea();
    cout << " the area of this house :  " << myhome.setArea() << endl;

   
    return 0;
}