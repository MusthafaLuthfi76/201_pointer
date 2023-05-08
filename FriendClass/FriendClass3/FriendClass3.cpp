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

void manusia::ShowNilaiPelajar(pelajar& x) {
    cout << "Nilai Pelajar: " << x.nilai;
}
int main()
{
    std::cout << "Hello World!\n";
}

