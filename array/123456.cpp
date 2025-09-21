#include <iostream>
#include <vector>
#include <stack>

int max_power_block(std::vector<std::vector<int>>& grid) {
    if (grid.empty() || grid[0].empty()) {
        return 0;
    }
    
    int rows = grid.size();
    int cols = grid[0].size();
    int max_sum = 0;
    
    std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols, false));
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] > 0 && !visited[i][j]) {
                long long current_sum = 0;
                std::stack<std::pair<int, int>> s;
                s.push({i, j});
                visited[i][j] = true;
                
                while (!s.empty()) {
                    std::pair<int, int> current = s.top();
                    s.pop();
                    int r = current.first;
                    int c = current.second;
                    
                    current_sum += grid[r][c];
                    
                    int dr[] = {-1, 1, 0, 0};
                    int dc[] = {0, 0, -1, 1};
                    
                    for (int k = 0; k < 4; ++k) {
                        int new_r = r + dr[k];
                        int new_c = c + dc[k];
                        
                        if (new_r >= 0 && new_r < rows && new_c >= 0 && new_c < cols &&
                            grid[new_r][new_c] > 0 && !visited[new_r][new_c]) {
                            s.push({new_r, new_c});
                            visited[new_r][new_c] = true;
                        }
                    }
                }
                
                if (current_sum > max_sum) {
                    max_sum = current_sum;
                }
            }
        }
    }
    
    return max_sum;
}