# CS 10 - Lab 9: Vectors- Standard Deviation

## Overview
Review, if needed, the concept and equation for calculating the mean and standard deviation of a finite and full set of values.

* Basic examples: http://en.wikipedia.org/wiki/Standard_deviation#Basic_examples
* Lengthy (but entertaining!) YouTube video on standard deviation
* Quick Reference: http://standard‐deviation.appspot.com/

You will be given two functions and must build the third. From within your cs010_practice directory, type `git pull` and hit enter in a terminal or download+upload the lab9.cpp starter file from the lab 9 Google drive directory.

The three functions for this lab: fillVector, average and standardDeviation.
1. Each of these three functions will perform the task implied by the name.
2. Each will have only one parameter, a vector of doubles (by value? by reference? by const reference?)
3. None of the functions should contain output statements.

*(given)* `fillVector` populates the vector with values acquired from input. Input redirection should be utilized in testing as you will not know how many values will exist, simply that each will be separated by whitespace. You may utilize this function or you may fill your vector through other means, when testing your function.

*(given)* `average` calculates and returns the mean of all the values in the pre‐filled vector which is provided as a parameter. This function is invoked once as a helper function within your standard deviation function.

*(todo)* `standardDeviation` calculates and returns the standard deviation of the values in the pre‐filled vector which is provided as a parameter.

R’Sub will use its own test harness, but **you still need to understand how to walk through and test your function!**

## Known Bugs
No currently known bugs!
