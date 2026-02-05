#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int value;
    int weight;
    double ratio;
};

bool compare(Item a,Item b) {
    return a.ratio > b.ratio;
}

int main() {
    int N=3;
    int W=50;

    vector<int> value={100,60,120};
    vector<int> weight={20,10,40};

    vector<Item> items(N);

    for(int i=0;i<N;i++) {
        items[i].value=value[i];
        items[i].weight=weight[i];
        items[i].ratio=(double)value[i]/weight[i];
    }

    sort(items.begin(),items.end(),compare);
    double maxValue=0.0;

    for(int i = 0;i < N && W > 0;i++) {
        if(items[i].weight <= W) {
            maxValue+=items[i].value;
            W-=items[i].weight;
        } else {
            maxValue+=items[i].ratio * W;
            W=0;
        }
    }
    cout <<"Maximum value = "<<maxValue<<endl;
    return 0;
}
