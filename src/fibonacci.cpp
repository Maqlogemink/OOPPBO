#include <iostream>

using namespace std;

int main() {
	cout << "Program deret Fibonacci" << endl << endl;
	long int n,fn,fn1,fn2;
	char yn;
	
	while(true){
		
	cout << "Jalankan program? (y/n): "; cin >> yn;
	if (yn== 'y' || yn== 'Y'){
	cout << "Deret Fibonacci ke-";
	
	cin >> n;	
	
	fn1 = 1;
	fn2 = 0;
	cout << fn2 << endl;
	fn = fn1 + fn2;
	cout << fn << endl;
	for (int i=1; i<=n; i++) {
	 	fn = fn1 + fn2;
	 			fn2 = fn1;
	 	fn1 = fn;
	 	cout<< fn << endl;	
	}
}
	else if(yn== 'n'|| yn == 'N') {
		cout << "\nTerimakasih, silahkan jalankan kembali program jika anda membutuhkannya <3\n\n";
		break;
	}
	else {
		cout << "Masukkan inputan yang tersedia!!\n" << endl;
	}
}
return 0;
}
