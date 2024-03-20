#include <iostream>
#include <vector>
using namespace std;

void tambahDanTampil();
void banding();

struct itemKu{
    string nama;
    int stat;
};

vector<itemKu> item;

int main()
{
    tambahDanTampil();
    banding();
    return 0;
}
void tambahDanTampil(){
    string nama;
    int stat;
    string tanya;

    do {
        cout << "Masukkan Nama item: ";
        cin >> nama;
        cout << "Masukkan Stat item: ";
        cin >> stat;
        cout << "\n\n";
        item.push_back({nama,stat});

        cout << "Apakah ingin menginput lagi? [y/n]: ";
        cin >> tanya;
    }while (tanya!="n");

    for (int i=0;i<item.size();i++){
        cout << "Nama Item: "<< item[i].nama;
        cout << "\n";
        cout << "Stat Item: "<< item[i].stat;
        cout << "\n\n";
    }
}

void banding(){
    int maxStat = item[0].stat;
    int minStat = item[0].stat;
    int newIndexMax = 0;
    int newIndexMin = 0;

    for (int i=1;i<item.size();i++){
        if (item[i].stat > maxStat){
            maxStat = item[i].stat;
            newIndexMax = i;
        } else if(item[i].stat < minStat){
            minStat = item[i].stat;
            newIndexMin = i;
        }
    }

    cout << "Item Terhebat adalah "<< item[newIndexMax].nama;
    cout << "\n";
    cout << "Item Terlemah adalah "<< item[newIndexMin].nama;
    cout << "\n";
}
