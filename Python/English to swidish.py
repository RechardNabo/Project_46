class Lexicon:
    def translate(Alist):
        dict1 = {"merry":"god","chrisstmas":"jul","and":"och","happy":"gott","new":"nytt","year":"ar"}
        alist =Alist
        for i in range (len(alist)):
            word = alist[i]
            if(word != dict1[word]):
                print(word," does not exist in dictionary list")
            else:
                print(dict1[word])
        for i in range (len(dict1)):
            print(dict1[word])

    def trans2(Alist):
        dict1 = {"merry":"god","christmas":"jul","and":"och","happy":"gott","new":"nytt","year":"ar"}
        alist = Alist
        if(alist in dict1):
            print(dict1[word])
    def trans3():
        dict1 = {"merry":"god","christmas":"jul","and":"och","happy":"gott","new":"nytt","year":"ar"}
        #alist = Alist
        key = dict1.values()
        print(key)
        
    def trans4(Alist):
        dict1 = {"merry":"god","christmas":"jul","and":"och","happy":"gott","new":"nytt","year":"ar"}
        alist = Alist
        print("====================translated words====================")
        for i in range (len(alist)):
            word = alist[i]
            word2 = dict1[word]
            print(word ,"         = ",word2)



    def trans5(Alist):
        alist = Alist
        dict1 = {"merry":"god","christmas":"jul","and":"och","happy":"gott","new":"nytt","year":"ar"}
        alist = Alist
        
        dict2 = dict2.fromkeys(alist)
        dict2 = dict2.fromkeys(alist,10)
        print(dict2)




        

def main():
    alist = []
    inner = input("would you like to ttranslate words from English to swidish (yes =y / no =n) ")
    counter = 5
    count = 0
    while(counter >=0 and inner !="n" ):
        inner = input("please enter a word : ")
        if(inner ==""):
            break
        alist.insert(count,inner)
        count = count +1
        counter = counter -1
    if(len(inner) <=0):
        print("you did not enter any words,\n thnk you for your time")
    else:
        l = Lexicon
        l.trans4(alist)
if __name__=="__main__":
    main()
    
