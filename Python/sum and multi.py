class Math:
    def Sum(A,B,C,D):
        
        a=A
        b=B
        c=C
        d=D
        return (a+b+c+d)
    def Product(A1,B1,C1,D1):
        a1 = A1
        b1 = B1
        c1 = C1
        d1 = D1
        answer=int(a1*b1*c1*d1)
        print(answer)
    

def main():
    a = input("please enter first value ")
    b = input("please enter the second value ")
    c = input("please enter third value ")
    d = input("please enter the last value ")
    Math.Product(a,b,c,d)
    print(Math.Sum(a,b,c,d))
if __name__ == "__main__":
    main()