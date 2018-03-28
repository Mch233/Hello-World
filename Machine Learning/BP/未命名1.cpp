#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::cin; using std::cout; using std::endl;
using std::vector;


int main()
{
	
	return 0;
 } 
 
 class neuron 
{
private:
    double speed;
public:
    void init(int s)
    {
        speed = s;
    }
    void run()
    {
        cout<<"It is running at speed of ";
        cout<<speed<<endl;
    }
    void stop()
    {
        cout<<"STOP!"<<endl;
    }
    void speedUp(int s)
    {
        speed += s;
    }
    void speedDown(int s)
    {
        speed -= s;
    }
};
 

