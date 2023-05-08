#include <iostream>
using namespace std;

class siswa;

class orang {
private:
    string nama;
public :
    void SetNama(string pNama);
    friend class siswa;
};

class siswa {
private :
    int id;
public :
    void setId(int pId);
    void displayAll(orang& a);
};
int main()
{
    std::cout << "Hello World!\n";
}

