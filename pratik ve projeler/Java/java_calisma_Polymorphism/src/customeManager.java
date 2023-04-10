public class customeManager {
    private basLogger llogger;
    public customeManager(basLogger logger)
    {
        this.llogger=logger;

    }
    public void add(){
        System.out.println("musteri eklendi");
        this.llogger.log("log message ");
      //  databaselogger logger =new databaselogger();

        //  System.out.println("log eklendi");



    }


}
