import java.time.DayOfWeek;
import java.time.LocalDate;
import java.util.Scanner;

public class FindDate {
    public static String getDay(String day, String month, String year) {
        LocalDate localDate = LocalDate.of(Integer.parseInt(year), Integer.parseInt(month), Integer.parseInt(day));
        DayOfWeek dayOfWeek = localDate.getDayOfWeek();
        return dayOfWeek.toString();
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String month = input.next();
        String day = input.next();
        String year = input.next();

        System.out.println(getDay(day, month, year));
    }
}
