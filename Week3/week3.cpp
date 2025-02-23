                                 //-------EXAMPLE 3.1--------
                                 // Computing factorial

//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//
//int fact(int n) {
//
//	if (n == 0)
//	{
//		return 1;
//	}
//	else {
//		return n * fact(n - 1);
//
//	}
//}
//int main() {
//	cout << fact(5) << endl;
//	getch();
//	return 0;
//
//
//}
 

//
//
                                //-----EXAMPLE 3.2-----
                                //  Reversing a string
//#include<iostream>
//#include<conio.h>
//
//using namespace std;
//
//
//
//void rev() {
//
//	char ch;
//	cin.get(ch);
//	if (ch != '\n') {
//
//		rev();
//		cout.put(ch);
//	}
//}
//
//
//int main() {
//	rev();
//	
//	return 0;
//
//}



                                   //-----EXAMPLE 3.3-----
                                   //  Computiung the power
//#include<iostream>
//using namespace std;
//
//int power(int X, int N) {
//	if (N == 0) {
//		return 1;
//
//
//
//	}
//	else {
//		return power(X, N - 1) * X;
//	}
//}
//



                                    // -----EXAMPLE 3.4----- 
                                  // Computing the Ackermann function

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int power(int X, int N) {
//	if (N == 0) {
//		return 1;
//
//
//
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		
//		return power(X, N - 1) * X;
//	
//	
//	}
//}
// 
// 
//
                                   //-----EXERCISE 3.1-----

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int power(int X, int N) {
//	if (N == 0) {
//		return 1;
//
//
//
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		
//		return power(X, N - 1) * X;
//	
//	
//	}
//}
// int main() {
//   int N = 20;  int X = 2;
//
//
//    for (int i = 0; i < N; i++) {
//
//       cout<< setw(20)<< power(X, i)<<endl;
//
//
//  }
//
//}
                                      //-----EXERCISE 3.2-----
// #include<iostream>
//#include<conio.h>
//using namespace std;
//
//
//
//int Ackerman(int m, int n) {
//
//
//	if (m == 0)
//		return n + 1;
//
//	else if (m > 0 && n == 0)
//	{
//		return Ackerman(m - 1, 1);
//	}
//
//	else if (m > 0 && n > 0) {
//		return Ackerman(m - 1, Ackerman(m, n - 1));
//	}
//}
//
//
//int main() {
// 
//	cout<< Ackerman(3, 4);
// 
//}
//




                                  
                                    //-----EXERCISE 3.3-----
                                    // a) part
//#include<iostream>
//using namespace std;
//
//void printnumbers(int N) {
//
//
//	if (N < 0) {
//		exit (1);
//	}
//
//	else {
//		
//		cout << N << endl;
//		printnumbers(N - 1);
//
//	}
//
//
//}
//
//int main() {
//	int N = 20;
//	printnumbers(20);
//
//}
//


                               //-----EXERCISE 3.3-----
                               //      b) part


//#include<iostream>
//#include<conio.h>
//using namespace std;


//int binomialcoeff(int n, int k) {
//
//
//	if (n== k)
//		return  1;
// 
// 
//
//	else if (n>0 && k == 0)
//	{
//		return 1;
// }
//
//	else if (k > 0 && k>n && n>1) {
// 
// 
//		return (n-1 ,k-1)+  (n-1,k);
//	}
//}
//
//int main() {
//
//
//	cout<< binomialcoeff( 4 ,  3);
//
//
//}



                               //-----EXERCISE 3.3-----
                               //      c) part
//
//#include<iostream>
//using namespace std;
//
//void checkprime(int n ) {
//
//
//	if (n % 2 != 0   || n%3==0) {
//
//
//
//
//
//	}
//
//}
//int main() {
//	int n;
//
//
//	
//	cout << " enter a  number to check is it prime ";
//	cin >> n;
//
//}
//
//
