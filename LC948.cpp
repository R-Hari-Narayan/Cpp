//LeetCode problem 948: Bag of tokens

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int greedy(vector<int>& tokens, int power) {
    int score= 0;
    while(tokens[score]<=power && score< tokens.size()){
        power-= tokens[score];
        score++;
        cout<< score<< endl;
    }
    return score;
}

int bagOfTokensScore(vector<int>& tokens, int power) {
    sort(tokens.begin(), tokens.end());
    //Case 1: min(tokens) > Power
    if (tokens[0]> power){
        return 0;
    }

    //Case 2: sum(tokens) < Power
    int sum= 0;
    for (auto token: tokens){
        sum+= token;
    }
    if(sum< power){
        return tokens.size();
    }

    //Case 3: Greedy approach
    int greedy_score= greedy(tokens, power);
    
    if(tokens.size()< 4){
        return greedy_score;
    }
    
    //Case 4: Two pointers
    vector<int> scores= {greedy_score};
    while(scores.back() < tokens.size()-2){
        power= power- tokens.front()+ tokens.back();
        tokens.pop_back();
        tokens.erase(tokens.begin());
        for (auto element: tokens){
            cout<< element<< " ";
        }cout<< endl;
        cout<< power<< endl;
        int score= greedy(tokens, power);
        cout<< score<< endl;
        if (scores.back()< score){
            scores.push_back(score);
        }
    }
    return scores.back();
}

int main(){
    vector<int> tokens= {33,4,28,24,96};
    int power= 35;
    int score= bagOfTokensScore(tokens, power);
    cout<< "Score= "<< score<< endl;
    return 0;
}