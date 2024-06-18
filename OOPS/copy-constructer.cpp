# include <iostream>
using namespace std ; 

class student {
    string name ;// we use getter and setter to access private member 
    string state ;
    public: 
    int rollNo;
    string subject ;
    int Marks ;
    // constructer for private element 
   student( string name , string state){
    this->name=name;
    this->state=state ;

   }
  // constrcter for public Element
  student ( int rollNo , string subject , int Marks){
    this->rollNo= rollNo;
    this->subject = subject ;
    this->Marks = Marks ;
  }
  // copy constructer pass by reference
  student ( student & sub){
    cout<<"copy constructer call"<< endl ;
    this->rollNo= sub.rollNo;
    this->subject =sub. subject ;
    this->Marks = sub.Marks ;
  }
   void print(){
    cout<<name<<endl<<state<<endl;
   // cout<<rollNo << endl <<subject <<endl <<Marks <<endl ;
   }
   void printsub(){
    //cout<<name<<endl<<state<<endl;
    cout<<rollNo << endl<<subject <<endl <<Marks <<endl ;
   }


   // note --->  if you create any constructer then the defult constructer will b e destroy
    // Constructer 
    // student(){
    //     cout<<"constucter call"<<endl ;
    // }
    // void setName( string name){
    //     this->name = name;// use this for current context 
    // }
    // void setState( string state){
    //     this->state = state;
    // }
    // string getName(){
    //     return name;
    // }
    // string getState(){
    //     return state ;
    // }
};

int main(){

 student temp("Aftab" , " Bihar");
 student pub(13 , "Math" , 95);
 temp.print();
 pub.printsub();

 // copy constructer created defult and manually 
 student cp(pub);
 //student cp =student pub;
 
 cp.printsub();
 // copy assignment 
 cout<<"copy sub element into sub"<<endl;
 temp=pub;
 temp.printsub();
 pub.printsub();

//     cout<< "object Created " <<endl;
//     student obj1; // Statis allocation of object 
//     //Dynamic Allocation of object 
//     cout<<"Size of obj1 :"<< sizeof(obj1)<<endl;
//     student *obj2 = new student;
//     cout<< " Size of obj2 : " << sizeof(obj2) <<endl ;
     
//    // obj1.name="Aftabalam";
//     obj1.rollNo= 19;
//     obj1.Marks =95;
//     obj1.subject=" English";
//     obj1.setName("AftabAlam");
//     obj1.setState("Bihar");
//     cout<<"Name is : "<<obj1.getName()<< endl << "State is :" << obj1.getState()<<endl ;
//     cout<< "Marke is : " << obj1.Marks<<endl <<"RollNo is : " << obj1.rollNo<<endl << "Subject is : " <<obj1.subject<< endl ;
}