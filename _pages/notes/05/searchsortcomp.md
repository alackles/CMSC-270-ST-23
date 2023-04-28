---
title: Searching & Sorting Competition
permalink: /notes/05/searchsortcomp/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

Welcome to the "competition"! The purpose here is to see if you can both _quickly_ and _accurately_ implement a new algorithm with the power of your groupmates.

Note: Coding fast is not actually the most necessary skill to have. Coding well can often be more important. But sometimes it's fun to push yourself a little and try developing new skills.

# Competition

## Instructions

**Your goal is to create a program that finds whether a particular value appears in the data, and returns the sorted data.**  These steps can appear in any order. 

## Win Condition

The file provided to you provides timing for execution of certain steps. **Your score is the combined (average) execution time of**:

- Your **sorting algorithm**,
- And the result of your **search**. 

All of the contestants will be ultimately run on my computer to ensure fairness. I will run it three times and take the average.

Only groups which submit their work by the end of the course period are eligible to win. 

## Prize

We currently have no scheduled topic for Friday, May 19. The winning group can pick the topic/activity for that date. It can be any topic inside or outside computer science; the only thing you can't pick is "cancel class". 

# Code

## Starter Files

The starter file for this project can be found [here](https://github.com/alackles/CMSC-270-ST-23/blob/main/_pages/code/05/searchsort/main.cpp).

The `main.cpp` file includes a random array. Note that this is not an ArrayList, but just a standard, C++ array. 


## Pseudocode

### Sorting

Below is the pseudocode for Insertion Sort and for Merge Sort. You will have to implement one of these as your sorting function. 

Insertion Sort

```
function InsertionSort(list A)

    for i from 1 to A.length-1
        
        valueToInsert = A[i]
        previousIndex = i-1
        
        while prevIndex >= 0 and key < A[prevIndex]:
            A[prevIndex+1] = A[prevIndex]
            prevIndex = prevIndex - 1
        end while
        
        A[prevIndex+1] = valueToInsert
    
    end for
    
    return A

end
        
```

Merge Sort

```
function MergeSort(array A)

    if A.length <= 1 
        return A
    end

    middleIndex = A.length / 2
    leftArray = MergeSort(A[0 ... middleIndex])
    rightArray = MergeSort(A[middleIndex ... A.length])
    mergedArray = merge(leftArray, rightArray)

    return merged Array

end

function Merge(array L, array R)

    initialize mergedArray
    leftIndex = 0
    rightIndex = 0

    while leftIndex < L.length AND rightIndex < R.length
        if L[leftIndex] <= R[rightIndex]
            mergedArray.add_back(L[leftIndex])
            leftIndex = leftIndex + 1
        else
            mergedArray.add_back(R[rightIndex])
            rightIndex = rightIndex +1
    end while
    
    if leftIndex < L.length
        add L[leftIndex ... L.length] to mergedArray
    end if

    if rightIndex < R.length
        add R[rightIndex ... R.length] to mergedArray
    end if

    return mergedArray

end

```


### Searching

Below is the pseudocode for Linear Search and Binary Search. You will have to implement one of these as your searching function.

Linear Search

```
function LinearSearch(array A, element x)

    for i from 0 to A.length-1
        if A[i] == x
            return i
        end if
    end for

    return -1

end
```

Binary Search

```
function BinarySearch(array A, element x)

    low = 0 
    high = A.length - 1

    while low <= high
        mid = (low + high) / 2
        
        if A[mid] == x
            return mid
        end if

        if x < A[mid]
            high = mid - 1      // new high value is whereever the middle was, since we need everything to the left
        else
            low = mid + 1       // new low value is wherever the middle was, since we need everything to the right
        end if

    end while

    return -1
end

```