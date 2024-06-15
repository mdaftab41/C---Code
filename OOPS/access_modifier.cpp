# include <iostream>
using namespace std ; 

class student {
    string name ;// we use getter and setter to access private member 
    public: 
    int rollNo;
    string subject ;
    int Marks ;
    void print (){
       cout<< name<<endl ; 
    }
};

int main(){
    student obj1;
     
   // obj1.name="Aftabalam";
    obj1.rollNo= 19;
    obj1.Marks =95;
    obj1.subject=" English";
    cout<< "Marke is : " << obj1.Marks<<endl <<"RollNo is : " << obj1.rollNo<<endl << "Subject is : " <<obj1.subject<< endl ;
}