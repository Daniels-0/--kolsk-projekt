#include <iostream>
using namespace std;

//Selection Sort Funkcia
int selectionSort(int pole[], int n)
{
    int i, j, small, temp;
    for (i = 0; i < n - 1; i++)
    {
        small = i;

        for (j = i + 1; j < n; j++)
        {
            if (pole[j] < pole[small])
                small = j;
        }

        temp = pole[i];
        pole[i] = pole[small];
        pole[small] = temp;
    }
    return 0;
}
//Funkcia na zobrazenie polia
void displayArray(int pole[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << pole[i] << " "; cout << "\n";

}




void bubbleSort(int pole[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( pole[j] > pole[j+1])
            {
                // výmena
                temp = pole[j];
                pole[j] = pole[j+1];
                pole[j+1] = temp;
            }
        }
    }
}

void insertionSort(int pole[], int size) {
for (int i = 0; i < size - 1; i++) {
int j = i + 1;
int tmp = pole[j];
while (j > 0 && tmp > pole[j-1]) {
pole[j] = pole[j-1];
j--;
}
pole[j] = tmp;
}
}


//Main Function
int main() {

for (int q= 1; q == 1;) {

    int n;
    cout << "Napiš počet zoradenych čísel?"<<endl; cin >> n;
    int pole[n], e, i, ans;
    cout << "Napiste čisla"<<endl;

    for (i = 0; i < n; i++)
        cin >> pole[i];


std::cout << "vyberte si algoritmus" << '\n';
std::cout << "1. selectionSort" << '\n';
std::cout << "2. insertionSort" << '\n';
std::cout << "3.bubbleSort" << '\n';

int g;
std::cin >> g;
if (g==1) {
    selectionSort(pole, n);
}
if (g==2) {
    insertionSort(pole, n);
}
if (g==3) {
    bubbleSort(pole, n);
}

    cout << "Po zoradeni"<<endl;


    displayArray(pole, n);std::cout << endl;



    cout << "Ak chcete pokracovat zadajte 1" << endl;
    cin >> q;
}
    return 0;
}

