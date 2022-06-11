import random


def results(result, userChoice, compChoice):
    print(f" {result}]\n"
          f"User: {userChoice}\n"
          f"Comp: {compChoice}")
    isChar, userChoice = userIn("play again? [y] / a[n]y button to quit")
    if isChar == True and userChoice == 'Y':
        gameLoop()
    else:
        print("Goodbye")
        exit()


def whoWon(userChoice, compChoice):
    print("hello whoWon")
    """
    Rock beats scissors
    Scissors beats paper
    Paper beats rock
    """
    choices = ('R', 'P', 'S')
    winner = 0  # user = 1 Computer = 2
    if userChoice == compChoice:  # if tie
        result = 'Tie'
        results(result, userChoice, compChoice)

    if userChoice != compChoice:
        match userChoice:
            case userChoice if userChoice == choices[0]:
                if compChoice == 'P':
                    result = 'Computer Won'
                    results(result, userChoice, compChoice)

                else:
                    print("Player Won")
                    result = "Player Won"
                    results(result, userChoice, compChoice)

            case userChoice if userChoice == choices[1]:
                if compChoice == 'S':
                    result = 'Computer Won'
                    results(result, userChoice, compChoice)

                else:
                    print("Player Won")
                    result = "Player Won"
                    results(result, userChoice, compChoice)

            case userChoice if userChoice == choices[2]:
                if compChoice == 'R':
                    result = 'Computer Won'
                    results(result, userChoice, compChoice)

                else:
                    print("Player Won")
                    result = "Player Won"
                    results(result, userChoice, compChoice)


# End whoWon()


def userIn(inputMsg):
    # This checks if the user input is a single character
    inputMsg = inputMsg
    userInput = input(inputMsg).upper()
    result = False
    if len(userInput) != 1:
        result = False
        return result, userInput

    result = True
    return result, userInput

    # End userIn


def computerChoice():
    choices = ('R', 'P', 'S')

    randNum = random.randrange(0, 3)
    compChoice = choices[randNum]
    print(f"randNum = {randNum}"
          f"Choices are: {choices[0]},{choices[1]},{choices[2]}")
    print(f"Computer Chose {compChoice}")
    return compChoice

    # End CompChoice


def gameLoop():
    choices = ('R', 'P', 'S')
    isChar, userChoice = userIn(f"Choose {choices}")
    print(f"{userChoice}")

    if userChoice == 'quit': exit()
    if isChar == False:
        print(f"Must be {choices}")
        gameLoop()

    if isChar == True and userChoice == 'R' or userChoice == 'P' or userChoice == 'S':
        print(f"User Chose {userChoice} \n\n")  # Assume that user has choesn rp or s
        compChoice = computerChoice()
        print(f"{compChoice}")
        print("Call Who Won")

    else:
        print(f"Must be {choices}")
        gameLoop()

    # End gameloop


def main():
    print("Hello Main")
    isChar, userInput = userIn("Would you like to play RPS? [Y]/[N]")

    # Make function for other checks as well

    if userInput == 'Quit' or userInput == 'N':
        print("Goodbye")
        exit()

    if isChar == True and userInput == 'Y':
        print(f"UserInput: {userInput}")
        print("calling game loop")
        gameLoop()

    if isChar == True and userInput != 'Y':
        print(f"UserInput: {userInput}\n"
              f"Must Be [Y]/[N]")
        main()

    if isChar == False:
        print(f"Not a Char: {userInput}")
        main()

    # End Main


if __name__ == '__main__':
    main()
