// Michael Masters 0343427
#include <iostream>

using namespace std;

class Preprocessor{ //creation of the preprocessor class
    public:

    std::string Process(const string input);
    std::string hashRemove(std::string input);
    std::string leadingOne (std::string input);
    void errorCheck (int line, std::string input);

};


std::string Preprocessor::Process(const std::string input){ //process orders the testd on the string

    string updated = "";

    updated = hashRemove(input);
    updated = leadingOne(updated);
    errorCheck(6, updated);

    return updated;
}


std::string Preprocessor::hashRemove(const std::string input){ //this tests for # and removes the rest of the line

    int ifFound = -1;
    std::string update = "";

    ifFound = input.find("#");

    if (ifFound != -1){
        for(int x = 0; x < ifFound; ++x){
            update += input.at(x);
        }
        return update;
    }
    return input;
}


std::string Preprocessor::leadingOne (std::string input){ //this tests for a leading space and removes it
    int firstChar = -1;
    string update = "";


    firstChar = input.find(" ");

    if (firstChar == 0){

        update = input.erase(0,1);
        return update;
    }

    return input;
}


void Preprocessor::errorCheck (int line, const std::string input){ //produces an error if $,% or & show up in the line

    string update = "";
    size_t place = -1;

        place = input.find("%");

        if(place == string::npos){

            place = input.find("$");
        }

        if(place == string::npos){

            place = input.find("&");
        }


    if(place != string::npos){

        std::cerr << "Error symbol found\n";
    }
}


int main()
{
    cout << "Hello world!" << endl;

    string line;

    Preprocessor p1;

    while (getline(cin,line)){

        cout << p1.Process(line) << endl;
    }

    return 0;
}
