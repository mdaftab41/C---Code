# include <iostream> 
 using namespace std;

 class human{
    public:
    int weight;
    int height;
    string name;

    void setter(int weight , int height , string name){
        this->height = height;
        this->weight=weight;
        this->name= name ;
    }

    void getter(){
        cout<<" Name is : "<<name <<endl <<"Height is : " <<height <<endl <<" Weight is :" <<weight<<endl ;
    }
 };

 class male : public human{
    public:
    string state;
    void sleep(){
        cout<<"sleeping now"<<endl;
    }
 };

 int main(){
   male obj1;
   obj1.setter(45 ,5,"Aftab Alam");
   obj1.getter();
   obj1.state="Bihar";
   cout<<" State is : " << obj1.state <<endl;
   obj1.sleep();
    return 0;
 }