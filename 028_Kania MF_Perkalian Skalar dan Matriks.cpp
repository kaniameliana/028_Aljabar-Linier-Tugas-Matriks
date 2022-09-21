 #include <iostream>
 using namespace std;

 int main()
 {
 	//inisialisasi variabel
 	int matriks[20][20];
 	int hasil [20][20];
 	int baris;
 	int kolom;
 	int skalar;



 	cout<<"\t PERKALIAN MATRIKS DENGAN SKALAR"<<endl<<endl;

 	//input baris
 	cout<<"Masukkan baris matriks: ";
 	cin>>baris;
 	//input kolom
 	cout<<"Masukkan kolom matriks: ";
 	cin>>kolom;
 	//input bil. skalar
 	cout<<"Masukkan bilangan skalar: ";
 	cin>>skalar;
 	cout<<endl;


 	//looping untuk pembuatan matriks
 	cout<<"Matriks"<<endl;
 	for (int i = 0; i<baris; i++)
	 {
 		for (int j = 0; j<kolom; j++)
		 {
 			cin>>matriks[i][j];
		 }
	 }
	 cout<<endl;

	 //looping untuk hasil matriks
	 cout<<"Hasil perkalian skalar dan matriks"<<endl;
	 for (int i=0; i<baris; i++)
	 {
	 	for (int j=0; j<kolom; j++)
		 {
		 	//Rumus perkalian matriks dengan skalar
	 		hasil[i][j]=skalar*matriks[i][j];
	 		//Menampilakan hasil matriks
	 		cout<<" "<<hasil[i][j];
		 }
		 cout<<endl;
	 }
	 return 0;
 }
