#include <iostream>
#include <vector>
using namespace std;
/* In a network of ‘N’ nodes, every node is connected to some other node,
 but one of them is a congenial node which means a node connected to every other node in a network. Now,
 you have given the ‘N’ number of nodes labeled from 1 to N, 
 and you have to find the congenial node in the given network. */

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> ans(n, vector<int>(2));
    
    // Input edges into the 2D vector
    for (int i = 0; i < n; i++) {
        cin >> ans[i][0] >> ans[i][1];
    }
    
    // Assuming nodes are labeled from 1 to n (if nodes can be larger, 
    // you might need to find the maximum node value dynamically)
    vector<int> connectionCount(n + 1, 0); // Using a vector to count connections
    
    // Populate the connection count vector
    for (int i = 0; i < n; i++) {
        int u = ans[i][0];
        int v = ans[i][1];
        
        if (u != v) { // Ignore self-loops
            connectionCount[u]++;
            connectionCount[v]++;
        }
    }
    
    int congenialNode = -1;
    
    // Check for a congenial node
    for (int i = 1; i <= n; i++) { // Assuming nodes are labeled from 1 to n
        if (connectionCount[i] == n - 1) { // Node connected to all other nodes
            congenialNode = i;
            break;
        }
    }
    
    // Output the congenial node or -1 if none exists
    if (congenialNode != -1) {
        cout << congenialNode << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}
