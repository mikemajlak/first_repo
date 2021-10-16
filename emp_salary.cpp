#include<iostream>
#include<conio.h>
class employee
{
	int empid;
	char empname[10];
	float ta;
	float total;
	float empsal;
public:
	void enter() {
		std::cout << "enter empid,empname,empsal " << std::endl;
		std::cin >> empid >> empname >> empsal;
	}
	void calculate() {
		ta = (empsal * 10) / 100;
		total = empsal + ta;
	}
	void display();
};
void employee::display() {
	std::cout << "salary without commision: " << empsal << std::endl;
	std::cout << "total salary: " << total;
}
int main()
{
	employee e;
	e.enter();
	e.calculate();
	e.display();
	return 0;
}