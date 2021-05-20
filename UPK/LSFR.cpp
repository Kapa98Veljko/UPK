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

int LSFR::get_bits() const
{
	return bits_;
}

vector<int> & LSFR::get_coeff_()
{
	return coeff_;
}

void LSFR::print_seed() const
{
	int size = seed_.size();
	cout << "seed:";
	for (int i = 0; i < size; i++) {
		cout << seed_[i]<<" ";
	}
	cout << " " << endl;
}
