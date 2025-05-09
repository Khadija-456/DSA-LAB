                  //------------------EXAMPLE 2.1------------
//#include<vector>
//#include<algorithm>
//#include<iostream>
//#include<conio.h>
//
//using namespace std;
//
//int main()
//{
//	vector <int> v;
//	for (int i = 0; i < 25; i++)
//		v.push_back(i);
//
//	random_shuffle(v.begin(), v.end());
//	for (int j = 0; j < 25; j++)
//		cout << v[j], " ";
//	cout << endl;
//	getch();
//	return 0;
//}

                  //-------------- - EXAMPLE 12.2-----------------
//#include<list>
//#include<algorithm>
//#include<iostream>
//#include<conio.h>
//
//using namespace std;
//int main()
//{
//	list <int> v;
//	for (int i = 0; i < 25; i++)
//		v.push_back(i);
//
//	for (int j = 0; j < 25; j++) {
//		cout << v.front() << " ";
//		v.pop_front();
//	}
//	cout << endl;
//	getch();
//	return 0;
//}

             //------------------EXAMPLE 12.3--------------------
//#include <algorithm>
//#include <iostream>
//#include <deque>
//#include <conio.h>
//
//using namespace std;
//int main()
//{
//	deque <int> v;
//	for (int i = 0; i < 25; i++)
//		v.push_back(i);
//
//	random_shuffle(v.begin(), v.end());
//
//	for (int j = 0; j < 25; j++) {
//		cout << v.front() << " ";
//		v.pop_front();
//	}
//	cout << endl;
//	getch();
//	return 0;
//}

                //-------------EXAMPLE 12.4----------------
//#include <list>
//#include <iostream>
//#include <stack>
//#include <conio.h>
//
//using namespace std;
//int main()
//{
//	stack <int, list<int> > stk;
//	for (int i = 1; i < 10; i++)
//		stk.push(i);
//
//	while (!stk.empty()) {
//		cout << stk.top() << endl;
//		stk.pop();
//	}
//	getch();
//	return 0;
//}

                  //------------------EXAMPLE 12.5----------------
//#include <iostream>
//#include <bitset>
//#include <conio.h>
//
//using namespace std;
//int main()
//{
//	bitset<16> b1("1011011110001011");
//	bitset<16> b2;
//
//	b2 = ~b1;
//	for (int i = b2.size() - 1; i >= 0; i--)
//		cout << b2[i];
//	cout << endl;
//
//	getch();
//	return 0;
//}
                    //----------------EXAMPLE 12.6----------------

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <conio.h>
//
//using namespace std;
//
//const int N = 100;
//
//int main()
//{
//    vector<int> iv(N);  
//    iv[50] = 37;
//
//    vector<int>::iterator iter = find(iv.begin(), iv.end(), 37);
//
//    if (iter == iv.end())
//        cout << "not found";
//    else
//        cout << "found at " << iter - iv.begin() << "\n";
//
//    getch();
//    return 0;
//}
//

              //------------------EXAMPLE 12.7----------------
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <conio.h>
//
//using namespace std;
//
//int set1[] = {1, 2, 3};
//int set2[] = {2, 3, 4};
//vector<int> set3(10);
//
//int main()
//{
//    vector<int>::iterator first = set3.begin();
//    vector<int>::iterator Last =
//        set_union(set1, set1 + 3, set2, set2 + 3, first);
//
//    while (first != Last) {
//        cout << *first << " ";
//        first++;
//    }
//
//    cout << endl;
//    getch();
//    return 0;
//}

                 //---------------EXERCISE 12.8-----------------
//#include <algorithm>
//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//int vec1[10];
//int vec2[10];
//
//int main()
//{
//    fill(vec1, vec1 + 10, -1);
//    for (int i = 0; i < 10; i++)
//        cout << vec1[i] << " ";
//
//    cout << endl;
//
//    fill_n(vec2, 5, -1);
//    for (int j = 0; j < 10; j++)
//        cout << vec2[j] << " ";
//
//    cout << endl;
//
//    getch();
//    return 0;
//}

                //---------------EXERCISE 12.9-----------------
//#include <iostream>
//#include <numeric>
//#include <conio.h>
//
//using namespace std;
//
//int vec1[] = {1, 2, 3, 4, 5};
//
//int main()
//{
//    int sum = accumulate(vec1, vec1 + 5, 0);
//    cout << sum << endl;
//
//    int prod = accumulate(vec1, vec1 + 5, 1, multiplies<int>());
//    cout << prod << endl;
//
//    getch();
//    return 0;
//}

                 //------------EXAMPLE 12.10---------------
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <cassert>
//#include <string>
//#include <cstring>
//#include <conio.h>
//
//using namespace std;
//
//class String {
//    char* str;
//
//public:
//    String() {
//        str = nullptr;
//    }
//
//    String(char* s) {
//        str = strdup(s);
//    }
//
//    int operator <(const String& s) const {
//        return strcmp(str, s.str) < 0;
//    }
//
//    char* getStr() const {
//        return str;
//    }
//};
//
//ostream& operator<<(ostream& os, const String& s) {
//    return os << s.getStr();
//}
//
//int main()
//{
//    const int N = 5;
//    char* list[N] = { "apple", "orange", "banana", "grape", "pear" };
//
//    vector<String> v;
//
//    for (int i = 0; i < N; i++)
//        v.push_back(String(list[i]));
//
//    random_shuffle(v.begin(), v.end());
//
//    for (int j = 0; j < N; j++)
//        cout << v[j] << " ";
//    cout << endl;
//
//    sort(v.begin(), v.end());
//
//    for (int j = 0; j < N; j++)
//        cout << v[j] << " ";
//
//    cout << endl;
//
//    getch();
//    return 0;
//}

              //-----------------EXERCISE 12.11----------------
//#include <iostream> 
//#include <string>
//#include <map>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//
//          typedef map<string, long, less<string> > MAP;
//          MAP counter;
//
//          char buf[256];
//
//          while (cin >> buf)
//          counter[buf]++;
//
//          MAP::iterator it = counter.begin();
//          while (it != counter.end()) {
//          cout << (*it).first << " "<< (*it).second << endl;
//          it++;
//}
//          getch();
//     return 0;
//}