class Message:
    def __init__(self, formatter):
        self.formatter = formatter
    
    def send(self):
        return self.formatter.format()

class HelloWorldFormatter:
    def format(self):
        return "Hello, World!"

class GoodMorningFormatter:
    def format(self):
        return "Good Morning!"

# HelloWorldFormatterを使ってメッセージを送る
message1 = Message(HelloWorldFormatter())
print(message1.send())  # "Hello, World!"

# GoodMorningFormatterを使ってメッセージを送る
message2 = Message(GoodMorningFormatter())
print(message2.send())  # "Good Morning!"
