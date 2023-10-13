#include <iostream>
using namespace std;
int main(){
    int a=4,b=6;
    cout<<"\n----------------- \n";
    cout<<" a&b "<< (a&b) <<endl;
    cout<<" a|b "<< (a|b) <<endl;
    cout<<" ~a "<< (~a) << endl;
    cout<<" a^b"<< (a^b) <<endl;
    cout<<"------------------------"<<endl;
    //Left Shift Right Shift
    cout<< (7>>1) <<endl;
    cout<< (8>>2) <<endl;
    cout<< (19<<2) <<endl;
    cout<< (21<<1) <<endl;
    cout<<"------------------------"<<endl;
    //Increment Decrement
    int i=7;
    cout<<i++<<endl;
    cout<<++i<<endl;
    cout<<--i<<endl;
    cout<<i--<<endl;

}