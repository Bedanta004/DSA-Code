#include<iostream>
#include<climits>
using namespace std;

int maximizeTheCuts(int n, int x, int y, int z){

    if(n == 0){
        return 0;
    }
    //for negetive cases
    if(n < 0){
        return INT_MIN;
    }
    //maine x length ka 1 segment cut karlia & then recursion will handle
    int option1 = 1+maximizeTheCuts(n-x, x, y, z);
    //maine y length ka 1 segment cut karlia & then recursion will handle
    int option2 = 1+maximizeTheCuts(n-y, x, y, z);
    //maine z length ka 1 segment cut karlia & then recursion will handle
    int option3 = 1+maximizeTheCuts(n-z, x, y, z);

    int finalAns = max(option1, max(option2, option3));
    return finalAns;
}
int main() {
    int n, x, y, z;
    // Input the total length n and the three segment lengths x, y, and z
    cout << "Enter total length (n): ";
    cin >> n;
    cout << "Enter segment lengths (x, y, z): ";
    cin >> x >> y >> z;

    // Call the function and display the result
    int result = maximizeTheCuts(n, x, y, z);
    cout << "Maximum number of cuts: " << result << endl;

    return 0;
}