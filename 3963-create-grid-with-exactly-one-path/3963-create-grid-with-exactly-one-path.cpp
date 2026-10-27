#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> createGrid(int m, int n) {
        // स्टेप 1: शुरुआत में एक ऐसी ग्रिड बनाओ जिसमें m रो (rows) हों,
        // और हर रो में n बार '#' (दीवार) भरी हो।
        std::vector<std::string> g(m, std::string(n, '#'));
        
        // स्टेप 2: पहली रो (Row 0) को पूरी तरह से रास्ता '.' बना दो
        g[0] = std::string(n, '.');
        
        // स्टेप 3: एक लूप चलाकर हर रो (row) के सबसे आख़िरी वाले अक्षर (n-1) को '.' बना दो
        for (int i = 0; i < m; i++) {
            g[i][n - 1] = '.';
        }
        
        // तैयार ग्रिड को वापस भेज दो
        return g;
    }
};
