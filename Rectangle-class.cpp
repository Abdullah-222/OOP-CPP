#include<iostream>
using namespace std;

class Rectangle {
	int length;
	int width;
	int area;
public:
	void set_length(int l) {
		if (l>0) {
			this->length = l;
		}
		else {
			cout << "Length should be greater than zero" << endl;
		}
	}
	void set_width(int w) {
		if (w > 0) {
			this->width = w;
		}
		else {
			cout << "Width should be greater than zero" << endl;
		}
	}
	void calculate_area() {
		area = length * width;
	}
	void get_length() {
		cout << "Length: " << length << endl;
	}
	void get_width() {
		cout << "Width: " << width << endl;
	}
	void get_area() {
		cout << "Area: " << area << endl;
	}
	bool is_square() {
		if (length == width) {
			cout << "Square" << endl;
			return true;
		}
		else {
			cout << "Rectangle" << endl;
			return false;
		}
	}
	void display() {
		for (int i = 0; i <length ; ++i) {
			for (int i = 0; i < width; ++i) {
				cout << "*";
			}
			cout << endl;
		}
	}
};


int main()
{ 
	Rectangle Rec;
	Rec.set_length(3);
	Rec.set_width(5);
	Rec.display();



	
	
	return 0;
}
