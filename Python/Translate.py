class Translate:
    def translate(Word):
        word =Word
        counter = len(word)
        for i in range (0,counter):
            word = word.join("o")
        print(word)

def main():
    myword = input("please enter a word you want to translate to swidish robbors word ")
    Translate.translate(myword)
if __name__=="__main__":
    main()