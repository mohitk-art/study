#include<iostream>
using namespace std;
class add
{
    public:
    //constructor
    add(int i=0){
        total=i;
    }


    //interface to outside word
    void addnum(int num){
        total=total+num;        .
    }


    //interface outside word
    int gettotal(){
        return total;
    };


    private:
    //hidden data from outside world 
    int total;
};


int main(){
    add a;
    a.addnum(10);
    a.addnum(20);
    a.addnum(30);
    cout<<endl<<"total "<<a.gettotal()<<endl;
    return 0;
}
