<div align="center">
    <h1>Algorithms</h1>
    <i>Everthing about Algorithms</i>
</div>
<br />


---
## **Index**
* [**Dynamic Programming**](#dynamic-programming)
    - [**0-1 Knapsak**](#0-1-knapsack)
        - [**0-1 Knapsack - Recursion**](#0-1-recursion)
        - [**0-1 Knapsak - Memorization**](#0-1-memorization)
        - [**0-1 Knapsak - Top Down Aproach**](#0-1-top-down-aproach)
        - [**Subset Sum | Target Sum**](#subset-sum-or-target-sum)
        - [**Equal Sum Partition**](#equal-sum-partition)
        - [**Subset Sum**](#subset-sum)
        - [**Count Subset Sum**](#count-subset-sum)
        - [**Minimum Subset Sum Difference**](#minimum-subset-sum-difference)
    
## Dynamic Programming


- ### 0-1 Knapsack
  
    - #### **0-1 Recursion** 

        **Question :**  
        
            You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. Note that we have only one quantity of each item.
            In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values and weights associated with N items respectively.
             Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W.
              You cannot break an item, either pick the complete item or don’t pick it (0-1 property)

        **Problem Link :** &nbsp; &nbsp; [0 - 1 Knapsack Problem](https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1)
        
        > Input 1:

            N = 3
            W = 4
            values[] = {1,2,3}
            weight[] = {4,5,1}
        
        > Output 1:
        
            3
        
        > Input 2 :

            N = 3
            W = 3
            values[] = {1,2,3}
            weight[] = {4,5,6}
        
        > Output 2:
        
            0

        ***[Solution : &nbsp; 0-1 Knapsack Recursion](./Dynamic-Programming/0-1_Knapsack/Knapsack-Rec.cpp)***

    - #### **0-1 Memorization** 
        **Question :**

            *Same as Previous*
        
        **Problem Link :** [0 - 1 Knapsack Problem](https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1)
        
        > Input 1:

            N = 3
            W = 4
            values[] = {1,2,3}
            weight[] = {4,5,1}
        
        > Output 1:
        
            3
        
        > Input 2 :

            N = 3
            W = 3
            values[] = {1,2,3}
            weight[] = {4,5,6}
        
        > Output 2:
        
            0

        ***[Solution : 0-1 Knapsack Memorization](./Dynamic-Programming/0-1_Knapsack/Knapsack-Memorize.cpp)***



    - #### **0-1 Top Down Aproach**
        
        **Question :**

            *Same as Previous*
        
        **Problem Link :** [0 - 1 Knapsack Problem](https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1)
        
        > Input 1:

            N = 3
            W = 4
            values[] = {1,2,3}
            weight[] = {4,5,1}
        
        > Output 1:
        
            3
        
        > Input 2 :

            N = 3
            W = 3
            values[] = {1,2,3}
            weight[] = {4,5,6}
        
        > Output 2:
        
            0

        ***[Solution : 0-1 Knapsack Top Down Aproach](./Dynamic-Programming/0-1_Knapsack/Knapsack-DP.cpp)***


    - #### **Subset Sum or Target Sum**
        
        **Question :**

            Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 
        
        **Problem Link :** [Subset Sum Problem](https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)
        
        > Input 1:

            N = 6
            arr[] = {3, 34, 4, 12, 5, 2}
            sum = 9
        
        > Output 1:
        
            1
        
        > Input 2 :

            N = 6
            arr[] = {3, 34, 4, 12, 5, 2}
            sum = 30
        
        > Output 2:
        
            0

        ***[Solution : Subset Sum](./Dynamic-Programming/0-1_Knapsack/SubsetSum.cpp)***


    - #### **Equal Sum Partition**
        
        **Question :**

            Given an array arr[] of size N, check if it can be partitioned into two parts such that the sum of elements in both parts is the same. 
        
        **Problem Link :** [Subset Sum Problem](https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1)
        
        > Input 1:

            N = 4
            arr = {1, 5, 11, 5}
        
        > Output 1:
        
            YES
        
        > Input 2 :

            N = 3
            arr = {1, 3, 5}
        
        > Output 2:
        
            NO

        ***[Solution : Subset Sum](./Dynamic-Programming/0-1_Knapsack/EqualSumPartition.cpp)***


    - #### **Count Subset Sum**
        
        **Question :**

            Given an array arr[] of integers and an integer sum, the task is to count all subsets of the given array with a sum equal to a given sum.
        
        **Problem Link :** [Subset Sum Problem](https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1)
        
        > Input 1:

            N = 6, 
            arr[] = {2, 3, 5, 6, 8, 10}
            sum = 10
        
        > Output 1:
        
            3
        
        > Input 2 :

            N = 5, 
            arr[] = {1, 2, 3, 4, 5}
            sum = 10
        
        > Output 2:
        
            3

        ***[Solution : Subset Sum](./Dynamic-Programming/0-1_Knapsack/CountSubsetSum.cpp)***


    - #### **Minimum Subset Sum Difference**
        
        **Question :**

            Given an integer array arr of size N, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum and find the minimum difference 
        
        **Problem Link :** [Subset Sum Problem](https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1)
        
        > Input 1:

            N = 4, 
            arr[] = {1, 6, 11, 5} 
        
        > Output 1:
        
            1
        
        > Input 2 :

            N = 2, 
            arr[] = {1, 4}
        
        > Output 2:
        
            3

        ***[Solution : Subset Sum](./Dynamic-Programming/0-1_Knapsack/EqualSumPartition.cpp)***
