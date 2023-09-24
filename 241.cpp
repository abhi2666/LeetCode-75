/*
Example 2:

Input: expression = "2*3-4*5"
Output: [-34,-14,-10,-10,10]
Explanation:
(2*(3-(4*5))) = -34
((2*3)-(4*5)) = -14
((2*(3-4))*5) = -10
(2*((3-4)*5)) = -10
(((2*3)-4)*5) = 10

*/

class Solution
{
    bool isOperator(char ch)
    {
        return (ch == '+' || ch == '-' || ch == '*');
    }

    vector<int> getDiffWays(int i, int j, string &expression)
    {

        // If length of the substring is 1 or 2
        // we encounter our base case i.e. a number found.
        int len = j - i + 1;
        if (len <= 2)
        {
            return {stoi(expression.substr(i, len))};
        }

        // If it is not a number then it is an expression
        // now we try to evaluate every opertor present in it
        vector<int> res;
        for (int ind = i; ind <= j; ind++)
        {
            if (isOperator(expression[ind]))
            {
                char op = expression[ind];

                // if char at ind is operator
                // get all results for its left and right substring using recursion
                vector<int> left = getDiffWays(i, ind - 1, expression);
                vector<int> right = getDiffWays(ind + 1, j, expression);

                // try all options for left & right operand
                // and push all results to the answer
                for (int l : left)
                {
                    for (int r : right)
                    {
                        if (op == '+')
                        {
                            res.push_back(l + r);
                        }
                        else if (op == '-')
                        {
                            res.push_back(l - r);
                        }
                        else if (op == '*')
                        {
                            res.push_back(l * r);
                        }
                    }
                }
            }
        }
        return res;
    }

public:
    vector<int> diffWaysToCompute(string expression)
    {
        int n = expression.size();
        return getDiffWays(0, n - 1, expression);
    }
};