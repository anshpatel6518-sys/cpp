#include<iostream>
using namespace std;
class student{
    int roll;
    public:
    student(int r){
        roll = r;
    }
    void display(){
        cout<<"roll= "<<roll<< endl;
        }
};
int main(){
    student s1(101);
   student s2 = s1; //copy constructor called
   s1.display();
   s2.display();    
    return 0;
}
