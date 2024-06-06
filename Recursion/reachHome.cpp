# include<iostream>
using namespace std;

void reachHome( int src , int des){
    if(src== des){
        cout<<" Reach the home"<<endl;
        return ;
    }
    cout<<src<<"-->"<<src+1<<endl;
    src++;
    return reachHome(src , des);
}

int main(){
    int src=1;
    int des;
    cin>> des;
    cout<< "Enter the destination "<< endl;
    reachHome(src , des);

}