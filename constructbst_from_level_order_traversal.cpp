//#include <bits/stdc++.h> 
#include<vector>
#include<iostream>

using namespace std;

typedef struct node{
    int data;
    int level;
    node *left;
    node *right;

}node_t;

node_t* construct_bst(vector<int> A, int N) {
    for (vector<int>::iterator i= A.begin(); i != A.end(); i++) {
        cout << *i << " ";
    }
    return NULL;
}

vector<int> solve (vector<int> A,int N) {
    node_t* ptr = construct_bst(A, N);
    return A;
}

int main() {
    int N = 7;
    vector<int> A{ 15, 6, 2, 10, 9, 7, 13 };
    vector<int> out_;
    out_ = solve(A,N);
    cout << out_[0];
    for(int i_out_=1; i_out_<N; i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
    return 1;
}