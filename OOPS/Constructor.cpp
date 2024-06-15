# include <iostream>
using namespace std ; 

class student {
    string name ;// we use getter and setter to access private member 
    string state ;
    public: 
    int rollNo;
    string subject ;
    int Marks ;

    // Constructer 
    student(){
        cout<<"constucter call"<<endl ;
    }
    void setName( string nam){
        name = nam;
    }
    void setState( string st){
        state = st;
    }
    string getName(){
        return name;
    }
    string getState(){
        return state ;
    }
};

int main(){
    cout<< "object Created " <<endl;
    student obj1; // Statis allocation of object 
    //Dynamic Allocation of object 
    cout<<"Size of obj1 :"<< sizeof(obj1)<<endl;
    student *obj2 = new student;
    cout<< " Size of obj2 : " << sizeof(obj2) <<endl ;
     
   // obj1.name="Aftabalam";
    obj1.rollNo= 19;
    obj1.Marks =95;
    obj1.subject=" English";
    obj1.setName("AftabAlam");
    obj1.setState("Bihar");
    cout<<"Name is : "<<obj1.getName()<< endl << "State is :" << obj1.getState()<<endl ;
    cout<< "Marke is : " << obj1.Marks<<endl <<"RollNo is : " << obj1.rollNo<<endl << "Subject is : " <<obj1.subject<< endl ;
}