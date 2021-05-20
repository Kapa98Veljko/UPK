#ifndef _RNG_H_
#define _RNG_H_

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<vector>

using namespace std;

class RGN {

public:
	RGN();
	
	float get_probability() const;
	void get_seed(vector<int>&,int k) ;
public:
	float probability_;
};
//inline methods
inline float RGN::get_probability() const {
	return probability_;
}
#endif //! _RNG_H_ 