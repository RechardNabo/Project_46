class Comon:
    def members(list1 , list2):
        alist1 = []
        alist2 = []
        alist1 =list1
        alist2 = list2
        for i in range (len(alist1)):
            check1 = alist1[i]
            for z in range (len(alist1)):
                if(check1 == alist2[z]):
                    print("there is atleast on member in common from list 1 to list 2")
                    break;
                else:
                    print("there is no member")
                    break
                    
                    
            check2 = alist2[i]
            for a in range (len(alist2)):
                if(check2 == alist1[a]):
                    print("there is a common member  from list 2 to list 1")
                    break
                else:
                    print("there is no member")
                    break
def main():
    alist = ["x","f","5","zx","88","3","11"]
    alist2 = ["f","x","1","z","87","33","22"]
    alist3 = ["a","b","c","d","e","r","100"]
    print("list 1")
    for i in range (len(alist)):
        print(alist[i])
    print("list 2")     
    for i in range (len(alist)):
        print(alist2[i])
    inner = input("please press [enter] tto check if lists have common character or enter q ")        
    if(inner == ""):
        c = Comon
        c.members(alist,alist3)
    else:
        print("thank you for your time")

if __name__ =="__main__":
    main()
