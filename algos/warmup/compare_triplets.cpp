#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

vector <int> solve(int a0, int a1, int a2, int b0, int b1, int b2)
{
    // Complete this function
    std::vector<int> results;
    int score_a = 0;
    int score_b = 0;
    
    if(a0 > b0)
        score_a++;
    else if(b0 > a0)
        score_b++;

    if(a1 > b1)
        score_a++;
    else if(b1 > a1)
        score_b++;
    
    if(a2 > b2)
        score_a++;
    else if(b2 > a2)
        score_b++;
    
    return vector<int>{score_a, score_b};
}

int main() 
{
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector <int> result = solve(a0, a1, a2, b0, b1, b2);
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
