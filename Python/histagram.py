class Histagram:
    def drawHistagram(alist):
        mylist = alist
        print(len(mylist))
        star ="*"
        for i in range (len(mylist)):
            for z in range (len(mylist[i])):
                print(star*(int(mylist[i])))
        print("===========================")
        for i in range (len(mylist[0])):
            print(star*int(mylist[0]))
        for i in range (len(mylist[1])):
            print(star*int(mylist[1]))
        for i in range (len(mylist[2])):
            print(star*int(mylist[2]))
        


def main():
    a = input("please enter the first data to draw histagram ")
    b = input("please enter the second data to draw histagram ")
    c =input("please enter the last  data to draw histagram ")
    alist = [a,b,c]
    Histagram.drawHistagram(alist)
if __name__=="__main__":
    main()