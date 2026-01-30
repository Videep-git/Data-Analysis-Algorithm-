#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> AT={900, 910, 920, 1100, 1120};
    vector<int> DT={940, 1200, 950, 1130, 1140};

    sort(AT.begin(), AT.end());
    sort(DT.begin(), DT.end());

    int i=0, j=0;
    int platforms=0, maxPlatforms=0;

    while (i<AT.size() && j<DT.size()) {
        if(AT[i]<=DT[j]) {
            platforms++;
            maxPlatforms=max(maxPlatforms, platforms);
            i++;
        }
        else{
            platforms--;
            j++;
        }
    }
    cout<<"Minimum number of platforms required = " << maxPlatforms << endl;

    return 0;
}
