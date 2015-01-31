

#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
using namespace std;

namespace cs2b_mystring {
    class myString {
    public:
        int lengthString (const char *inString);
        myString();
        myString(const char *inString);
        myString(const myString& right);
        friend ostream& operator<<(ostream& out, const myString& source);
        friend istream& operator>>(istream& in, myString& target);
        void read (istream& in, char charin);
        char operator [](int index)const;
        char& operator [] (int index);
        int length ()const;
        friend bool operator<(const myString &left, const myString& right);
        friend bool operator<=(const myString &left, const myString &right);
        friend bool operator>(const myString &left, const myString &right);
        friend bool operator>=(const myString &left, const myString &right);
        friend bool operator ==(const myString &left, const myString &right);
        friend bool operator != (const myString &left, const myString &right);
        friend myString operator + (const myString &left, const myString &right);
         myString operator+=(const myString &right);
         ~myString();
        
        
    private:
        char *mystring;
        
        
    };
}



#endif
