//         ------------------ EXAMPLE : 1.2-------------------
//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class complex {
//private:
//	float im;
//	float re;
//public:
//	complex(float r, float i)
//	{
//		r = re;
//		i = im;
//	}
//	complex(float r)
//	{
//		re = r; im = 0.0;
//	}
//	~complex() {};
//	double Magnitude()
//	{
//		return sqrt(re * re + Imag() * Imag());
//	}
//	float Real() { return re; }
//	float Imag() { return im; }
//	complex operator+(complex b)
//	{
//		return complex(re + b.re, im + b.im);
//	}
//	complex operator=(complex b)
//	{
//		re = b.re; im = b.im; return *this;
//	}
//};
//
//int main()
//{
//	complex a(1.0, 1.0);
//	complex* b = new complex(5.0);
//	complex c(0, 0);
//	cout << "a real = " << a.Real() << " a imaginary = " << a.Imag() << endl;
//	cout << "b real= " << b->Real() << " b imaginary = " << b->Imag() << endl;
//	c = a + (*b);
//	cout << "c real = " << c.Real() << " c imaginary = " << c.Imag() << endl;
//	delete b;
//	return 0;
//
//               ---------------------------------------------
//                               EXAMPLE 1.3
//               ---------------------------------------------
//#include<iostream>
//using namespace std;
//
//template<class T>
//T GetMax(T a, T b)
//{
//	T result;
//	result = (a > b) ? a : b;
//	return result;
//}
//int main()
//{
//	int i = 5, j = 6, k;
//	long l = 10, m = 5, n;
//	k = GetMax<int>(i, j);
//	n = GetMax <long>(l, m);
//	cout << k << endl;
//	cout << n << endl;
//	return 0;
//}
//                ----------------------------------------------------
//                              CLASS TEMPLATE
//                ---------------------------------------------------
//template<class T>
//class mypair
//{
//	T values[2];
//public:
//	mypair(T first, T second)
//	{
//		values[0] = first; values[1] = second;
//	}
//};
//int main() {
//	mypair<int>myobject(110, 38);
//	return 0;
//}
//                   ------------------------------------------
//                               EXAMPLE 1.4
//                   -----------------------------------------
//#include<iostream>
//using namespace std;
//
//template<class T>
//class mypair
//{
//	T a, b;
//public:
//	mypair(T first, T second)
//	{
//		a = first;
//		b = second;
//	}
//	T getmax();
//};
//template<class T>
//T mypair<T>::getmax()
//{
//	T retval;
//	retval = a > b ? a : b;
//	return retval;
//}
//int main()
//{
//	mypair <int> myobject(100, 77);
//	cout << myobject.getmax();
//	return 0;
//}
//                      ------------------------------------
//                                 EXERCISE 1.2
//                      ------------------------------------
//#include<iostream>
//using namespace std;
//
//template<class T>
//class mypair
//{
//	T a, b;
//public:
//	mypair(T first, T second)
//	{
//		a = first;
//		b = second;
//	}
//	T getmin();
//};
//template<class T>
//T mypair<T>::getmin()
//{
//	T retval;
//	retval = a > b ? a : b;
//	return retval;
//}
//int main()
//{
//	mypair <int> myobject(100, 77);
//	cout << myobject.getmin();
//	return 0;
//}
//                      -------------------------------------
//                                  EXAMPLE 1.5
//                      ------------------------------------
//
//
//#include<iostream>
//using namespace std;
//
//template<class T , int N>
//class mysequence
//{
//	T memblock[N];
//public:
//	void setmember(int x, T value);
//	T getmember(int x);
//	
//};
//
//template<class T , int N>
//void mysequence <T, N>::setmember(int x, T value)
//{
//	memblock[x] = value;
//}
//template <class T , int N>
//T mysequence<T, N> ::getmember(int x)
//{
//	return memblock[x];
//}
//int main()
//{
//	mysequence <int, 5> myints;
//	mysequence <double, 5> myfloats;
//
//	myints.setmember(0, 100);
//	myfloats.setmember(3, 3.1416);
//
//	cout << myints.getmember(0) << '\n';
//	cout << myfloats.getmember(3) << '\n';
//	return 0;
//}
//
//                    -----------------------------------------
//                                   EXAMPLE 1.6
//                    -----------------------------------------
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//int main(void)
//{
//	ofstream outfile;
//	outfile.open("fout.txt");
//
//	ifstream infile("fin.txt");
//	char ch;
//	int count = 0;
//
//	while (infile.get(ch))
//	{
//		outfile << ch;
//		count++;
//	}
//	outfile << "\n\n character count = " << count << endl;
//
//	infile.close();
//	outfile.close();
//	return 0;
//}
//              ------------------------------------------
//                            EXAMPLE 1.7
//              ------------------------------------------
//
//#include<iostream>
//#include <fstream>
//
//using namespace std;
//int main()
//{
//	char name[10];
//	float mt1, mt2, final, avg;
//
//	ifstream fin;
//	ofstream fout;
//
//	fin.open("input.dat");
//	fout.open("output.dat");
//
//	while (!fin.eof())
//	{
//		fin >> name >> mt1 >> mt2 >> final;
//		avg = 0.25 * mt1 + 0.25 * mt2 + 0.5 * final;
//		fout << name << '\t' << avg << endl;
//	}
//	fin.close();
//	fout.close();
//}
//                       ---------------------------------
//                              EXERCISE 1.1
//                       ---------------------------------
// #include <iostream>
//using namespace std;
//class Complex {
//private:
//	float re;
//	float im;
//public:
//	Complex(float  real, float imagionary) : re(real), im(imagionary) {}
//	Complex() : re(0.0), im(0.0) {
//
//	}
//	friend ostream& operator<<(ostream& out, const Complex& c) {
//		out << c.re << " + " << c.im << "i";
//		return out;
//	}
//
//	Complex operator*(Complex& other) {
//		Complex temp;
//		temp.re = re * other.re - im * other.im;
//		temp.im = re * other.im + im * other.re;
//		return temp;
//
//	}
//};
//
//int main() {
//	Complex c1(3, 2);
//	Complex c2(1, 7);
//	Complex result = c1 * c2;
//	cout << result;
//
//}
// 
//                             ----------------------------
//                                 EXERCISE 1.3
//                             ----------------------------
//#include <iostream>
//	using namespace std;
//
//	template <class T, int N>
//	class mysequence {
//		T memblock[N];
//
//	public:
//		void setmember(int x, T value);
//		T getmember(int x);
//		T getmax();
//		T getmin();
//	};
//
//
//	template <class T, int N>
//	void mysequence<T, N>::setmember(int x, T value) {
//		memblock[x] = value;
//	}
//
//	template <class T, int N>
//	T mysequence<T, N>::getmember(int x) {
//		return memblock[x];
//	}
//
//	template <class T, int N>
//	T mysequence<T, N>::getmax() {
//		T maxf = memblock[0];
//
//		for (int i = 1; i < N; i++) {
//			if (memblock[i] > maxf) {
//				maxf = memblock[i];
//			}
//		}
//		return maxf;
//	}
//
//	template <class T, int N>
//	T mysequence<T, N>::getmin() {
//		T minvalue = memblock[0];
//
//		for (int i = 1; i < N; i++) {
//			if (memblock[i] < minvalue) {
//				minvalue = memblock[i];
//			}
//		}
//		return minvalue;
//	}
//
//	int main() {
//		mysequence<int, 2> myints;
//		mysequence<double, 2> myfloats;
//
//		myfloats.setmember(0, 7);
//		myfloats.setmember(1, 9);
//
//		myints.setmember(0, 3);
//		myints.setmember(1, 9);
//
//		cout << myfloats.getmax() << " is max " << endl;
//		cout << myints.getmax() << " is max " << endl;
//		cout << myints.getmin() << " is min " << endl;
//
//		return 0;
//	}
//
//                       ---------------------------------
//                               EXERCISE 1.4
//                       ---------------------------------
//#include <iostream>
//#include <fstream>
//#include <cctype>  // For isspace() and ispunct()
//
//using namespace std;
//
//int main(void) {
//	ofstream outFile("fout.txt");
//	ifstream inFile("fin.txt");
//
//	if (!inFile) {
//		cerr << "Error opening input file.\n";
//		return 1;
//	}
//
//	char ch;
//	int charCount = 0, wordCount = 0, sentenceCount = 0;
//	bool inWord = false;
//
//	while (inFile.get(ch)) {
//		outFile << ch;
//
//
//		if (!isspace(ch)) {
//			charCount++;
//		}
//
//
//		if (isspace(ch)) {
//			if (inWord) {
//				wordCount++;
//				inWord = false;
//			}
//		}
//		else {
//			inWord = true;
//		}
//
//
//		if (ch == '.' || ch == '!' || ch == '?') {
//			sentenceCount++;
//		}
//	}
//
//
//	if (inWord) {
//		wordCount++;
//	}
//
//
//	outFile << "\n\nCharacter count = " << charCount << endl;
//	outFile << "Word count = " << wordCount << endl;
//	outFile << "Sentence count = " << sentenceCount << endl;
//
//
//	inFile.close();
//	outFile.close();
//
//	cout << "Processing complete. Results saved in fout.txt\n";
//	return 0;
//}
//
//                             ---------------------------
//                                 EXERCISE 1.6
//                              ------------------------------
//#include <iostream>
//#include <fstream>
//#include <iomanip>
//#include <string>
//
//using namespace std;
//
//class Student {
//private:
//	char name[30];
//	int grades[10];
//	float average;
//
//public:
//	void readData(ifstream& file, int numGrades) {
//		file.ignore();
//		file.getline(name, 30);
//
//		int sum = 0;
//		for (int i = 0; i < numGrades; i++) {
//			file >> grades[i];
//			sum += grades[i];
//		}
//		average = static_cast<float>(sum) / numGrades;
//	}
//
//	void display(int numGrades) const {
//		cout << left << setw(15) << name;
//		for (int i = 0; i < numGrades; i++) {
//			cout << setw(5) << grades[i];
//		}
//		cout << setw(10) << fixed << setprecision(2) << average << endl;
//	}
//
//	float getAverage() const {
//		return average;
//	}
//
//	string getName() const {
//		return string(name);
//	}
//};
//
//int main() {
//	string filename;
//	cout << "Enter the filename: ";
//	cin >> filename;
//
//	ifstream file(filename);
//	if (!file) {
//		cerr << "Error opening file!" << endl;
//		return 1;
//	}
//
//
//	int numStudents, numGrades;
//	if (!(file >> numStudents >> numGrades) || numStudents <= 0 || numGrades <= 0) {
//		cerr << "Invalid input data!" << endl;
//		return 1;
//	}
//
//	//  error handling
//	if (numStudents > 10000) {
//		cerr << "Too many students! Limit is 10,000." << endl;
//		return 1;
//	}
//
//
//	Student* students = nullptr;
//	try {
//		students = new Student[numStudents];
//	}
//	catch (bad_alloc& e) {
//		cerr << "Memory allocation failed: " << e.what() << endl;
//		return 1;
//	}
//
//	for (int i = 0; i < numStudents; i++) {
//		students[i].readData(file, numGrades);
//	}
//
//	file.close();
//
//
//	cout << "\nStudent Grades:\n";
//	cout << left << setw(15) << "Name";
//	for (int i = 1; i <= numGrades; i++) {
//		cout << setw(5) << "G" + to_string(i);
//	}
//	cout << setw(10) << "Average" << endl;
//	cout << string(50, '-') << endl;
//
//	for (int i = 0; i < numStudents; i++) {
//		students[i].display(numGrades);
//	}
//
//
//	float classSum = 0, highest = students[0].getAverage(), lowest = students[0].getAverage();
//	string highestName = students[0].getName(), lowestName = students[0].getName();
//
//	for (int i = 0; i < numStudents; i++) {
//		float avg = students[i].getAverage();
//		classSum += avg;
//		if (avg > highest) {
//			highest = avg;
//			highestName = students[i].getName();
//		}
//		if (avg < lowest) {
//			lowest = avg;
//			lowestName = students[i].getName();
//		}
//	}
//
//	float classAverage = classSum / numStudents;
//
//	cout << "\nClass Average: " << fixed << setprecision(2) << classAverage << endl;
//	cout << "Highest Average: " << highest << " (Student: " << highestName << ")\n";
//	cout << "Lowest Average: " << lowest << " (Student: " << lowestName << ")\n";
//
//
//	cout << "\nStudents below class average:\n";
//	for (int i = 0; i < numStudents; i++) {
//		if (students[i].getAverage() < classAverage) {
//			cout << students[i].getName() << endl;
//		}
//	}
//
//
//	delete[] students;
//
//	return 0;
//}
//                   -------------------------------------
//                              EXERCISE 1.5
//                     -------------------------------------
//#include <iostream>
//#include <string>
//using namespace std;
//
//class House {
//private:
//    string owner;
//    string address;
//    int bedrooms;
//    float price;
//
//public:
//    void readvalues() {
//
//        cout << "Enter owner: ";
//        getline(cin, owner);
//        cout << endl;
//        cout << "Enter address: ";
//        cin.ignore();
//        getline(cin, address);
//
//
//        cout << "Number of bedrooms: ";
//        cin >> bedrooms;
//
//        cout << "Enter price: ";
//        cin >> price;
//        cout << endl;
//    }
//
//    void print() {
//        cout << owner << "\t" << address << "\t" << bedrooms << "\t" << price << endl;
//    }
//};
//
//int main() {
//    House available[100];
//    char choice;
//    int count = 0;
//
//    do {
//        available[count].readvalues();
//        count++;
//
//        if (count >= 100) {
//            cout << "House limit reached." << endl;
//            break;
//        }
//
//        cout << "Do you want to continue? (Y/N): ";
//        cin >> choice;
//        choice = toupper(choice);//to change to uppercase
//
//    } while (choice == 'Y');
//
//    // Print the table header
//    cout << "Owner\tAddress\tBedrooms\tPrice" << endl;
//    cout << "--------------" << endl;
//
//    for (int i = 0; i < count; i++) {
//        available[i].print();
//    }
//
//    return 0;
//}

