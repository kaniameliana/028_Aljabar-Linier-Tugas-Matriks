#include<iostream>
using namespace std;

int main()
{
	//menginisialisasi variabel
	int matA[20][20];
	int matB[20][20];
	int hasil[20][20];
	int baris;
	int kolom;

	cout<<"\t PENJUMLAHAN MATRIKS"<<endl<<endl;

	//input baris matriks
	cout<<"Masukkan baris matriks: ";
	cin>>baris;
	//input kolom matriks
	
	cout<<"Masukkan kolom matriks: ";
	cin>>kolom;

	cout<<endl;

	//input matriks A
	cout<<"Masukkan matriks A :"<<endl;
	for (int i=0; i<baris; i++)
	{
		for (int j=0; j<kolom; j++)
		{
			cin>>matA[i][j];
		}
	}
	cout<<endl;

	//input matriks B
	cout<<"Masukkan matriks B : "<<endl;
	for (int i=0; i<baris; i++)
	{
		for(int j=0; j<kolom; j++)
		{
			cin>>matB[i][j];
		}
	}
	cout<<endl;

	//Hasil dari penjumlahan matriks A dan B
	cout<<"Hasil penjumlahan matriks A dan B "<<endl;
	for(int i=0; i<baris; i++)
	{
		for (int j=0; j<kolom; j++)
		{
			//Rumus penjumlahan kedua matriks
			hasil[i][j]=matA[i][j]+matB[i][j];
			//Menampilkan hasil penjumlahan dari kedua matriks
			cout<<hasil[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
