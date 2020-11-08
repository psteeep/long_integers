#pragma once 
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <time.h>

using namespace std;

class Method {
public:

    void factor(int n)
    {

        // Factor base for the given number 
        int base[4] = { 2, 3, 5, 7 };

        // Starting from the ceil of the root 
        // of the given number N 
        int start = int(sqrt(n));

        // Storing the related squares 
        vector<vector<int> >pairs;

        // For every number from the square root  
        // Till N 
        int len = sizeof(base) / sizeof(base[0]);
        for (int i = start; i < n; i++)
        {
            vector<int> v;

            // Finding the related squares  
            for (int j = 0; j < len; j++)
            {
                int lhs = ((int)pow(i, 2)) % n;
                int rhs = ((int)pow(base[j], 2)) % n;

                // If the two numbers are the  
                // related squares, then append 
                // them to the array  
                if (lhs == rhs)
                {
                    v.push_back(i);
                    v.push_back(base[j]);
                    pairs.push_back(v);
                }

            }
        }

        vector<int>newvec;

        // For every pair in the array, compute the  
        // GCD such that  
        len = pairs.size();
        for (int i = 0; i < len; i++) {
            int factor = __gcd(pairs[i][0] - pairs[i][1], n);
            
            // If we find a factor other than 1, then  
            // appending it to the final factor array 
            if (factor != 1)
                newvec.push_back(factor);

        }
        set<int>s;
        for (int i = 0; i < newvec.size(); i++)
            s.insert(newvec[i]);
        for (auto i = s.begin(); i != s.end(); i++)
            cout << (*i) << " ";
    }

    

    int pollardRho(int n) {
        if (n % 2 == 0)
            return 2;
        srand(time(NULL));
        int x, y, g = 1, a;
        x = rand() % n + 1;
        y = x;
        a = rand() % n + 1;
        while (g == 1) {
            x = ((x * x) + a) % n;
            y = ((y * y) + a) % n;
            y = ((y * y) + a) % n;
            g =__gcd(abs(x - y), n);
        }
        return g;
    }




};