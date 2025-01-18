#include <bits/stdc++.h>
using namespace std;

class Solution {
    // Store visited cells in a set
    set<pair<int, int>> visited;
    int m;
    
    // Directions for checking adjacent cells (right, down, left, up)
    const int dx[4] = {1, 0, -1, 0};
    const int dy[4] = {0, -1, 0, 1};
    
    // Check if a point is part of any stamp impression
    bool isPartOfStamp(int x, int y) {
        return visited.find({x, y}) != visited.end();
    }
    
    // Add all points of a stamp impression
    void addStampPoints(int startX, int startY) {
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
                visited.insert({startX + i, startY + j});
            }
        }
    }
    
public:
    int solve(int n, int m_val, vector<pair<int, int>>& moves) {
        visited.clear();
        m = m_val;
        
        // Current position of stamp's bottom-left corner
        int currX = 0, currY = 0;
        
        // Add points for each stamp impression
        for(const auto& move : moves) {
            currX += move.first;
            currY += move.second;
            addStampPoints(currX, currY);
        }
        
        int perimeter = 0;
        
        // For each visited cell, check its four adjacent sides
        for(const auto& point : visited) {
            int x = point.first;
            int y = point.second;
            
            // Check each adjacent side
            for(int i = 0; i < 4; i++) {
                int newX = x + dx[i];
                int newY = y + dy[i];
                
                // If adjacent cell is not part of stamp impression, 
                // this side contributes to perimeter
                if(!isPartOfStamp(newX, newY)) {
                    perimeter++;
                }
            }
        }
        
        return perimeter;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        vector<pair<int, int>> moves(n);
        for(int i = 0; i < n; i++) {
            cin >> moves[i].first >> moves[i].second;
        }
        
        Solution solver;
        cout << solver.solve(n, m, moves) << "\n";
    }
    
    return 0;
}