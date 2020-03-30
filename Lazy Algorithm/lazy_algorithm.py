def root(arr,i):
    while arr[i]!=i:
        i = arr[i]
    return i

def union(arr, id1, id2):
    i = root(arr,id1)
    j = root(arr,id2)
    arr[i] = j

def connected(arr, id1, id2):
    return root(arr,id1)==root(arr,id2)

def main():
    ide = [0,1,2,3,4,5,6,7,8,9]
    union(ide, 2, 6)
    union(ide, 3, 2)
    union(ide, 1, 6)
    union(ide, 7, 9)
    union(ide, 0, 7)
    union(ide, 8, 9)
    union(ide, 3, 7)
    print(connected(ide, 6, 9))

if __name__ == "__main__":
    main()