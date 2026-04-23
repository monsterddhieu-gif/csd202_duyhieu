#include<bits/stdc++.h>
using namespace std;

class Student{
	private:
		string name;
		int age;
	public:
		Student(){}
		void getInformation(){
			getline(cin, name);
			cin >> age;
		}
		void display(){
			cout << "Name: " << this->name << endl;
			cout << "Age: " << this->age << endl; 
		}
};

int main(){
	Student s1;
	s1.getInformation();
	s1.display();
	return 0;
}