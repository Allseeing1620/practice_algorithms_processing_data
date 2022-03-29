#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int key, n, i, j, buff;
    cout << "Ââåäèòå ðàçìåð ìàññèâà: "; cin >> n;
    int* arr = new int[n]; // ñîçäàëè ìàññèâ íà n ýëåìåíòîâ

    for (int i = 0; i < n; i++) //Ðàíäîì çàïîëíåíèå ìàññèâà
    {
        arr[i] = rand() % 100; // çàïîëíÿåì ìàññèâ ñëó÷àéíûìè ÷èñëàìè
        cout << arr[i] << "  "; // âûâîä ìàññèâà íà ýêðàí
    }
    cout << endl;
    //Ñîðòèðîâêà íà÷àëî
    for (i = 1; i < n; i++)
    {
        buff = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > buff; j--)
            arr[j + 1] = arr[j];

        arr[j + 1] = buff;
    }
    //Ñîðòèðîâêà êîíåö
    cout << "Îòñîðòèðîâàííûé ìàññèâ" << endl;//Ñîðóòèðóåì ìàññèâ äëÿ òîãî ÷òîáû ñðàáîòàë ïîèñê,òê äëÿ íåãî íóæåí îòñð ìàññèâ
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl << "Ââåäèòå êëþ÷: ";

    cin >> key; // ñ÷èòûâàåì êëþ÷

    bool flag = false;
    int l = 0; // ëåâàÿ ãðàíèöà
    int r = n - 1; // ïðàâàÿ ãðàíèöà
    int mid;

    while ((l <= r) && (flag != true)) {
        mid = (l + r) / 2; // ñ÷èòûâàåì ñðåäèííûé èíäåêñ îòðåçêà [l,r]

        if (arr[mid] == key) flag = true; //ïðîâåðÿåì êëþ÷ ñî ñåðåäèííûì ýëåìåíòîì
        if (arr[mid] > key) r = mid - 1; // ïðîâåðÿåì, êàêóþ ÷àñòü íóæíî îòáðîñèòü
        else l = mid + 1;
    }

    if (flag) cout << "Èíäåêñ ýëåìåíòà " << key << " â ìàññèâå ðàâåí: " << mid + 1 << endl;
    return 0;
}