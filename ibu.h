#ifndef IBU_H
#define IBU_H

#include <vector>
#include "anak.h"
class ibu {
public:
    string nama;
    vector<anak*> daftarAnak;

    ibu(string pNama) : nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    }

    ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }

    void tambahAnak(anak* pAnak) {
        daftarAnak.push_back(pAnak);
    }

    void cetakAnak() {
        cout << "Daftar anak dari ibu \"" << nama << "\":\n";
        for (auto& a : daftarAnak) {
            cout << "- " << a->nama << "\n";
        }
    }
};

#endif

