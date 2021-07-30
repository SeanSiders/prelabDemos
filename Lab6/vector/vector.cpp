#include <iostream>
#include <vector>
#include <cstring>

/*
This program demonstrates the required operator overload to properly
use std::vector.
*/

class String 
{
    public:
    String& operator=(const String& other)
    {
        if (this != &other) 
        {
            if (str)
            {
                delete [] str;
                str = nullptr;
            }

            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }

        return *this;
    }

    //Default Constructor
    String() : str(nullptr) {}

    //Copy Constructor
    String(const String& source) : str(nullptr)
    {
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
    }

    //Parameterized Constructor
    String(const char* _str) : str(nullptr)
    {
        str = new char[strlen(_str) + 1];
        strcpy(str, _str);
    }

    //Deconstructor
    ~String()
    {
        delete [] str;
        str = nullptr;
    }

    void display() const
    {
        if (str) std::cout << str << '\n';
    }

    private:
    char* str;
};

int main(int argc, char** argv)
{
    std::vector<String> strings;

    //Populate the vector with all of the supplied strings in |argv|
    //Ignore argv[0], as it will be "a.out"
    for (int i = 1; i < argc; ++i) strings.push_back(String(argv[i]));

    //Erase the second to last item in the list
    //This requires std::vector to shift some of the data it is managing
    //The assignment operator is called on underlying data managed by std::vector
    if (strings.size() >= 2) strings.erase(strings.end() - 2);

    //Display the resulting vector
    for (int i = 0; i < (argc - 1); ++i)
    {
        strings[i].display();
    }

    return 0;
}
