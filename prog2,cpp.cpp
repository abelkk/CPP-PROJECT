#include <iostream>
using namespace std;

// ---------------------
// Student Class
// ---------------------
class Student {
private:
    string name;
    int age;
    float grade;

public:
    // Constructor
    Student(string n, int a, float g) {
        name = n;
        age = a;
        grade = g;
    }

    // Method: introduce the student
    void introduce() {
        cout << "Hi, I'm " << name 
             << ", I'm " << age 
             << " years old." << endl;
    }

    // Method: show grade
    void showGrade() {
        cout << name << "'s grade: " << grade << endl;
    }

    // Getter (access private variable)
    string getName() {
        return name;
    }

    // Setter (modify private variable)
    void setGrade(float g) {
        grade = g;
    }
};

// ---------------------
// Main program
// ---------------------
int main() {
    // Create objects (students)
    Student s1("Abel", 19, 88.5f);
    Student s2("Ivy", 20, 92.0f);

    // Use object methods
    s1.introduce();
    s1.showGrade();

    s2.introduce();
    s2.showGrade();

    // Modify a grade using setter
    s1.setGrade(95.0f);
    cout << "\nAfter updating Abel's grade:\n";
    s1.showGrade();

    // Get a name using getter
    cout << "\nAccessing private data using getter:\n";
    cout << "Student 1 name: " << s1.getName() << endl;

    return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	

