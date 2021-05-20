#include "LSFR.h"

LSFR::LSFR()
{
	cout << "How much bit's for your register?" << endl;
	cin >> bits_;
	cout << "================================" << endl;
	int a;
	cout << "How much coffitients for polynom?" << endl;
	cin >> a;
	cout << "================================" << endl;
	cout << "Enter them." << endl;
	for (int i = 0; i < a; i++) {
		int a;
		cin >> a;
		coeff_.push_back(a);
	}
	cout << "================================" << endl;
	
}

void LSFR::print_seed() const
{
	cout << "seed:";
	for (int i = 0; i < bits_; i++) {
		cout << seed_[i]<<" ";
	}
	cout << " " << endl;
	cout << "================================" << endl;
}

void LSFR::print_polynom() const
{
	cout << "Your polynoim is:" << endl;
	for (int i = coeff_.size()-1; i >=0; i--) {
		cout <<"x^"<< coeff_[i]<<"+";
	}
	cout << "1" << endl;
	cout << "================================" << endl;
}
void LSFR::print_secv20()
{
	int kolona = 6;
	for (int i =1; i <20 ; i++) {
		for (int j = 0; j < bits_; j++) {
			cout << Q_[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "================================" << endl;
}
void LSFR:: xor_(int k)
{	
	D0_ = Q_[k][coeff_[0]];
	for (int i = 1; i < coeff_.size(); i++) {
		D0_ ^= Q_[k][coeff_[i]];
	}
}
void LSFR::shift(int j)
{
	j += 1;
	Q_[j][0] = D0_;
	for (int i = 0; i < bits_ - 1; i++) {
				Q_[j][i+1] = Q_[j-1][i];
	}
	
}
//Petlja koja racuna 20 sekvecnijalnih rezultata LSFR-a.
void LSFR::secv20()
{
	for (int i = 0; i < bits_; i++) {
		Q_[0][i] = seed_[i];
	}

	for (int i = 0; i < 20; i++) {
		xor_(i);
		shift(i);
	}
}
