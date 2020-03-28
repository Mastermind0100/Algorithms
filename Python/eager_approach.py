def union(arr,id1,id2):
    if arr[id1]!=arr[id2]:
        for i in range(0,10):
            if arr[i]==arr[id1]:
                arr[i]=arr[id2]
    return arr

def connected(arr,id1,id2):
    if arr[id1]==arr[id2]:
        return True
    else:
        return False

def main():
    ide = [0,1,2,3,4,5,6,7,8,9]
    ide = union(ide,4,9)
    print(connected(ide,4,8))

if __name__ == "__main__":
    main()