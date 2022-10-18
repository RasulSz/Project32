#include <iostream>
using namespace std;

//Task 1
//MyString
//1)1 ci xarakter qaytaran method
//2)sonuncu xarakter qaytaran method 
//3) Append(const char* text)  
//4) s.rfind('a') 
//5)s.find('w')//6 xarakterin indexi qayitsin
//6)s.clear()//string silinsin delete edin


//class MyString {
//private:
//
//    char* string;
//    size_t length;
//    void SetLength(int len) {
//        this->length = len;
//    }
//
//public:
//
//    MyString() :string(NULL), length(NULL) {
//    }
//
//    MyString(const char* string) {
//        SetString(string);
//    }
//
//    MyString(const MyString& other) {
//        SetString(other.string);
//    }
//
//    MyString& operator=(const MyString& other) {
//        SetString(other.string);
//        return *this;
//    }
//
//    void SetString(const char* string) {
//        int l = strlen(string);
//        this->string = new char[l + 1] {};
//        strcpy_s(this->string, l + 1, string);
//        SetLength(l);
//    }
//
//    size_t GetLength() const {
//        return length;
//    }
//
//    char* GetString()const {
//        return string;
//    }
//
//    void Append(const char* newtext) {
//        int newlen = strlen(newtext) + 10;
//        if (newtext != nullptr && newlen > 0) {
//            size_t new_length = GetLength() + newlen;
//            char* new_data = new char[new_length + 1] {};
//            strcat_s(new_data, GetLength() + 1, string);
//            strcat_s(new_data, newlen + 1, newtext);
//            delete[]this->string;
//            this->string = new_data;
//            cout << new_data << endl;
//            new_data = nullptr;
//            SetLength(new_length);
//        }
//        else {
//            cout << "Text is null or empty : ERROR" << endl;
//        }
//    }
//
//    void FirstChar(const char*str) {
//        cout << str[0] << endl;
//    }
//
//    void LastChar(const char* str) {
//        cout << str[strlen(this->string) - 1] << endl;
//    }
//
//    void FindReverse(const char* str) {
//        for (size_t i = GetLength(); i > 0; i--)
//        {
//            if (str[i] == 'a') {
//                cout << "Index : " << i << "  a" << endl;
//            }
//        }
//    }
//
//    void Find(const char*str) {
//        for (size_t i = 0; i < GetLength(); i++)
//        {
//            if (str[i] == 'a') {
//                cout << "Index : " << i << "  a" << endl;
//            }
//        }
//    }
//
//    ~MyString() {
//        delete[]string;
//    }
//};
//void main() {
//    MyString string = "Salam";
//    MyString a1 = string;
//    cout << string.GetString() << endl;
//    string.FirstChar("Salam");         //Task 1
//    string.LastChar("Salam");          //Task 2
//    string.Append(" Aleykum");         //Task 3
//    string.FindReverse("Salam");       //Task 4
//    string.Find("Salam");              //Task 5
//    //Task 6 = 88 ci setrde destructor vasitesi ile string delete olunub. 
//}




//Task 2
//1. IntArray class-i yaradin. Bu class massiv rolunu
//oynamalidir.
//Novbeti imkanlar olsun :
//Massivin evveline reqem elave eden method
//Massivin sonuna reqem elave eden method
//Massivi copy etmek imkani yaradin
//Print


//class IntArray {
//private:
//
//	int size;
//	int elemenets;
//
//public:
//
//	IntArray() :size(1),elemenets(0) {
//
//	}
//
//	IntArray(int s, int e) {
//		SetSize(s);
//		SetElement(e);
//		
//	}
//
//	IntArray(IntArray& other) {
//		SetSize(other.size);
//		SetElement(other.elemenets);
//
//	}
//
//	void SetSize(int s) {
//		if (this->size >= 0) {
//			this->size = s;
//		}
//		else {
//			cout << "It Is Impossible" << endl;
//		}
//	}
//	
//	void SetElement(int e) {
//		this->elemenets = e;
//	}
//
//	int GetSize()const {
//		return this->size;
//	}
//
//	int GetElement()const {
//		return this->elemenets;
//	}
//
//	void AddNumberAfter(int num) {
//		int* arr = new int [GetSize() + 1] {num, GetElement()};
//		for (size_t i = 0; i < GetSize()+1; i++)
//		{
//			cout << arr[i] << " ";
//		}
//	}
//
//	void AddNumberBefore(int num) {
//		int* arr = new int [GetSize() + 1] {GetElement(),num};
//		for (size_t i = 0; i < GetSize() + 1; i++)
//		{
//			cout << arr[i] << " ";
//		}
//	}
//
//	void Show() const {
//		int* arr = new int [GetSize()] {GetElement()};
//		for (size_t i = 0; i < GetSize(); i++)
//		{
//			cout << arr[i] << " ";
//		}
//	}
//};


//void main() {
//	IntArray b;
//	b.Show();		//Show Array
//	//b.AddNumberAfter(5);			//Task 1
//	//b.AddNumberBefore(4);			//Task 2
//	//copy constructor yaradilib	//Task 3
//	//Show Print ucundu				//Task 4	
//}
