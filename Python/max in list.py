class Max_list:
    def max_list(Alist):
        alist = Alist
        for i in range (len(alist)):
            maxim = alist[0]
            for z in range (len(alist)):
                result = alist[z]
                if( result > maxim):
                    maxim = result
                    
                elif(result < maxim ):
                    maxim = maxim
                    
                else:
                    maxim = maxim
                   
            
        return maxim







def main():
    inner = input("please enter a number to be put in a list enter yes to start or \n [enter] to quit : ")
    
    alist = [""]
    while(inner !=""):
        counter =0
        inner = input("please enter a number to be put in a list ")
        if(inner == ""):
            print("quiting . . ..")
            break;
        else:
            alist.insert(counter,inner)
            counter+=1
    if(len(alist) >= 1):
        m = Max_list
        print("max value is ",m.max_list(alist))
    else:
        print("thank you for yoour time ")

if __name__ == "__main__":
    main()
