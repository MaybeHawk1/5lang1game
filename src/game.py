import random

def GenRandInt(Min: int, Max: int) -> int:
    return random.randint(Min, Max)

def main():
    random_int = GenRandInt(1, 100)
    tries: int = 0

    while True:
        player_int = int(input("Please enter a number betweenn 1 - 100: "))

        if player_int > random_int:
            print("Number is too high")
            tries += 1
        elif player_int < random_int:
            print("Number is too low")
            tries += 1
        elif player_int == random_int:
            print(f"YOU WIN!!!!!!!!!!!!!!!\nNumber: {random_int}\nTries: {tries}")
            exit()

main()
