class Max :

    def max(a, b):
        try:

            if(a>b):
                print("the vale ",a,"is a maximum")
            elif(b>a):
                print("the value ", b,"is a maximum")
            else:
                print("they are equal")
        except Exception:
            print("please use numeric numbers [0,1,2,3,4,5,6,7,8,9]")

def main():
    a = input("please enter the first value ")
    b = input("please enter the second value")
    Max.max(a,b)
if __name__=="__main__":
    main()

