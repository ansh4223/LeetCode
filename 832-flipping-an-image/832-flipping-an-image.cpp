class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for (int i = 0; i < image.size(); ++i) {
            for (int j = 0; j < image[i].size() / 2; ++j) {
                int k = image[i].size() - j - 1;
                swap(image[i][j], image[i][k]);
            }
            for (int j = 0; j < image[i].size(); ++j) {
                image[i][j] = 1 - image[i][j];
            }
        }
        return image;
    }
};