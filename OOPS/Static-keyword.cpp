# include <iostream>
using namespace std;

 class student {
    string name ;// we use getter and setter to access private member 
    public: 
    static int timeToComplete;
    int rollNo;
    string subject ;
    int Marks ;
    void print (){
       cout<< name<<endl ; 
       cout<< rollNo<<endl<<subject<<endl <<Marks<<endl ; 
    }
    student( string name , int rollNo , string subject , int Marks){
        this->name=name;
        this->Marks=Marks;
        this->rollNo=rollNo;
        this->subject=subject;
    }

    // static function only access the static member
    static int random(){
       
        return  timeToComplete;
    }
};
int student :: timeToComplete =10;


 int main( ) {
    student temp("Md Aftab alam" , 18 , "DSA" , 95);

    temp.print();
   cout<<"Accessing static Variable"<<endl;
    cout<<student::timeToComplete<<endl;
    cout<<"Accessing static Variable using object"<<endl;
   cout<< temp.timeToComplete<<endl;
     cout<<"Static function call"<<endl;
   cout<<student::timeToComplete<<endl;

    
    return 0;
}
 
