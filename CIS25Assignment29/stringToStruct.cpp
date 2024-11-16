#include "stringToStruct.hpp"
using namespace myNamespace;

void stringToStruct(string inputString){
    int comma = 0;
    int numberOfMovies = 0;
    movie* movieArray = new movie[numberOfMovies];
    for(; inputString[comma] != ','; comma++){
    }
    string title = inputString.substr(0, comma);
    int stringLength = comma;
    for(; inputString[stringLength] != '\0'; stringLength++){
    }
    string year = inputString.substr(comma + 2, stringLength - 1);
    int intYear = stoi(year);
    cout << title << endl;
    cout << intYear << endl;
    numberOfMovies++;
    movieArray[numberOfMovies - 1] = {
        title, intYear
    };
    delete[] movieArray;
    movieArray = NULL;
}
