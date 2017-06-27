//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab9.cpp
/// @brief Lab 9
///
/// @author Ryan Ulep [rulep001@ucr.edu]
/// @date May 26, 2015
//  ================== END ASSESSMENT HEADER ===============
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void fillVector(vector <double> &);
double average(const vector <double> &);

int main()
{
    return 0;
}

// Fill the vector with values
void fillVector(vector <double> &v)
{
    double d;
    while (cin >> d)
    {
        v.push_back(d);
    }
}

// Calculate the average value of all the variables in the vector
double average(const vector <double> &v)
{
    double sum = 0.;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v.at(i);
    }

    return sum / v.size();
}

// Calculate the standard deviation of all variables in the vector
double standardDeviation(const vector<double> v)
{
    double standardDev = 0.0;
    double sum = 0.0;
    double mean = 0.0;

    mean = average(v);

    for (int i = 0; i < v.size(); i++)
    {
        sum = sum + pow((v.at(i) - mean), 2);
    }

    standardDev = sqrt(sum / v.size());

    return standardDev;
}
