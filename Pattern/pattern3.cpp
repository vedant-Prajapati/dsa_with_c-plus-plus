// 1234
// 1234
// 1234
// 1234
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // for (int i = 1; i<=4; i++){
    //     cout <<"1 2 3 4"<< endl;
    // }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
    }


    return 0;
}