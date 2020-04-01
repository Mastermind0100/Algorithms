def root(arr, i):
    while(arr[i]!=i):
        arr[i] = arr[arr[i]] #flatten the tree
        i = arr[i]
    return i

def connected(arr, id1, id2):
    return root(arr, id1) == root(arr, id2)

def union(size, arr, id1, id2):
    i1 = root(arr,id1)
    i2 = root(arr,id2)
    if(i1!=i2):
        if(size[i1]<size[i2]):
            arr[i1] = i2
            size[i2]+=size[i1]
        else:
            arr[i2] = i1
            size[i1]+=size[i2]

def main():
    ide = [0,1,2,3,4,5,6,7,8,9]
    size = [1,1,1,1,1,1,1,1,1,1]
    union(size, ide, 4, 3)
    union(size, ide, 3, 8)
    union(size, ide, 6, 5)
    union(size, ide, 9, 4)
    union(size, ide, 2, 1)
    union(size, ide, 5, 0)
    union(size, ide, 7, 2)
    union(size, ide, 6, 1)
    union(size, ide, 7, 3)
    print(connected(ide,1,9))

if __name__ == "__main__":
    main()