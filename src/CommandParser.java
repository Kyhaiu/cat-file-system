import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class CommandParser
{
    private static String function;
    private static List<String> arguments;
    private static final String[] possibleCommands = {
            "cpin", "cpout", "exit",
            "format", "help", "ls",
            "mkdir", "mount", "new",
            "unmount"};

    public static boolean parsedCommand(String command) {
        // Obtem a posição do primeiro espço
        int s = -1;
        for (int i = 0; i < command.length(); i++) {
            if (command.charAt(i) == ' ') {
                s = i;
                break;
            }
        }

        // Se tem um espaço (mais do que uma palavra)
        if (s > 0) {
            function = command.substring(0,s);
            command = command.substring(s+1);
            arguments = Arrays.asList(command.split(" "));
        } else {
            // comando sem argumentos
            function = command;
            arguments = new ArrayList<>();
        }

        // Verifica se o comando existe
        for (String element : possibleCommands) {
            if (function.equals(element)) {
                return true;
            }
        }
        return false;
    }

    public static String getCommandName() {
        return function;
    }

    public static List<String> getArgs() {
        return arguments;
    }
}