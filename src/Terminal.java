import java.util.*;

public class Terminal {

    static Scanner scanner = new Scanner(System.in);

    public static void command() {
        String line = scanner.nextLine();
        if(!CommandParser.parsedCommand(line)) {
            System.out.println("O Comando: \"" + CommandParser.getCommandName() + '\"' + " não é reconhecido");
            return;
        }

        String command = "";

        command = CommandParser.getCommandName();

        List<String> args;

        args = CommandParser.getArgs();

        for (String arguments: args) {
            System.out.println(arguments);
        }

        if (Objects.equals(command, "cpin")) {
            System.out.println("Executando comando cpin");
        } else if (Objects.equals(command, "cpout")) {
            System.out.println("Executando comando cpout");
        } else if (Objects.equals(command, "exit")) {
            System.out.println("Executando comando exit");
            System.exit(0);
            return;
        } else if (Objects.equals(command, "format")) {
            System.out.println("Executando comando format");
        } else if (Objects.equals(command, "help")) {
            System.out.println("Executando comando help");
        } else if (Objects.equals(command, "ls")) {
            System.out.println("Executando comando ls");
        } else if (Objects.equals(command, "mkdir")) {
            System.out.println("Executando comando mkdir");
        } else if (Objects.equals(command, "mount")) {
            System.out.println("Executando comando mount");
        } else if (Objects.equals(command, "new")) {
            System.out.println("Executando comando new");
        } else if (Objects.equals(command, "unmount")) {
            System.out.println("Executando comando unmount");
        }


    }
}
