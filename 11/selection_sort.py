def selection_sort(my_list):
    for i in range(len(my_list) - 1):
        min_idx = i
        for j in range(i+1, len(my_list)):
            if my_list[j]<my_list[min_idx]:
                min_idx = j
        my_list[i], my_list[min_idx] = my_list[min_idx], my_list[i]
    return my_list

if __name__ == "__main__":
    my_list = [1,5,7,12,43,6,3,8,9,1,3,3]
    result = selection_sort(my_list)
    print(result)