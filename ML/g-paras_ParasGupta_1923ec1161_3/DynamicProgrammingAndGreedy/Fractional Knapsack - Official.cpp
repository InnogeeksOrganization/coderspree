#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    double v1 = (double) p1.first / p1.second;
    double v2 = (double) p2.first / p2.second;

    return v1 > v2;
}

int main(){
    int n;
    cin >> n;
    vector<int> val(n);
    vector<int> weight(n);
    for (int i=0; i<n; i++)
        cin >> val[i];
    for (int i=0; i<n; i++)
        cin >> weight[i];
    int cap;
    cin >> cap;
    vector<pair<double, int>> p(n);
    for (int i=0; i<n; i++){
        p[i].first = val[i];
        p[i].second = weight[i];
    }
    sort(p.begin(), p.end(), compare);
    double ans=0.0;
    for (int i=0; i<n; i++){
        if (cap >= p[i].second){
            ans += p[i].first;
            cap -= p[i].second;
            continue;
        }
        double vw = (double) p[i].first / p[i].second;
        ans += vw*cap;
        cap = 0;
        break;
    }
    cout << fixed << setprecision(1) << ans << endl;
    // cout << ans ;
    return 0;
}