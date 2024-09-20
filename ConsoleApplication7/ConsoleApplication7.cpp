#include <iostream>
using namespace std; 

/*class Drobi
{
private:
	int x;
	int y;
public:
	void Print()
	{
		cout << "Numerator: " << x << " Denumenator: " << y << endl;
	}
	void Input(int a, int b) {
		x = a;
		y = b;
	}
};

int main()
{
	Point a; 
	a.Input(1, 2); 
	a.Print();

	Point b;
	b.Input(10, 20);
	b.Print();
}

#include<iostream>
using namespace std;*/


class Drob
{
private: 
    int x;
    int y;
public: 
    void Print() 
    {
        cout << "Numerator: " << x << "\tDenumerator: " << y << endl;
    }
    void Input(int a, int b) 
    {
        x = a;
        y = b;
    }
};
int main()
{
    Drob a; 
    a.Input(1, 2); 
    a.Print();

    Drob b;
    b.Input(rand = min + rand() % (max - min + 1));
    b.Print();
}