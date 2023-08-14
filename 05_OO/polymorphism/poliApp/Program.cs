using System;

public interface IFormatter
{
    string Format();
}

public class Message
{
    private IFormatter _formatter;

    public Message(IFormatter formatter){
        _formatter = formatter;
    }

    public void Send(){
        Console.WriteLine(_formatter.Format());
    }
}

public class HellWorldFormatter : IFormatter
{
    public string Format(){
        return "Hell World";
    }
}

public class GoodMorningFormatter : IFormatter
{
    public string Format(){
        return "Good Morning";
    }
}

public class Program
{
    public static void Main(){
        var message1 = new Message(new HellWorldFormatter());
        message1.Send();

        var message2 = new Message(new GoodMorningFormatter());
        message2.Send();
    }
}