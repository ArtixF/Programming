//Michael Masters 0343427
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <stdio.h>
#include <math.h>

using namespace std;
using std::ios;

void output (string date, string sample, int counter, double average, string s2){

    //opening the output file
    ofstream outputFile;
    outputFile.open (s2, ios::app);

    string date2 = "";
    string sample2 = "";
    string counter2 = "";
    string average2 = "";
    int numDig = log10(average)+1;

    //formatting date and storing it in date2
    for(int i = 0; i < 12; ++i){

        date2 = date;
        i += date.length()-1;

        if (date2.length() < 12){

            date2 += ' ';
        }
    }


    //formatting sample and storing it in sample2
    for(int i = 0; i < 6; ++i){

        sample2 = sample;
        i += sample.length() -1;

        if (date2.length() < 6){

            sample2 = ' ' + sample2;;
        }
    }

    //formatting counter and storing it in counter2
    counter2 = std::to_string(counter);

    if (counter < 9){

        counter2 += ' ';
    }

    //formatting average and storing it in average2
    for(int i = 0; i < 12; ++i){

        average2 = std::to_string(average);

       if (average2.find(".") != std::string::npos) {

            average2 += '.';
        }

        else if (average2.length() < numDig+6){

            average2 += '0';
        }

        else{

            average2 += ' ';
        }
    }

    //sending output to file
    outputFile << date2 << " " << sample2 << " " << counter2 << " " << average2 << "\n";

    outputFile.close();
}


void chars(string s1, string s2){

    string element = "";
    string date = "";
    string sample = "";

    int counter = 0;
    double total = 0.;

    int i = 0;

     //gathering the first part of the line that is date
    while (s1.at(i) != ' '){

        date += s1.at(i);
        ++i;
    }
    ++i;

     //gathering the secong part of the line that is sample
    while (s1.at(i) != ' '){

        sample += s1.at(i);
        ++i;
    }
    ++i;

    //gathering the third part of the line that are the values
    while (i < s1.length()-1){

        element = "";

        while (s1.at(i) != ' '){

            element += s1.at(i);
            ++i;
        }
        ++i;
        counter++;

        total += std::stod (element);
    }

    double average = total/counter;

    output(date,sample, counter, average, s2);
}

void lines(string s1, string s2){

    //ifstream ifin("C:\\Users\\mikem\\Documents\\C++\\A4 - Averages\\Averages");
    //opening the input file
    ifstream inputFile;
    inputFile.open (s1);

    string line = "";

    //getting lines from the input file
    while (std::getline(inputFile, line)){

        chars(line, s2);
    }

    inputFile.close();
}


int main(){

    cout << "Hello world!" << endl;

    //getting the input and output files from the user
    string s1 = "";
    string s2 = "";
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    lines(s1, s2);

    return 0;
}
