#include <iostream>
#include <string>
using namespace std;

class pelajar;
class manusia {
public :
    void ShowNilaiPelajar(pelajar&);
};

class pelajar {
private:
    int nilai;
public :
    pelajar() {
        nilai = 100;
    }
    friend void manusia::ShowNilaiPelajar(pelajar& x);
};
int main()
{
    std::cout << "Hello World!\n";
}

