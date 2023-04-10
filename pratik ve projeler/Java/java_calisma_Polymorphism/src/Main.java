public class Main {
    public static void main(String[] args) {
        emailLogger emailLogger= new emailLogger();
        emailLogger.log("mail log mesajı");

        customeManager customeManager= new customeManager(new databaselogger());
    }
}