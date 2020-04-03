class Translate:
    def translater(Word):
        word = Word
        counter = 1
        number = len(word)
        while(counter < number):
            word = word[:counter] + 'o' + word[counter:] + 'o'
            counter+=2
        print(word)
                                          


myword = input("please enter teh word you would like to translate  ")
Translate.translater(myword)
