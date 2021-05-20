#include "RGN.h"


RGN::RGN() {
	cout << "Enter probability of showing zero's, but like a number from 0-1!!!" << endl;
	cin>>probability_;
	if (probability_ < 0 || probability_>1) {
		probability_ = 0.5;
	}
	cout << "================================" << endl;
}

void RGN::get_seed(vector<int>& seed,int k)  {
	srand(time(NULL));
	float a = 0;
	for (int i = 0; i < k; i++) {
		a = (float) rand() /RAND_MAX;
		if (a >= probability_) {
			a = 1;
		}
		else {
			a = 0;
		}
		seed.push_back(a);
	}
}