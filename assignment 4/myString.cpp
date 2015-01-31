#include <iostream>
#include "mystring.h"
#include <string>
#include <cassert>
using namespace std;

namespace cs2b_mystring
{
    
    
    
    int myString::lengthString(const char *inString)
    {
        return (strlen(inString));
    }
    
    
    
    int  myString::length () const
    {
        return strlen(mystring);
    }
    
    
    
    myString::myString()
    {
        mystring= new char[1];
        strcpy(mystring,"");
    }
    
    
    
    
    myString::myString(const char *inString)
    {
        mystring = new char[ lengthString(inString)+1];
        strcpy(mystring, inString);
    }
    
    
    
    
    myString::myString(const myString& right)
    {
        mystring = new char[ lengthString(right.mystring)+1];
        strcpy(mystring, right.mystring);
        
    }
    
    
    
    
    ostream& operator<<(ostream&out, const myString& source)
    {
        out  <<  source.mystring;
        return out;
    }
    
    
    
    
    istream& operator>>(istream& in, myString& target)
    {
       
        while (isspace(in.peek())){
            in.ignore();
        }
        
        char temp[128];
        in.getline(temp,127,' ');
        delete [] target.mystring;
        target.mystring = new char[ strlen(temp) + 1];
        strcpy(target.mystring, temp);
        
        
        return in;
    }
    
  
    
    
    
    void myString::read(istream& in, char inchar)
    {
        while (isspace(in.peek())){
            in.ignore();
        }
        char temp[128];
        in.getline(temp, 127,inchar);
        delete [] this->mystring;
        this->mystring = new char[ strlen(temp) + 1];
        strcpy(this->mystring, temp);
        
    }
    
    
    
    
    char myString:: operator [](int index)const
    {
        assert(index >=0 && index < strlen(mystring));
        
        return mystring[index];
    }
    
    
    
    
    char& myString:: operator[](int index)
    {
        assert(index >=0 && index < strlen(mystring));
        
        return mystring[index];
    }
    
    
    
    
     bool operator<(const myString &left, const myString &right)
    {
        if( strcmp(left.mystring,right.mystring)< 0)
            return true;
        else
            return false;
  
    }
    
    
    
    
    bool operator<=(const myString &left, const myString &right)
    {
        if( strcmp(left.mystring,right.mystring)== 0)
            return true;
        else
        {
            if( strcmp(left.mystring,right.mystring)< 0)
                return true;
            else
                return false;
        }
        
        
    }
    
    
    
    
    bool operator > (const myString &left, const myString &right)
    {
        if( strcmp(left.mystring,right.mystring)> 0)
            return true;
        else
            return false;
        
    }
    
    
    
    
    bool operator >= (const myString &left, const myString &right)
    {
        if( strcmp(left.mystring,right.mystring)== 0)
            return true;
        else
        {
            if( strcmp(left.mystring,right.mystring)> 0)
                return true;
            else
                return false;
        }

        
    }
    
    
    
    
    bool operator == (const myString &left, const myString &right)
    {
        return (strcmp(left.mystring,right.mystring)== 0);
    }
    
    
    
    
    bool operator != (const myString &left, const myString &right)
    {
        return (strcmp(left.mystring,right.mystring)!= 0);
    }
    
    
    
    myString operator+(const myString &left, const myString &right)
    {
        return strcat(left.mystring,right.mystring);
    }
    
    
    
    myString myString:: operator+=(const myString &right)
    {
        (*this).mystring = (strcat((*this).mystring, right.mystring));
        return (*this).mystring;
    }
    
    
    
    
    
    
    
}
