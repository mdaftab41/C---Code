# include <iostream> 
 using namespace std;

class employee{
    private:
    int Id;
    string name;
    string state;
    public:
    
    void setter( int id , string nam , string state){
        this->name=nam;
        this->Id=id;
        this->state=state;

    }

    void getter(){
        cout<<" ID IS :"<<Id <<endl<<"Name is : "<< name<<endl <<"State is : "<< state<<endl;
    }
};

int main(){
employee obj1 ;
obj1.setter(6867,"hgu","fdgdg");
obj1.getter(); 



    return 0;
}