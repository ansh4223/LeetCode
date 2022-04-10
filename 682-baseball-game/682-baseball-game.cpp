class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> records;
        for (const auto& i : ops) {
            if (i == "+") {
                records.emplace_back(records[records.size() - 2] + records.back());
            } else if (i == "D") {
                records.emplace_back(2 * records.back());
            } else if (i == "C") {
                records.pop_back();
            } else {
                records.emplace_back(stoi(i));
            }
        }
        return accumulate(records.begin(), records.end(), 0);
    }
};