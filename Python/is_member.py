class Myclass:
    def is_member(myin,myin2):
        alsit = myin
        wordcheck = myin2
        for i in range (len(alist)):
            check = alist[i]
            if(wordcheck == check):
                print("word exist inside a list ")
                break
            else:
                print("does not exit")
                continue
       

class Members:
    def is_memmber(memb , alist):
        alists = []
        alists = alist
        paas = memb
        for i in range (len(alists)):
            check = alists[i]
            if(check == paas):
                print("is  a member ")
               
            elif(check != paas):
                print("its not a member ")
                
                   
              

def main():
    counter = 0
    inner = input("please enter a charater to store in the list : ")
    while(inner !=""):
        inner = input("please enter a charater to store in the list : ")
        alist = ["","","","","","","",""]
        alist.insert(counter,inner)
       #alist[counter] = inner
        counter +=1 

    
    for i in range (len(alist)):
        print(alist[i])
    #Myclass.is_member(alist)



def main2():
    inner = input("please enter a character to check if is a member ")
    alist = ["f","x","5","zx","88","3","11"]
    m = Members
    m.is_memmber(inner,alist)

if __name__=="__main__":
    main2()
