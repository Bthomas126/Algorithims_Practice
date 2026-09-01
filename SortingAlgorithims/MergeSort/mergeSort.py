def merge_sort(arr):
    """Simple merge sort with step-by-step output"""
    print(f"Sorting: {arr}")
    
    # Base case: array with 1 element is already sorted
    if len(arr) <= 1:
        print(f"Base case: {arr} is already sorted")
        return arr
    
    # DIVIDE: Split array in half
    mid = len(arr) // 2
    left = arr[:mid]
    right = arr[mid:]
    print(f"Split into: {left} and {right}")
    
    # CONQUER: Recursively sort both halves
    print("Sorting left half:")
    sorted_left = merge_sort(left)
    
    print("Sorting right half:")
    sorted_right = merge_sort(right)
    
    # COMBINE: Merge the sorted halves
    result = merge(sorted_left, sorted_right)
    print(f"Merged: {sorted_left} + {sorted_right} = {result}")
    
    return result


def merge(left, right):
    """Merge two sorted arrays"""
    result = []
    i = j = 0
    
    # Compare elements and add smaller one to result
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    
    # Add any remaining elements
    result.extend(left[i:])
    result.extend(right[j:])
    
    return result


# Example usage
if __name__ == "__main__":
    print("MERGE SORT EXAMPLE")
    print("=" * 30)
    
    # Test array
    numbers = [38, 27, 43, 3, 9, 82, 10, 20, 2, 100, 1]
    print(f"Original: {numbers}")
    print()
    
    # Sort the array
    sorted_numbers = merge_sort(numbers)
    
    print()
    print(f"Final result: {sorted_numbers}")