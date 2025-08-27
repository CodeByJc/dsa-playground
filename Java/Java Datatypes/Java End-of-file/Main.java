import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int lineNumber = 1;

        // keep reading until EOF
        while (sc.hasNext()) {
            String line = sc.nextLine();
            System.out.println(lineNumber + " " + line);
            lineNumber++;
        }

        sc.close();

    }
}
