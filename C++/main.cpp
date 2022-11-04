#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <fstream>

using namespace std;

class CaseOne{
	public:
		int i = 52;
};

class CaseTwo{
	public:
		int l = 4;
};

class CaseSon: public CaseOne, public CaseTwo{
	public:
		void print(){
			cout << i * l << endl;
		}
};

int compareSignedAndUnsigned();
int func();
int pointSwap(int *x, int *y);
int referenceSwap(int &x, int &y);
int point();
int iofile();
int ifile();
int ofile();

int * getVar(int *p);

void getCount(int *p);

int count = 10;

int main(){
	#if 0
		cout << "if case"  << endl;
	#endif
	
	//========1========
	//compareSignedAndUnsigned();
	
	//========2========
	//while(count--){
	//	func();
	//}
	
	//========3========
	//string s = "string";
	//cout << s << endl;
	
	//========4========
	//int a = 100;
	//int b = 200;
	//cout << "a: " << a << " , b: " << b << endl;
	//pointSwap(&a, &b);
	//referenceSwap(a, b);
	//cout << "a: " << a << " , b: " << b << endl;
	
	//========5========
	//cout << sqrt(81) << endl;
	//cout << hypot(3, 4) << endl;
	//double d = 90;
	//cout << cos(d) << endl;
	//srand(time(NULL));
	//double r = rand();
	//cout << "r: " << r << ", sin: " << sin(r) << endl;
	
	/*========6========
	int array[5] = {1, 2, 3, 4, 5};
	for(int i = 0; i < 5; i++){
		cout << "宽度为" << i << ":" << setw(i + 1) << array[i] << endl;
	}
	int *p;
	p = array;
	cout << p << endl;
	cout << &p << endl;
	cout << *(p + 1) << endl;
	char c[3] = {'a', 'b', 'c'};
	cout << c << endl;
	*/
	
	/*========7========
	point();
	*/
	
	/*========8========
	int a;
	getCount(&a);
	cout << a << endl;
	int b[2] = {1, 2};
	cout << *b << endl;
	getCount(b);
	cout << *b << endl;
	*/
	
	/*========9========
	int *p;
	cout << *getVar(p) << endl;
	*/
	
	/*========10========
	int i = 10;
	int &r = i;
	cout << &i << endl;
	cout << i << endl;
	cout << r << endl;
	cout << &r << endl;
	*/
	
	/*========11========
	time_t t = time(0);
   	char *date = ctime(&t);
	cout << "本地日期和时间：" << date << endl;
	
	tm *gmtm = gmtime(&t);
   	date = asctime(gmtm);
   	cout << "UTC 日期和时间："<< date << endl;
	*/
	
	/*========12========
	char name[50];
	
	cout << "请输入姓名：";
	cin >> name;
	cout << "您的姓名是：" << name << endl;
	*/
	
	/*========13========
	CaseSon caseSon;
	caseSon.print();
	*/
	
	/*========14========
	//iofile();
	ofile();
	*/
	
	/*========15========
	cout << __DATE__ << endl;
	cout << __FILE__ << endl;
	cout << __LINE__ << endl;
	cout << __TIME__ << endl;
	*/
	
	return 0;
}

int ifile(){
	char data[100];
	ofstream outfile;
	outfile.open("helloWorld.txt");
	outfile << data << endl;
	outfile.close();
	
	return 0;
}

int ofile(){
	char data[100];
	ifstream infile;
	infile.open("helloWorld.txt");
	cout << "**********" << endl;
	infile >> data;
	cout << data << endl;
	infile.close();
	
	return 0;
}

int iofile(){
	char data[100];
	ofstream outfile;
	outfile.open("helloWorld.txt");
	cout << "**********" << endl;
	cout << "line 1: " << endl;
	cin.getline(data, 100);
	outfile << data << endl;
	cout << "line 2: " << endl;
	cin >> data;
	cin.ignore();
	outfile << data << endl;
	outfile.close();
	
	ifstream infile;
	infile.open("helloWorld.txt");
	cout << "**********" << endl;
	infile >> data;
	cout << data << endl;
	infile >> data;
	cout << data << endl;
	infile.close();
	
	return 0;
}

int * getVar(int *p){
	int var = 100;
	
	p = &var;
	return p;
}

void getCount(int *p){
	*p = rand();
	
	return;
}

int point(){
	int var;
	int *p;
	int **pp;
	
	var = 10;
	p = &var;
	pp = &p;
	
	cout << "&var:" << &var << endl;
	cout << "var:" << var << endl;
	cout << "&p:" << &p << endl;
	cout << "p:" << p << endl;
	cout << "*p:" << *p << endl;
	cout << "&pp:" << &pp << endl;
	cout << "pp:" << pp << endl;
	cout << "*pp:" << *pp << endl;
	cout << "**pp:" << **pp << endl;
	
	return 0;
}

int referenceSwap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
	
	cout << "referenceSwap()" << endl;
	return 0;
}

int pointSwap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
	
	cout << "pointSwap()" << endl;
	return 0;
}

int func(){
	//static int i = 5;
	int i = 5;
	i++;
	
	cout << "i: " << i << ", count: " << count << endl;
	
	return 0;
}

int compareSignedAndUnsigned(){
	short int i;			//有符号短整数
	short unsigned int j;		//无符号短整数
	
	j = 50000;
	i = j;
	
	cout << i << " " << j << endl;	//-15536 50000
	
	return 0;
}
