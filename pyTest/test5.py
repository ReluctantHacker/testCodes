# this is bubble sort

def bubbleSort(unsorted_list):
    list_len = len(unsorted_list)
    for i in range(list_len - 1):
        for j in range(list_len - i - 1):
            if unsorted_list[j] > unsorted_list[j+1]:
                unsorted_list[j], unsorted_list[j+1] = unsorted_list[j+1], unsorted_list[j]
    return unsorted_list # which has already sorted



test_list = [5, 4, 3, 2, 1]
print(bubbleSort(test_list))


