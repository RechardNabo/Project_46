class Max :

    def max(a, b,c):
        if(a>b and a > c):
            print("the vale ",a,"is a maximum")
        elif(b>a and b>c):
            print("the value ", b,"is a maximum")
        elif(c>a and c>b):
            print("the value ",c,"i s maximum ")
        else:
            print("they are all equal ")


def main():
    a = input("please enter the first value ")
    b = input("please enter the second value ")
    c = input("please enter the third value ")
    Max.max(a,b,c)
if __name__=="__name__":
    main()

