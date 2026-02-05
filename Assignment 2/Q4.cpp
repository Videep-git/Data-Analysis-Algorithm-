#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;
};

bool cmp(Job a,Job b) {
    return a.profit > b.profit;
}

int main() {
    int N = 5;
    vector<Job> jobs = {
        {'J1', 2, 100},
        {'J2', 1, 19},
        {'J3', 2, 27},
        {'J4', 1, 25},
        {'J5', 3, 15}
    };

    sort(jobs.begin(),jobs.end(),cmp);

    int maxDeadline = 0;
    for (int i = 0;i < N;i++)
        maxDeadline = max(maxDeadline,jobs[i].deadline);

    vector<int> slot(maxDeadline+1,-1);
    int jobCount = 0;
    int maxProfit = 0;

    for (int i = 0; i < N; i++) {
        for (int t=jobs[i].deadline;t>=1;t--) {
            if (slot[t]==-1) {
                slot[t]=i;              
                jobCount++;
                maxProfit+=jobs[i].profit;
                break;  
            }                       
        }
    }
    cout <<"Number of jobs completed = " <<jobCount<<endl;
    cout <<"Maximum profit = " << maxProfit<<endl;
    return 0;
}
