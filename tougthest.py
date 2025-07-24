def caesar_cipher(text, shift, mode):
    result = ""
    for char in text:
        if char.isalpha():
            base = ord('a') if char.islower() else ord('A')
            shifted_char = chr((ord(char) - base + shift * mode) % 26 + base)
            result += shifted_char
        else:
            result += char
    return result

def main():
    message = input("Enter a message: ")
    shift = 3  # You can adjust the shift value
    print("Enter 1 for coding and 0 for decoding:")
    coding = input()
    coding = True if coding == "1" else False

    if coding:
        encoded_message = caesar_cipher(message, shift, 1)
        print("Encoded message:", encoded_message)
    else:
        decoded_message = caesar_cipher(message, shift, -1)
        print("Decoded message:", decoded_message)

if __name__ == "__main__":
    main()
