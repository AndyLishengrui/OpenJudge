#include <iostream>

using namespace std;

class Character {
private:
    char c_;
public:
    Character() {cout<<"Default constructor is called!"<<endl;}
    Character(char c) {c_ = c; cout<<"Character "<<c_<<" is created!"<<endl;}
    void setCharacter(char c) {c_ = c;}
    int getAsciiCode() {return c_;}
    char getCharacter() {return c_;}
    ~Character() {cout<<"Character "<<c_<<" is erased!"<<endl;}
};
int main()
{
    char ch;
    Character ch1, ch2('a');
    cin>>ch;
    ch1.setCharacter(ch);
    cout<<"ch1 is "<<ch1.getCharacter()<<" and its ASCII code is "<<ch1.getAsciiCode()<<"."<<endl;
    cout<<"ch2 is "<<ch2.getCharacter()<<" and its ASCII code is "<<ch2.getAsciiCode()<<"."<<endl;
    return 0;
}
/**************************************************************
	Problem: 1774
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

