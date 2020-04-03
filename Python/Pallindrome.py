class Verify:
    def method(Word):
        word = Word
        newword = word[::-1]
        if(word == newword):
            print("words are the same after they are reversed")
            print("original word = ",word," reverse word = ",newword)
        else:
            print("they are not the same after reverse ")
            print("original word = ",word," reverse word = ",newword)


def main():
    myword = input("please enter the word you would like to reverse and check if is still the same ")
    Verify.method(myword)
if __name__"__main__":
    main()
